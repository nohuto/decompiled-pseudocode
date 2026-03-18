/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     UnredirectDCEs @ 0x1C002702C (UnredirectDCEs.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     UnlinkWindow @ 0x1C00C8EC8 (UnlinkWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 StyleWindow; // rax
  BOOL v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v2 = *((_QWORD *)a1 + 2);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (*(_DWORD *)(v2 + 1224) & 0x40000) != 0 && *(struct tagWND **)(v2 + 1392) == a1 && *(_QWORD *)(v2 + 1400) )
    xxxSetModernAppWindow(a1, 0LL);
  while ( 1 )
  {
    v3 = *((_QWORD *)a1 + 14);
    if ( !v3 )
      break;
    v4 = *((_QWORD *)a1 + 14);
    v11 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v11;
    v12 = v3;
    HMLockObject(v4);
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) != 0 )
      SetVisible((struct tagWND *)v3, 0);
    StyleWindow = GetStyleWindow(v3, 2848);
    v6 = StyleWindow && StyleWindow != v3;
    UnlinkWindow(v3, a1);
    if ( v6 )
      UnredirectDCEs((struct tagWND *)v3);
    SetOrClrWF(1, v3, 0x480u, 1);
    SetOrClrWF(1, v3, 0x380u, 1);
    v7 = *(_QWORD *)(v3 + 16);
    if ( v7 == gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)v3);
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v7, *(_QWORD *)(v7 + 424), 8u, 0LL, 0, *(_QWORD *)v3, 0LL, 0LL);
      ThreadUnlock1(v9, v8, v10);
    }
  }
}
