/*
 * XREFs of xxxAddFullScreen @ 0x1C0108784
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0108784 (xxxAddFullScreen.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0017964 (xxxSetTrayWindow.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxAddFullScreen @ 0x1C0108784 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = (_QWORD *)a1[3];
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1[5] + 20LL) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(1, (__int64)a1, 0x440u, 1);
    if ( ++*(_WORD *)(gpDispInfo + 160LL) == 1 )
    {
      memset(v19, 0, 24);
      PushW32ThreadLock((__int64)v1, v19, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)v19, v10, v11);
      v3 = 1;
    }
    v6 = a1[15];
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      v9 = *(_BYTE *)(v8 + 31);
      if ( (v9 & 0x40) == 0 && !*(_DWORD *)(v8 + 96) && !*(_DWORD *)(v8 + 88) && (v9 & 0x10) == 0 )
      {
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
        v16 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
        v17 = v6;
        HMLockObject(v6);
        if ( (unsigned int)xxxAddFullScreen(v6) )
          v3 = 1;
        ThreadUnlock1(v14, v13, v15);
      }
    }
  }
  return v3;
}
