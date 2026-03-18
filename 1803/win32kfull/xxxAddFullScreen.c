/*
 * XREFs of xxxAddFullScreen @ 0x1C0103394
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0103394 (xxxAddFullScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C006E028 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxAddFullScreen @ 0x1C0103394 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // cl
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = (_QWORD *)a1[3];
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1[5] + 20LL) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(1, (__int64)a1, 1088, 1);
    ++*(_WORD *)(gpDispInfo + 160LL);
    v4 = gpDispInfo;
    if ( *(_WORD *)(gpDispInfo + 160LL) == 1 )
    {
      PushW32ThreadLock((__int64)v1, v15, UserDereferenceObject);
      ObfReferenceObject(v1);
      v3 = 1;
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)v15, v7);
    }
    v5 = a1[12];
    if ( v5 )
    {
      v8 = *(_QWORD *)(v5 + 40);
      v9 = *(_BYTE *)(v8 + 31);
      if ( (v9 & 0x40) == 0 && !*(_DWORD *)(v8 + 96) && !*(_DWORD *)(v8 + 88) && (v9 & 0x10) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
        v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v14;
        v14[1] = v5;
        _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
        if ( (unsigned int)xxxAddFullScreen(v5) )
          v3 = 1;
        ThreadUnlock1(v12, v11, v13);
      }
    }
  }
  return v3;
}
