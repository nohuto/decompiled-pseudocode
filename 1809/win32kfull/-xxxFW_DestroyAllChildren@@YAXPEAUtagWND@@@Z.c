/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     UnredirectDCEs @ 0x1C000E880 (UnredirectDCEs.c)
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 StyleWindow; // rax
  BOOL v5; // esi
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v2 + 1208) & 0x40000) != 0 && *(struct tagWND **)(v2 + 1368) == a1 && *(_QWORD *)(v2 + 1376) )
    xxxSetModernAppWindow(a1, 0LL);
  while ( 1 )
  {
    v3 = *((_QWORD *)a1 + 11);
    if ( !v3 )
      break;
    v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v9;
    v9[1] = v3;
    _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) != 0 )
      SetVisible((struct tagWND *)v3);
    StyleWindow = GetStyleWindow(v3, 2848LL);
    v5 = StyleWindow && StyleWindow != v3;
    UnlinkWindow((struct tagTERMINAL *)v3, (__int64)a1);
    if ( v5 )
      UnredirectDCEs((struct tagWND *)v3);
    SetOrClrWF(1, v3, 0x480u, 1);
    SetOrClrWF(1, v3, 0x380u, 1);
    v6 = *(struct tagTHREADINFO **)(v3 + 16);
    if ( v6 == (struct tagTHREADINFO *)gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)v3, (struct tagSwitchWndInfo *)v9);
    }
    else
    {
      PostEventMessageEx(v6, 0, *(_QWORD *)v3, 0LL, 0LL);
      ThreadUnlock1(v8, v7);
    }
  }
}
