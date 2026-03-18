/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4C90
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4C90 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01F7FC0 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxImmActivateLayout @ 0x1C011B814 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4C90 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01E5334 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rcx
  char v15; // bl
  __int64 v16; // rcx
  PRKPROCESS *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // edi
  __int64 result; // rax
  int v22; // edi
  int v23; // ebx
  __int64 *v24; // r14
  __int64 v25; // r12
  unsigned int *v26; // r15
  __int64 v27; // rcx
  __int64 *i; // rbx
  __int64 *v29; // r14
  unsigned int v30; // [rsp+34h] [rbp-344h]
  __int64 ThreadWin32Thread; // [rsp+50h] [rbp-328h]
  __int128 v33; // [rsp+70h] [rbp-308h]
  __int128 v34; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v36[81]; // [rsp+A8h] [rbp-2D0h] BYREF

  memset(v36, 0, 0x280uLL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
  v35 = a3;
  v11 = 0;
  v12 = 0LL;
  v30 = 0;
  while ( v11 < a2 )
  {
    v13 = 0;
    v14 = *(_QWORD *)(a1 + 8LL * v11);
    if ( (*(_DWORD *)(v14 + 480) & 1) != 0 )
    {
      v13 = -65536;
    }
    else if ( *(_QWORD *)(v14 + 432) != a4 )
    {
      if ( *(_QWORD *)(v14 + 776) )
      {
        v13 = 1;
      }
      else
      {
        v15 = 0;
        *(_QWORD *)&v33 = v14 + 432;
        *((_QWORD *)&v33 + 1) = a4;
        v34 = v33;
        HMAssignmentLock(&v34);
        v16 = *(_QWORD *)(a1 + 8LL * v11);
        if ( *(_QWORD *)(v16 + 472) != *(_QWORD *)(ThreadWin32Thread + 472) )
        {
          v17 = *(PRKPROCESS **)(v16 + 416);
          if ( v17 != *(PRKPROCESS **)(ThreadWin32Thread + 416) )
          {
            KeAttachProcess(*v17);
            v15 = 1;
          }
        }
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v11) + 472LL) + 152LL) = *(_WORD *)(a4 + 72);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v11) + 472LL) + 144LL) = *(_QWORD *)(a4 + 40);
        if ( v15 )
          KeDetachProcess();
        v12 = v30;
      }
    }
    v10 = *(_QWORD *)(a1 + 8LL * v11);
    if ( *(_QWORD *)(v10 + 776) )
    {
      v18 = *(_QWORD *)(v10 + 432);
      if ( v18 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v18 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v13 != -65536 )
          v13 |= 2u;
      }
    }
    if ( ((v13 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v19 = 5LL * (int)v12;
      LockW32Thread(*(_QWORD *)(a1 + 8LL * v11), &v36[5 * (int)v12 + 1], v10);
      v36[v19] = *(_QWORD *)(a1 + 8LL * v11);
      LODWORD(v36[v19 + 4]) = v13;
      v12 = v30 + 1;
      v30 = v12;
      if ( (_DWORD)v12 == 16 )
      {
        v20 = v11 + 1;
        if ( v20 < a2 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v20, a2 - v20, (unsigned int)&v35, a4, a5);
        break;
      }
    }
    ++v11;
  }
  v22 = v12 - 1;
  v23 = v12 - 1;
  v24 = &v35;
  result = (int)v12 - 1;
  v25 = result;
  while ( v24 )
  {
    v26 = (unsigned int *)&v24[5 * result + 5];
    while ( v23 >= 0 )
    {
      v12 = *v26;
      if ( (v12 & 1) != 0 )
      {
        v27 = *((_QWORD *)v26 - 4);
        if ( (*(_DWORD *)(v27 + 480) & 1) == 0 )
        {
          xxxImmActivateLayout(v27, a4, v10);
          v12 = *v26;
        }
      }
      LOBYTE(v12) = v12 & 3;
      if ( (_BYTE)v12 == 1 )
        PopAndFreeW32ThreadLock((__int64)&v24[4 * v23 + 2 + v23], v12, v10);
      --v23;
      v26 -= 10;
    }
    v23 = 15;
    result = 15LL;
    v24 = (__int64 *)*v24;
  }
  for ( i = &v35; i; i = (__int64 *)*i )
  {
    v29 = &i[4 * v25 + 1 + v25];
    while ( v22 >= 0 )
    {
      result = *((unsigned int *)v29 + 8);
      if ( (result & 2) != 0 )
      {
        if ( (*(_DWORD *)(*v29 + 480) & 1) == 0 )
          xxxImmUnloadLayout(*v29, a5);
        result = PopAndFreeW32ThreadLock((__int64)&i[4 * v22 + 2 + v22], v12, v10);
      }
      --v22;
      v29 -= 5;
    }
    v22 = 15;
    v25 = 15LL;
  }
  return result;
}
