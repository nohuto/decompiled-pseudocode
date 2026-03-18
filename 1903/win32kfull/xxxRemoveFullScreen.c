/*
 * XREFs of xxxRemoveFullScreen @ 0x1C0097200
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0017B08 (xxxSetTrayWindow.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int64 v4; // r9
  __int16 v5; // dx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(0, a1, 0x440u, 1);
    v5 = *(_WORD *)(gpDispInfo + 160LL);
    *(_WORD *)(gpDispInfo + 160LL) = v5 - 1;
    if ( !v5 )
    {
      memset(v6, 0, 24);
      PushW32ThreadLock((__int64)v1, v6, UserDereferenceObject, v4);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock(v6);
      return 1;
    }
  }
  return v2;
}
