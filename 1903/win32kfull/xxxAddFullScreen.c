/*
 * XREFs of xxxAddFullScreen @ 0x1C012D744
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C012D744 (xxxAddFullScreen.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0017B08 (xxxSetTrayWindow.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     xxxAddFullScreen @ 0x1C012D744 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF

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
      memset(v21, 0, 24);
      PushW32ThreadLock((__int64)v1, v21, UserDereferenceObject, v6);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)v21, v11, v12, v13);
      v3 = 1;
    }
    v7 = a1[15];
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 40);
      v10 = *(_BYTE *)(v9 + 31);
      if ( (v10 & 0x40) == 0 && !*(_DWORD *)(v9 + 96) && !*(_DWORD *)(v9 + 88) && (v10 & 0x10) == 0 )
      {
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
        v18 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
        v19 = v7;
        HMLockObject(v7);
        if ( (unsigned int)xxxAddFullScreen(v7) )
          v3 = 1;
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  return v3;
}
