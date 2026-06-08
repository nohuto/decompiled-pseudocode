/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C00244DC
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003A60 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     GetDevExtFromIndex @ 0x1C00082B4 (GetDevExtFromIndex.c)
 *     RegisterIdleDomain @ 0x1C0033F20 (RegisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C003593C (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
{
  unsigned int *v2; // rdi
  SIZE_T v3; // r14
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned int *v14; // rcx
  unsigned int v15; // ebx
  _DWORD *v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r8d
  _DWORD *v20; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int i; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v24[3]; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v25[176]; // [rsp+40h] [rbp-79h] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v25, 0, 0xA8uLL);
  v2 = (unsigned int *)a1[64];
  v3 = 32 * *v2 + 8;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)v3);
  a1[89] = v5;
  *v5 = *v2;
  v6 = 0LL;
  for ( i = 0; (unsigned int)v6 < *v2; i = v6 )
  {
    *(_QWORD *)&v5[8 * (unsigned int)v6 + 2] = &v2[4 * v6 + 1 + (unsigned int)v6];
    v6 = i + 1;
  }
  v7 = 0;
  v8 = *(_DWORD *)(a1[87] + 56LL);
  i = 0;
  if ( v8 )
  {
    v9 = 0LL;
    do
    {
      v10 = a1[87];
      v11 = 0;
      v12 = 88 * v9;
      if ( *v2 )
      {
        v13 = *(_QWORD *)(v12 + v10 + 64);
        do
        {
          v14 = &v5[8 * v11 + 2];
          if ( *(_QWORD *)v14 == v13 )
            *(_QWORD *)(v12 + v10 + 136) = v14;
          ++v11;
        }
        while ( v11 < *v2 );
        v7 = i;
      }
      i = ++v7;
      v9 = v7;
    }
    while ( v7 < v8 );
  }
  if ( !a1[65] )
    return 0;
  KeInitializeAffinityEx(v25);
  v17 = (_DWORD *)a1[65];
  i = 0;
  if ( *v17 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)RegisterIdleDomain(a1) )
        goto LABEL_21;
      v18 = i;
      v19 = *(_DWORD *)(a1[65] + 24 * (i + 1LL));
      if ( v19 < *v5 )
        break;
LABEL_22:
      v20 = (_DWORD *)a1[65];
      i = v18 + 1;
      if ( v18 + 1 >= *v20 )
        goto LABEL_23;
    }
    KeOrAffinityEx(*(_QWORD *)(32LL * v19 + a1[89] + 16) + 48LL, v25, v25);
LABEL_21:
    v18 = i;
    goto LABEL_22;
  }
LABEL_23:
  v15 = 0;
  KeInitializeEnumerationContext(v24, v25);
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, v24) )
  {
    DevExtFromIndex = GetDevExtFromIndex(i);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v15 = updated;
  }
  return v15;
}
