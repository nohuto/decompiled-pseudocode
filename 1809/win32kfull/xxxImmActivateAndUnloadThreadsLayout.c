/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01CFFF0
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01CFFF0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01E1F70 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxImmActivateLayout @ 0x1C0136AA4 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01CFFF0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01D066C (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // r15d
  int v8; // edi
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // rcx
  PRKPROCESS *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 result; // rax
  int v20; // edi
  int v21; // ebx
  _QWORD *v22; // r14
  __int64 v23; // r12
  unsigned int *v24; // r15
  __int64 v25; // rcx
  _QWORD *i; // rbx
  _QWORD *v27; // r14
  unsigned int v28; // [rsp+34h] [rbp-344h]
  __int64 ThreadWin32Thread; // [rsp+50h] [rbp-328h]
  __int128 v31; // [rsp+70h] [rbp-308h]
  __int128 v32; // [rsp+90h] [rbp-2E8h] BYREF
  _QWORD v33[82]; // [rsp+A0h] [rbp-2D8h] BYREF

  v6 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v33[0] = a3;
  v8 = 0;
  v9 = 0LL;
  v28 = 0;
  while ( v8 < v6 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 8LL * v8);
    if ( (*(_DWORD *)(v11 + 488) & 1) != 0 )
    {
      v10 = -65536;
    }
    else if ( *(_QWORD *)(v11 + 440) != a4 )
    {
      if ( *(_QWORD *)(v11 + 784) )
      {
        v10 = 1;
      }
      else
      {
        v12 = 0;
        *(_QWORD *)&v31 = v11 + 440;
        *((_QWORD *)&v31 + 1) = a4;
        v32 = v31;
        HMAssignmentLock(&v32);
        v13 = *(_QWORD *)(a1 + 8LL * v8);
        if ( *(_QWORD *)(v13 + 480) != *(_QWORD *)(ThreadWin32Thread + 480) )
        {
          v14 = *(PRKPROCESS **)(v13 + 424);
          if ( v14 != *(PRKPROCESS **)(ThreadWin32Thread + 424) )
          {
            KeAttachProcess(*v14);
            v12 = 1;
          }
        }
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v8) + 480LL) + 152LL) = *(_WORD *)(a4 + 72);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v8) + 480LL) + 144LL) = *(_QWORD *)(a4 + 40);
        if ( v12 )
          KeDetachProcess();
        v9 = v28;
      }
    }
    v15 = *(_QWORD *)(a1 + 8LL * v8);
    if ( *(_QWORD *)(v15 + 784) )
    {
      v16 = *(_QWORD *)(v15 + 440);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v10 != -65536 )
          v10 |= 2u;
      }
    }
    if ( ((v10 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 5LL * (int)v9;
      LockW32Thread(*(_QWORD *)(a1 + 8LL * v8), &v33[5 * (int)v9 + 2]);
      v33[v17 + 1] = *(_QWORD *)(a1 + 8LL * v8);
      LODWORD(v33[v17 + 5]) = v10;
      v9 = v28 + 1;
      v28 = v9;
      if ( (_DWORD)v9 == 16 )
      {
        v18 = v8 + 1;
        if ( v18 < v6 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v18, v6 - v18, (unsigned int)v33, a4, a5);
        break;
      }
    }
    ++v8;
  }
  v20 = v9 - 1;
  v21 = v9 - 1;
  v22 = v33;
  result = (int)v9 - 1;
  v23 = result;
  while ( v22 )
  {
    v24 = (unsigned int *)&v22[5 * result + 5];
    while ( v21 >= 0 )
    {
      v9 = *v24;
      if ( (v9 & 1) != 0 )
      {
        v25 = *((_QWORD *)v24 - 4);
        if ( (*(_DWORD *)(v25 + 488) & 1) == 0 )
        {
          xxxImmActivateLayout(v25, a4);
          v9 = *v24;
        }
      }
      LOBYTE(v9) = v9 & 3;
      if ( (_BYTE)v9 == 1 )
        PopAndFreeW32ThreadLock((__int64)&v22[4 * v21 + 2 + v21], v9);
      --v21;
      v24 -= 10;
    }
    v21 = 15;
    result = 15LL;
    v22 = (_QWORD *)*v22;
  }
  for ( i = v33; i; i = (_QWORD *)*i )
  {
    v27 = &i[4 * v23 + 1 + v23];
    while ( v20 >= 0 )
    {
      result = *((unsigned int *)v27 + 8);
      if ( (result & 2) != 0 )
      {
        if ( (*(_DWORD *)(*v27 + 488LL) & 1) == 0 )
          xxxImmUnloadLayout(*v27, a5);
        result = PopAndFreeW32ThreadLock((__int64)&i[4 * v20 + 2 + v20], v9);
      }
      --v20;
      v27 -= 5;
    }
    v20 = 15;
    v23 = 15LL;
  }
  return result;
}
