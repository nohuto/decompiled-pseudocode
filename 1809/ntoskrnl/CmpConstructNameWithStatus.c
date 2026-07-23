/*
 * XREFs of CmpConstructNameWithStatus @ 0x1405D83A0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1405B9380 (CmpTraceSecurityChanging.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CC1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpConstructName @ 0x1405D9B94 (CmpConstructName.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1406C9D48 (CmpConstructAndCacheName.c)
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1407ECB80 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1407ED450 (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F13C8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x1407F1F70 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpIsKcbDiscarded @ 0x1405820B4 (CmpIsKcbDiscarded.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6E8C (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405D85E0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1407F1E34 (CmpConstructNameFromKcbNameBlocks.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // r14
  __int16 v6; // bx
  struct _PRIVILEGE_SET *v7; // rdi
  __int16 v8; // dx
  SIZE_T v9; // rbp
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  unsigned int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r10
  __int16 v14; // dx
  __int16 v15; // dx
  __int64 v16; // rax
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v22[2]; // [rsp+28h] [rbp-30h]
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v21 = 4294901760LL;
  v22[0] = 0LL;
  v22[1] = 0LL;
  Privileges = 0LL;
  CurrentThread = KeGetCurrentThread();
  v24 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v5 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v6 = *(_WORD *)(a1 + 58);
  v7 = 0LL;
  v8 = v6;
  if ( v6 >= 2 && v6 != 1 )
  {
    v9 = 8LL * (unsigned int)(v6 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v9, 0x35364D43u);
    v7 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v7 = Privileges;
      v11 = -1073741670;
      goto LABEL_26;
    }
    memset(TransientPoolWithTag, 0, v9);
    v8 = *(_WORD *)(a1 + 58);
  }
  LOWORD(v21) = v6;
  Privileges = v7;
  WORD1(v21) = v8;
  if ( v8 )
  {
    v12 = *(_QWORD *)(a1 + 184);
    if ( v12 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v21, v8, *(_QWORD *)(v12 + 16));
        v12 = *(_QWORD *)(v13 + 24);
        v8 = v14 - 1;
      }
      while ( v12 );
      v7 = Privileges;
    }
  }
  else
  {
    v22[0] = a1;
  }
  if ( v5 && !CmpIsKcbDiscarded(a1) && v15 >= 0 )
  {
    do
    {
      v16 = v15 < 2 ? v22[v15] : *((_QWORD *)v7 + v15 - 2);
      if ( *(_WORD *)(v16 + 58) && *(_BYTE *)(v16 + 57) == 1 )
        break;
      if ( *(_DWORD *)(v16 + 32) != -1 )
      {
        if ( *(_DWORD *)(a1 + 32) != -1 || (*(_DWORD *)(a1 + 176) & 0x40000) == 0 )
        {
          v17 = CmpConstructNameFromKeyNodes(&v21, &v24);
          v7 = Privileges;
          goto LABEL_24;
        }
        break;
      }
      --v15;
    }
    while ( v15 >= 0 );
  }
  v17 = CmpConstructNameFromKcbNameBlocks(a1, &v24);
LABEL_24:
  v11 = v17;
  if ( v17 >= 0 )
  {
    v11 = 0;
    *a2 = v24;
  }
LABEL_26:
  if ( v7 )
    CmSiFreeMemory(v7);
  if ( v5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v18 = KeGetCurrentThread();
    if ( v18->KernelApcDisable++ == -1
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v18);
    }
  }
  return v11;
}
