/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C001D704
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001EB0 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0003C00 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     UpdateKernelIdleDomains @ 0x1C001DCF8 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(__int64 a1)
{
  unsigned int *v1; // rbx
  SIZE_T v3; // rsi
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned int *v15; // rcx
  unsigned int *v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  PVOID v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  unsigned int v28; // r8d
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int i; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v33[24]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v34[176]; // [rsp+40h] [rbp-89h] BYREF

  v1 = *(unsigned int **)(a1 + 496);
  v3 = 32 * *v1 + 8;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v3);
  *(_QWORD *)(a1 + 696) = v5;
  *v5 = *v1;
  v7 = 0LL;
  for ( i = 0; (unsigned int)v7 < *v1; i = v7 )
  {
    *(_QWORD *)&v5[8 * (unsigned int)v7 + 2] = &v1[4 * v7 + 1 + (unsigned int)v7];
    v7 = i + 1;
  }
  v8 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 680) + 56LL);
  i = 0;
  if ( v9 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(a1 + 680);
      v12 = 0;
      v13 = 88 * v10;
      if ( *v1 )
      {
        v14 = *(_QWORD *)(v13 + v11 + 64);
        do
        {
          v15 = &v5[8 * v12 + 2];
          if ( *(_QWORD *)v15 == v14 )
            *(_QWORD *)(v13 + v11 + 136) = v15;
          ++v12;
        }
        while ( v12 < *v1 );
        v8 = i;
      }
      i = ++v8;
      v10 = v8;
    }
    while ( v8 < v9 );
  }
  if ( !*(_QWORD *)(a1 + 504) )
    return 0;
  KeInitializeAffinityEx(v34);
  v16 = *(unsigned int **)(a1 + 504);
  v17 = 0;
  i = 0;
  if ( *v16 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      v19 = 3 * v18;
      if ( v16[6 * v18 + 6] < **(_DWORD **)(a1 + 696) )
      {
        v20 = qword_1C0011428;
        if ( (__int64 *)qword_1C0011428 == &qword_1C0011428 )
          goto LABEL_23;
        do
        {
          v21 = v20;
          if ( *(_DWORD *)(v20 + 36) == v16[2 * v19 + 3] )
            break;
          v20 = *(_QWORD *)v20;
          v21 = 0LL;
        }
        while ( (__int64 *)v20 != &qword_1C0011428 );
        if ( !v21 )
        {
LABEL_23:
          v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x72637250u);
          v21 = (__int64)v22;
          if ( !v22 )
            goto LABEL_32;
          memset(v22, 0, 0xD8uLL);
          *(_QWORD *)(v21 + 24) = v21 + 16;
          *(_QWORD *)(v21 + 16) = v21 + 16;
          v23 = (__int64 *)qword_1C0011430;
          if ( *(__int64 **)qword_1C0011430 != &qword_1C0011428 )
            goto LABEL_35;
          *(_QWORD *)v21 = &qword_1C0011428;
          *(_QWORD *)(v21 + 8) = v23;
          *v23 = v21;
          qword_1C0011430 = v21;
          KeInitializeAffinityEx(v21 + 48);
          *(_DWORD *)(v21 + 36) = v16[2 * v19 + 3];
          *(_DWORD *)(v21 + 40) = v16[2 * v19 + 4];
          *(_DWORD *)(v21 + 44) = v16[2 * v19 + 5];
        }
        v24 = *(_QWORD *)(a1 + 696);
        v25 = 32LL * v16[2 * v19 + 6];
        v26 = (_QWORD *)(v25 + v24 + 24);
        *(_QWORD *)(v25 + v24 + 16) = v21;
        v27 = *(_QWORD **)(v21 + 24);
        if ( *v27 != v21 + 16 )
LABEL_35:
          __fastfail(3u);
        v26[1] = v27;
        *v26 = v21 + 16;
        *v27 = v26;
        *(_QWORD *)(v21 + 24) = v26;
        if ( !(unsigned int)KeCheckProcessorAffinityEx(v21 + 48, *(unsigned int *)(a1 + 56)) )
        {
          KeAddProcessorAffinityEx(v21 + 48, *(unsigned int *)(a1 + 56));
          ++*(_DWORD *)(v21 + 32);
        }
        if ( *(_DWORD *)(v21 + 32) != *(_DWORD *)(v21 + 44) )
          goto LABEL_32;
        v17 = i;
        v28 = *(_DWORD *)(*(_QWORD *)(a1 + 504) + 24 * (i + 1LL));
        if ( v28 < *v5 )
          break;
      }
LABEL_33:
      v16 = *(unsigned int **)(a1 + 504);
      i = ++v17;
      v18 = v17;
      if ( v17 >= *v16 )
        goto LABEL_34;
    }
    KeOrAffinityEx(*(_QWORD *)(32LL * v28 + *(_QWORD *)(a1 + 696) + 16) + 48LL, v34, v34);
LABEL_32:
    v17 = i;
    goto LABEL_33;
  }
LABEL_34:
  v6 = 0;
  KeInitializeEnumerationContext(v33, v34);
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, v33) )
  {
    DevExtFromIndex = GetDevExtFromIndex(i);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v6 = updated;
  }
  return v6;
}
