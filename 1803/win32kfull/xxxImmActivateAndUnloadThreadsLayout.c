/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01BF3B0 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     xxxImmActivateLayout @ 0x1C01131E4 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01AD5E0 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rdx
  int v7; // edi
  int v8; // r11d
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // rcx
  PRKPROCESS *v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 result; // rax
  int v20; // ebx
  _QWORD *v21; // rdi
  unsigned int *i; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  int v26; // edi
  __int64 v27; // rcx
  _QWORD *j; // rcx
  __int64 v29; // rcx
  int v30; // [rsp+34h] [rbp-344h]
  unsigned int *v31; // [rsp+38h] [rbp-340h]
  int v32; // [rsp+40h] [rbp-338h]
  _QWORD *v34; // [rsp+48h] [rbp-330h]
  int v35; // [rsp+50h] [rbp-328h]
  int v36; // [rsp+58h] [rbp-320h]
  __int64 v38; // [rsp+70h] [rbp-308h]
  __int64 ThreadWin32Thread; // [rsp+78h] [rbp-300h]
  __int128 v40; // [rsp+90h] [rbp-2E8h]
  __int128 v41; // [rsp+B0h] [rbp-2C8h] BYREF
  _QWORD v42[82]; // [rsp+C0h] [rbp-2B8h] BYREF

  v35 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v42[0] = a3;
  v7 = 0;
  v8 = 0;
  v32 = 0;
  while ( 1 )
  {
    v9 = a1;
    if ( v7 >= v35 )
      break;
    v6 = 0LL;
    v30 = 0;
    v10 = v7;
    v11 = *(_QWORD *)(a1 + 8LL * v7);
    if ( (*(_DWORD *)(v11 + 480) & 1) != 0 )
    {
      v6 = 4294901760LL;
LABEL_5:
      v30 = v6;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(v11 + 432) != a4 )
    {
      if ( *(_QWORD *)(v11 + 768) )
      {
        v6 = 1LL;
        goto LABEL_5;
      }
      v12 = 0;
      *(_QWORD *)&v40 = v11 + 432;
      *((_QWORD *)&v40 + 1) = a4;
      v41 = v40;
      HMAssignmentLock(&v41);
      v10 = v7;
      v9 = a1;
      v13 = *(_QWORD *)(a1 + 8LL * v7);
      if ( *(_QWORD *)(v13 + 472) != *(_QWORD *)(ThreadWin32Thread + 472) )
      {
        v14 = *(PRKPROCESS **)(v13 + 416);
        if ( v14 != *(PRKPROCESS **)(ThreadWin32Thread + 416) )
        {
          KeAttachProcess(*v14);
          v12 = 1;
          v10 = v7;
          v9 = a1;
        }
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v10) + 472LL) + 152LL) = *(_WORD *)(a4 + 72);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v10) + 472LL) + 144LL) = *(_QWORD *)(a4 + 40);
      v6 = 0LL;
      if ( v12 )
      {
        KeDetachProcess();
        v6 = 0LL;
        v10 = v7;
        v9 = a1;
      }
      v8 = v32;
    }
LABEL_14:
    v15 = *(_QWORD *)(v9 + 8 * v10);
    if ( *(_QWORD *)(v15 + 768) )
    {
      v16 = *(_QWORD *)(v15 + 432);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && (_DWORD)v6 != -65536 )
        {
          v6 = (unsigned int)v6 | 2;
          v30 = v6;
        }
      }
    }
    if ( (((_DWORD)v6 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 5LL * v8;
      LockW32Thread(v15, (__int64)&v42[5 * v8 + 2]);
      v42[v17 + 1] = *(_QWORD *)(a1 + 8LL * v7);
      LODWORD(v42[v17 + 5]) = v30;
      v8 = v32 + 1;
      v32 = v8;
      if ( v8 == 16 )
      {
        v18 = v7 + 1;
        if ( v18 < v35 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v18, v35 - v18, (unsigned int)v42, a4, a5);
        break;
      }
    }
    ++v7;
  }
  v36 = v8 - 1;
  v20 = v8 - 1;
  v21 = v42;
  result = v8 - 1;
  v38 = result;
  while ( v21 )
  {
    for ( i = (unsigned int *)&v21[5 * result + 5]; ; i -= 10 )
    {
      v31 = i;
      if ( v20 < 0 )
        break;
      v23 = *i;
      if ( (v23 & 1) != 0 )
      {
        v24 = *((_QWORD *)i - 4);
        if ( (*(_DWORD *)(v24 + 480) & 1) == 0 )
        {
          xxxImmActivateLayout(v24, a4);
          i = v31;
          v23 = *v31;
        }
      }
      LOBYTE(v23) = v23 & 3;
      if ( (_BYTE)v23 == 1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v21[4 * v20 + 2 + v20], v23);
        i = v31;
      }
      --v20;
    }
    v6 = 15LL;
    v20 = 15;
    result = 15LL;
    v21 = (_QWORD *)*v21;
  }
  v25 = v42;
  v26 = v36;
  v27 = v38;
  while ( v25 )
  {
    for ( j = &v25[5 * v27 + 1]; ; j -= 5 )
    {
      v34 = j;
      if ( v26 < 0 )
        break;
      if ( (j[4] & 2) != 0 )
      {
        v29 = *j;
        if ( (*(_DWORD *)(v29 + 480) & 1) == 0 )
          xxxImmUnloadLayout(v29, a5);
        PopAndFreeW32ThreadLock((__int64)&v25[4 * v26 + 2 + v26], v6);
        j = v34;
      }
      --v26;
    }
    result = 15LL;
    v26 = 15;
    v27 = 15LL;
    v25 = (_QWORD *)*v25;
  }
  return result;
}
