/*
 * XREFs of xxxRemoveFullScreen @ 0x1C0035B8C
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C006E028 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int16 v4; // dx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(0LL, a1, 1088LL, 1LL);
    v4 = *(_WORD *)(gpDispInfo + 160LL);
    *(_WORD *)(gpDispInfo + 160LL) = v4 - 1;
    if ( !v4 )
    {
      PushW32ThreadLock(v1, v5, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow(v1, 1LL);
      PopAndFreeW32ThreadLock(v5);
      return 1;
    }
  }
  return v2;
}
