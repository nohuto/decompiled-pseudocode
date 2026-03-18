/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0036278
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     UnredirectDCEs @ 0x1C00760F4 (UnredirectDCEs.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 StyleWindow; // rax
  BOOL v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  while ( 1 )
  {
    v2 = *((_QWORD *)a1 + 11);
    if ( !v2 )
      break;
    v9[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v9;
    v9[1] = v2;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x10) != 0 )
      SetVisible((struct tagWND *)v2);
    StyleWindow = GetStyleWindow(v2, 2848);
    v4 = StyleWindow && StyleWindow != v2;
    UnlinkWindow((struct tagTERMINAL *)v2, (__int64)a1);
    if ( v4 )
      UnredirectDCEs((struct tagWND *)v2);
    SetOrClrWF(1LL, v2, 1152LL, 1LL);
    SetOrClrWF(1LL, v2, 896LL, 1LL);
    v5 = *(_QWORD *)(v2 + 16);
    if ( v5 == gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)v2);
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v5, *(_QWORD *)(v5 + 424), 8u, 0LL, 0, *(_QWORD *)v2, 0LL, 0LL);
      ThreadUnlock1(v7, v6, v8);
    }
  }
}
