/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406D2B38
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     PsReturnProcessQuota @ 0x1400917C8 (PsReturnProcessQuota.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x14013C3F8 (MiCheckWsLimits.c)
 *     MiSyncSystemPdes @ 0x14013CD58 (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14013CDBC (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x14013CDD4 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x14013CFF0 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x14013DB78 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x14013DBAC (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x14013DBC0 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x14013DBE8 (MiSetProcessPartitionId.c)
 *     MiPartitionActive @ 0x14013DBF8 (MiPartitionActive.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     MiAllocateProcessShadow @ 0x1406D2D8C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1406D3078 (MiJoinSession.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int16 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  ULONG_PTR v13; // rbp
  __int64 v14; // r8
  __int64 TopLevelPage; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // r8d
  unsigned __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = a3;
  v23 = a2;
  v6 = PspMinimumWorkingSet;
  v8 = a6;
  v9 = a3;
  v22[0] = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2088);
  else
    v10 = (__int16 *)&MiSystemPartition;
  MiPartitionActive((__int64)v10);
  MiSetProcessPartitionId(v8, *v10);
  if ( !(unsigned int)MiChargeCommit((__int64)v10, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v8 + 1280) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v8 + 1936) = v8 + 1928;
  *(_QWORD *)(v8 + 1928) = v8 + 1928;
  *(_QWORD *)(v8 + 1920) = 0LL;
  if ( v9 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v8 + 1280, v22, &v24, a4, 1);
    v9 = v24;
    v6 = v22[0];
  }
  *(_QWORD *)(v8 + 1392) = v6;
  *(_QWORD *)(v8 + 1432) = v9;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v8 + 1464) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v8, v11, v6) < 0 )
  {
LABEL_33:
    MiReturnCommit((__int64)v10, 4uLL);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v10, v6, 0LL) )
  {
LABEL_32:
    PsReturnProcessQuota((struct _KPROCESS *)v8, v12, v6);
    goto LABEL_33;
  }
  v13 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  if ( !v13 )
  {
LABEL_23:
    if ( v10 == (__int16 *)&MiSystemPartition )
      MiReturnResidentAvailable(v6);
    else
      MiReturnPartitionResidentAvailable((__int64)v10, v6);
    goto LABEL_32;
  }
  if ( (int)MiAllocateProcessShadow(v8, a5) < 0 )
  {
LABEL_22:
    MiReleasePtes((__int64)&qword_14043C060, v13, 1u);
    goto LABEL_23;
  }
  if ( !(unsigned int)MiJoinSession(&v23) )
  {
    MiDeleteProcessShadow(v8, 0);
    goto LABEL_22;
  }
  v14 = a5;
  *(_QWORD *)(v8 + 1264) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v8, v13, v14);
  v16 = v23;
  v17 = TopLevelPage;
  if ( v23 )
  {
    *(_QWORD *)(v8 + 1024) = v23;
    _InterlockedOr((volatile signed __int32 *)(v8 + 772), 0x10000u);
    v16 = v23;
  }
  MiInsertNewProcess((_QWORD *)v8, v16);
  MiCreateNewProcessTopLevelMappings(v8, (__int64)(v13 << 25) >> 16);
  v18 = ((__int64)(v13 << 25) >> 16) + 3944;
  MiMakeValidPte(0LL, v17, -1879048186);
  if ( !MiPteInShadowRange(v18) )
    goto LABEL_16;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v20 = 1;
    if ( !HIBYTE(word_14043B26C) )
    {
LABEL_29:
      if ( (v19 & 1) != 0 )
        v19 |= 0x8000000000000000uLL;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
  {
    goto LABEL_29;
  }
LABEL_16:
  *(_QWORD *)(((__int64)(v13 << 25) >> 16) + 0xF68) = v19;
  if ( v20 )
    MiWritePteShadow(v18, v19);
  *(_QWORD *)(v8 + 40) = KeMakeKernelDirectoryTableBase(v17 << 12);
  MiSyncSystemPdes(v8);
  MiReleasePtes((__int64)&qword_14043C060, v13, 1u);
  return 1;
}
