/*
 * XREFs of xxxRemoveFullScreen @ 0x1C001D218
 * Callers:
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C00B376C (xxxSetTrayWindow.c)
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
    && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(0, a1, 0x440u, 1);
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
