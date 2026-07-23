/*
 * XREFs of ExpWnfCreateNameInstance @ 0x14060F058
 * Callers:
 *     NtCreateWnfStateName @ 0x14060ED20 (NtCreateWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x14060FBB0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140610054 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1406103C0 (NtQueryWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x1406109B0 (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x1406D031C (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1406D06EC (ExpWnfGetPermanentDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  __int64 v5; // rax
  __int64 v7; // r15
  SIZE_T v10; // rdx
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  __int64 *v13; // r12
  volatile signed __int64 *v14; // rsi
  _RTL_BALANCED_NODE *v15; // rax
  _RTL_BALANCED_NODE *v16; // r14
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v18; // r14
  _QWORD *v19; // rdx
  bool v20; // r8
  _QWORD *v21; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r15
  _RTL_BALANCED_NODE *v23; // rax
  _RTL_BALANCED_NODE *v24; // r14
  struct _SINGLE_LIST_ENTRY **p_Next; // r8
  struct _EX_RUNDOWN_REF *v26; // rdx
  SIZE_T v28; // rdx
  unsigned int v29; // esi
  void *Ptr; // rcx

  v5 = *(_QWORD *)(a3 + 8);
  v7 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == a4 || (_DWORD)v7 != 3 )
  {
    v10 = 184LL;
    if ( !v5 )
      v10 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v10, 0x20666E57u);
  }
  else
  {
    v28 = 184LL;
    if ( !v5 )
      v28 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v28, 0x20666E57u);
  }
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v12->Count) = 11012355;
  v12[1].Count = 0LL;
  v12[6].Count = a1;
  v12[5].Count = a2;
  LODWORD(v12[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v12[8].Count = (unsigned __int64)&v12[21];
    *(_OWORD *)&v12[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v13 = (__int64 *)&v12[9];
  if ( (int)ObLogSecurityDescriptor(*(char **)(a3 + 16), &v12[9].Count, 1u) < 0 )
  {
    ExFreePoolWithTag(v12, 0x20666E57u);
    return 3221225626LL;
  }
  v12[16].Count = (unsigned __int64)&v12[15];
  v12[15].Count = (unsigned __int64)&v12[15];
  v12[14].Count = 0LL;
  v12[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 )
  {
    if ( (int)ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v7, 1LL, &v12[13]) < 0 )
    {
      v29 = -1073741670;
    }
    else
    {
      v29 = ExpWnfPopulateStateData(v12);
      if ( !v29 )
        goto LABEL_10;
    }
    ObDereferenceSecurityDescriptor(*v13, 1u);
    ExFreePoolWithTag(v12, 0x20666E57u);
    return v29;
  }
LABEL_10:
  v14 = (volatile signed __int64 *)(a1 + 48);
  v15 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v15, a1 + 48);
  if ( v16 )
    BYTE2(v16[1].Left) |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v18 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection_0(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(*v13, 1u);
    Ptr = v12[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v12, 0x20666E57u);
    *a5 = v18;
    return 0LL;
  }
  ExAcquireRundownProtection_0(v12 + 1);
  v19 = *(_QWORD **)(a1 + 56);
  v20 = 0;
  if ( !v19 )
    goto LABEL_22;
  while ( v12[5].Count < v19[3] )
  {
    v21 = (_QWORD *)*v19;
    if ( !*v19 )
    {
      v20 = 0;
      goto LABEL_22;
    }
LABEL_18:
    v19 = v21;
  }
  v21 = (_QWORD *)v19[1];
  if ( v21 )
    goto LABEL_18;
  v20 = 1;
LABEL_22:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v19, v20, &v12[2].Count);
  if ( (_DWORD)v7 == 3 )
  {
    v12[19].Count = (unsigned __int64)a4;
    Next = a4[2].SwapListEntry.Next;
    v23 = KeAbPreAcquire((ULONG_PTR)&Next[7], 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[7], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[7], v23, (ULONG_PTR)&Next[7]);
    if ( v24 )
      BYTE2(v24[1].Left) |= 1u;
    p_Next = &Next[9].Next->Next;
    v26 = v12 + 17;
    if ( *p_Next != &Next[8] )
      __fastfail(3u);
    v26->Count = (unsigned __int64)&Next[8];
    v12[18].Count = (unsigned __int64)p_Next;
    *p_Next = (struct _SINGLE_LIST_ENTRY *)v26;
    Next[9].Next = (struct _SINGLE_LIST_ENTRY *)v26;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[7]);
    KeAbPostRelease((ULONG_PTR)&Next[7]);
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v12;
  return 0LL;
}
