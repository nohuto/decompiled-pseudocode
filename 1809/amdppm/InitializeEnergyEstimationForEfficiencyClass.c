/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C0030974
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0030844 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0003C84 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0003CB4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003CD0 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  char *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rdi
  void *v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // edx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r8
  int *v19; // r9
  int v20; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  int v23; // r15d
  __int64 v24; // rdi
  _QWORD *v25; // rsi
  __int64 v26; // [rsp+38h] [rbp-29h] BYREF
  __int64 v27[4]; // [rsp+40h] [rbp-21h] BYREF
  char *v28; // [rsp+60h] [rbp-1h]
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+17h] BYREF

  v1 = (char *)&unk_1C0011988 + 256 * (unsigned __int64)a1;
  v28 = v1;
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v27);
  ResetEnumerationContext(v27);
  result = EnumerateNextDevice((__int64)v27, &v26);
  if ( (_DWORD)result )
    goto LABEL_52;
  while ( 1 )
  {
    v4 = v26;
    if ( (*(_QWORD *)(v26 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v26 + 352) == a1 )
    {
      if ( !qword_1C00115A0 )
        goto LABEL_10;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_10;
      memset(PoolWithTag, 0, 0x70uLL);
      v7 = *(unsigned int *)(v4 + 56);
      *(_QWORD *)(v4 + 344) = v6;
      KeProcessorGroupAffinity(&Affinity, v7);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v8 = ((__int64 (*)(void))qword_1C00115A0)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v8 < 0 )
        break;
    }
    result = EnumerateNextDevice((__int64)v27, &v26);
    if ( (_DWORD)result )
      goto LABEL_52;
  }
  ExFreePoolWithTag(v6, 0x72637250u);
  *(_QWORD *)(v4 + 344) = 0LL;
LABEL_10:
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v27);
  ResetEnumerationContext(v27);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v27, &v26) )
  {
    v9 = v26;
    if ( (*(_QWORD *)(v26 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v26 + 352) == a1 )
    {
      v10 = *(void **)(v26 + 344);
      if ( v10 )
      {
        if ( qword_1C00115A8 )
        {
          KeProcessorGroupAffinity(&PreviousAffinity, *(unsigned int *)(v26 + 56));
          KeSetSystemGroupAffinityThread(&PreviousAffinity, &Affinity);
          ((void (*)(void))qword_1C00115A8)();
          KeRevertToUserGroupAffinityThread(&Affinity);
        }
        ExFreePoolWithTag(v10, 0x72637250u);
        *(_QWORD *)(v9 + 344) = 0LL;
      }
    }
  }
  result = *((unsigned int *)v1 + 10);
  v11 = 0;
  *((_QWORD *)v1 + 31) = 0LL;
  v12 = 0;
  for ( *((_QWORD *)v1 + 30) = 0LL; v12 < (unsigned int)result; ++v12 )
  {
    if ( (*(_DWORD *)&v1[12 * v12 + 48] & 1) == 0 )
    {
      if ( v12 != v11 )
      {
        v13 = 3LL * v11;
        *(_QWORD *)&v1[4 * v13 + 44] = *(_QWORD *)&v1[12 * v12 + 44];
        *(_DWORD *)&v1[4 * v13 + 52] = *(_DWORD *)&v1[12 * v12 + 52];
      }
      ++v11;
    }
    result = *((unsigned int *)v1 + 10);
  }
  if ( (_DWORD)result != v11 )
  {
    result = (__int64)memset(&v1[8 * v11 + 44 + 4 * v11], 0, 12LL * ((unsigned int)result - v11));
    *((_DWORD *)v1 + 10) = v11;
  }
  if ( !v11 )
    goto LABEL_52;
  ResetEnumerationContext(v27);
  result = EnumerateNextDevice((__int64)v27, &v26);
  if ( (_DWORD)result )
  {
LABEL_41:
    if ( !*((_QWORD *)v1 + 30) )
      goto LABEL_42;
    return result;
  }
  while ( 1 )
  {
    v14 = v26;
    if ( (*(_QWORD *)(v26 + 264) & 0x2000000000LL) == 0 || *(unsigned __int8 *)(v26 + 352) != a1 )
      goto LABEL_40;
    v15 = (unsigned __int64)*(unsigned __int8 *)(v26 + 352) << 8;
    v16 = *(_DWORD *)((char *)&Globals[188] + v15);
    if ( v16 - 1 > 3 )
      goto LABEL_42;
    v17 = 0;
    if ( v16 )
      break;
LABEL_35:
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
    v22 = v21;
    if ( !v21 )
      goto LABEL_42;
    memset(v21, 0, 0x70uLL);
    *(_QWORD *)(v14 + 344) = v22;
    v23 = ((__int64 (__fastcall *)(_QWORD, struct _GROUP_AFFINITY *, _QWORD, struct _GROUP_AFFINITY *))HalPrivateDispatchTable[72])(
            *(unsigned int *)(v14 + 56),
            &PreviousAffinity,
            v16,
            &Affinity);
    if ( v23 < 0 )
    {
      ExFreePoolWithTag(v22, 0x72637250u);
      *(_QWORD *)(v14 + 344) = 0LL;
    }
    else
    {
      v22[1] = Affinity.Mask;
      *(_DWORD *)v22 = v16;
    }
    if ( v23 < 0 )
      goto LABEL_42;
LABEL_40:
    result = EnumerateNextDevice((__int64)v27, &v26);
    if ( (_DWORD)result )
      goto LABEL_41;
  }
  p_PreviousAffinity = &PreviousAffinity;
  v19 = (int *)((char *)&Globals[188] + v15 + 4);
  while ( 1 )
  {
    v20 = *v19;
    LODWORD(p_PreviousAffinity->Mask) = *v19;
    if ( (unsigned int)(v20 - 2) > 0x15 )
      break;
    ++v17;
    v19 += 3;
    p_PreviousAffinity = (struct _GROUP_AFFINITY *)((char *)p_PreviousAffinity + 4);
    if ( v17 >= v16 )
      goto LABEL_35;
  }
LABEL_42:
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v27);
  ResetEnumerationContext(v27);
  result = EnumerateNextDevice((__int64)v27, &v26);
  if ( !(_DWORD)result )
  {
    do
    {
      v24 = v26;
      if ( (*(_QWORD *)(v26 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v26 + 352) == a1 )
      {
        v25 = *(_QWORD **)(v26 + 344);
        if ( v25 )
        {
          if ( v25[1] )
          {
            ((void (*)(void))HalPrivateDispatchTable[74])();
            v25[1] = 0LL;
          }
          ExFreePoolWithTag(v25, 0x72637250u);
          *(_QWORD *)(v24 + 344) = 0LL;
        }
      }
      result = EnumerateNextDevice((__int64)v27, &v26);
    }
    while ( !(_DWORD)result );
    v1 = v28;
  }
  *((_QWORD *)v1 + 31) = 0LL;
  *((_QWORD *)v1 + 30) = 0LL;
LABEL_52:
  if ( !*((_QWORD *)v1 + 30) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *((_QWORD *)v1 + 30) = ComputeProcessorEnergy;
  }
  return result;
}
