/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01F8270 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     xxxImmActivateLayout @ 0x1C0141034 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01E54B4 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rcx
  char v17; // bl
  __int64 v18; // rcx
  PRKPROCESS *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // edi
  __int64 result; // rax
  int v24; // edi
  int v25; // ebx
  __int64 *v26; // r14
  __int64 v27; // r12
  unsigned int *v28; // r15
  __int64 v29; // rcx
  __int64 *i; // rbx
  __int64 *v31; // r14
  unsigned int v32; // [rsp+34h] [rbp-344h]
  __int64 ThreadWin32Thread; // [rsp+50h] [rbp-328h]
  __int128 v35; // [rsp+70h] [rbp-308h]
  __int128 v36; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v38[81]; // [rsp+A8h] [rbp-2D0h] BYREF

  memset(v38, 0, 0x280uLL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  v37 = a3;
  v13 = 0;
  v14 = 0LL;
  v32 = 0;
  while ( v13 < a2 )
  {
    v15 = 0;
    v16 = *(_QWORD *)(a1 + 8LL * v13);
    if ( (*(_DWORD *)(v16 + 480) & 1) != 0 )
    {
      v15 = -65536;
    }
    else
    {
      v12 = a4;
      if ( *(_QWORD *)(v16 + 432) != a4 )
      {
        if ( *(_QWORD *)(v16 + 776) )
        {
          v15 = 1;
        }
        else
        {
          v17 = 0;
          *(_QWORD *)&v35 = v16 + 432;
          *((_QWORD *)&v35 + 1) = a4;
          v36 = v35;
          HMAssignmentLock(&v36);
          v18 = *(_QWORD *)(a1 + 8LL * v13);
          if ( *(_QWORD *)(v18 + 472) != *(_QWORD *)(ThreadWin32Thread + 472) )
          {
            v19 = *(PRKPROCESS **)(v18 + 416);
            if ( v19 != *(PRKPROCESS **)(ThreadWin32Thread + 416) )
            {
              KeAttachProcess(*v19);
              v17 = 1;
            }
          }
          v12 = a4;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v13) + 472LL) + 152LL) = *(_WORD *)(a4 + 72);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v13) + 472LL) + 144LL) = *(_QWORD *)(a4 + 40);
          if ( v17 )
            KeDetachProcess();
          v14 = v32;
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 8LL * v13);
    if ( *(_QWORD *)(v11 + 776) )
    {
      v20 = *(_QWORD *)(v11 + 432);
      if ( v20 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v20 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v15 != -65536 )
          v15 |= 2u;
      }
    }
    if ( ((v15 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v21 = 5LL * (int)v14;
      LockW32Thread(*(_QWORD *)(a1 + 8LL * v13), &v38[5 * (int)v14 + 1], v11, v12);
      v38[v21] = *(_QWORD *)(a1 + 8LL * v13);
      LODWORD(v38[v21 + 4]) = v15;
      v14 = v32 + 1;
      v32 = v14;
      if ( (_DWORD)v14 == 16 )
      {
        v22 = v13 + 1;
        if ( v22 < a2 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v22, a2 - v22, (unsigned int)&v37, a4, a5);
        break;
      }
    }
    ++v13;
  }
  v24 = v14 - 1;
  v25 = v14 - 1;
  v26 = &v37;
  result = (int)v14 - 1;
  v27 = result;
  while ( v26 )
  {
    v28 = (unsigned int *)&v26[5 * result + 5];
    while ( v25 >= 0 )
    {
      v14 = *v28;
      if ( (v14 & 1) != 0 )
      {
        v29 = *((_QWORD *)v28 - 4);
        if ( (*(_DWORD *)(v29 + 480) & 1) == 0 )
        {
          xxxImmActivateLayout(v29, a4, v11, v12);
          v14 = *v28;
        }
      }
      LOBYTE(v14) = v14 & 3;
      if ( (_BYTE)v14 == 1 )
        PopAndFreeW32ThreadLock((__int64)&v26[4 * v25 + 2 + v25], v14, v11, v12);
      --v25;
      v28 -= 10;
    }
    v25 = 15;
    result = 15LL;
    v26 = (__int64 *)*v26;
  }
  for ( i = &v37; i; i = (__int64 *)*i )
  {
    v31 = &i[4 * v27 + 1 + v27];
    while ( v24 >= 0 )
    {
      result = *((unsigned int *)v31 + 8);
      if ( (result & 2) != 0 )
      {
        if ( (*(_DWORD *)(*v31 + 480) & 1) == 0 )
          xxxImmUnloadLayout(*v31, a5);
        result = PopAndFreeW32ThreadLock((__int64)&i[4 * v24 + 2 + v24], v14, v11, v12);
      }
      --v24;
      v31 -= 5;
    }
    v24 = 15;
    v27 = 15LL;
  }
  return result;
}
