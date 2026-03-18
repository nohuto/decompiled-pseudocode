/*
 * XREFs of CmpConstructNameWithStatus @ 0x140668850
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpDoWritethroughReparse @ 0x140603B90 (CmpDoWritethroughReparse.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x140640940 (CmpTraceSecurityChanging.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406608E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructName @ 0x140668820 (CmpConstructName.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1406E9118 (CmpConstructAndCacheName.c)
 *     CmRealKCBToVirtualPath @ 0x1406F6DEC (CmRealKCBToVirtualPath.c)
 *     CmEtwRunDown @ 0x1408258C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140825BE8 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x14082645C (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14082A0C4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x14082A750 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14082B9DC (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E130 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406689D0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140729870 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpSetKcbAtLayerHeight @ 0x140832E78 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // bp
  struct _LOOKASIDE_LIST_EX *v6; // r9
  __int16 v7; // bx
  struct _PRIVILEGE_SET *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  SIZE_T v14; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v16; // r10
  __int64 v17; // r10
  _QWORD v18[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  WORD1(v18[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v5 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v7 = *(_WORD *)(a1 + 66);
  v8 = 0LL;
  v9 = (unsigned __int16)v7;
  if ( v7 >= 2 )
  {
    v9 = (unsigned __int16)v7;
    if ( v7 != 1 )
    {
      v14 = 8LL * (unsigned int)(v7 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v14, 0x35364D43u, v6);
      v8 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        v8 = (struct _PRIVILEGE_SET *)v18[3];
        v12 = -1073741670;
        goto LABEL_16;
      }
      memset(TransientPoolWithTag, 0, v14);
      v9 = *(unsigned __int16 *)(a1 + 66);
    }
  }
  LOWORD(v18[0]) = v7;
  v18[3] = v8;
  WORD1(v18[0]) = v9;
  if ( (_WORD)v9 )
  {
    v16 = *(_QWORD *)(a1 + 192);
    if ( v16 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(v18, v9, *(_QWORD *)(v16 + 16));
        v16 = *(_QWORD *)(v17 + 24);
        LOWORD(v9) = v9 - 1;
      }
      while ( v16 );
      v8 = (struct _PRIVILEGE_SET *)v18[3];
      LOWORD(v9) = WORD1(v18[0]);
    }
  }
  else
  {
    v18[1] = a1;
  }
  if ( v5 && (v9 & 0x8000u) == 0LL )
  {
    do
    {
      v10 = (__int16)v9 >= 2 ? *((_QWORD *)v8 + (__int16)v9 - 2) : v18[(__int16)v9 + 1];
      if ( *(_WORD *)(v10 + 66) && *(_BYTE *)(v10 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v10 + 40) != -1 )
      {
        if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
        {
          v11 = CmpConstructNameFromKeyNodes(v18, &v19);
          v8 = (struct _PRIVILEGE_SET *)v18[3];
          goto LABEL_14;
        }
        break;
      }
      LOWORD(v9) = v9 - 1;
    }
    while ( (v9 & 0x8000u) == 0LL );
  }
  v11 = CmpConstructNameFromKcbNameBlocks(a1, &v19);
LABEL_14:
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = 0;
    *a2 = v19;
  }
LABEL_16:
  if ( v8 )
    CmSiFreeMemory(v8);
  if ( v5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v12;
}
