/*
 * XREFs of PspWritePebAffinityInfo @ 0x14067A7C4
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140694784 (PspApplyJobLimitsToProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1408C7180 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     KeQueryGroupMaskProcess @ 0x14000668C (KeQueryGroupMaskProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // r9d
  char v13; // bl
  unsigned int v14; // ebx
  signed __int32 v15[8]; // [rsp+0h] [rbp-98h] BYREF
  int v16; // [rsp+20h] [rbp-78h]
  unsigned int GroupMaskProcess; // [rsp+24h] [rbp-74h]
  unsigned int v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  _BYTE v23[48]; // [rsp+50h] [rbp-48h] BYREF

  v22 = a2;
  memset(v23, 0, sizeof(v23));
  v16 = 0;
  v4 = *(_QWORD *)(a2 + 1016);
  v19 = v4;
  if ( !v4 )
    return;
  if ( *(_QWORD *)(a2 + 744) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      v14 = 0;
      if ( a2 != *(_QWORD *)(a1 + 544) )
      {
        v16 = 2;
        v14 = 2;
      }
      if ( v14 < 2 )
      {
LABEL_19:
        if ( (v14 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v23);
        goto LABEL_3;
      }
    }
    else
    {
      LOBYTE(v14) = 3;
      v16 = 3;
    }
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768)) )
      return;
    goto LABEL_19;
  }
LABEL_3:
  v5 = 0LL;
  v6 = *(__int64 **)(a2 + 1064);
  if ( v6 )
    v5 = *v6;
  v20 = v5;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v8, GroupMaskProcess);
      v18 = v8;
      v9 = *(_QWORD *)(a2 + 8 * v8 + 88);
      v21 = v9;
    }
    while ( !v9 );
    *(_QWORD *)(v4 + 312) = v9;
    if ( v7 )
      *(_DWORD *)(v7 + 192) = v9 | HIDWORD(v9);
    _InterlockedOr(v15, 0);
    v10 = KeQueryGroupMaskProcess(a2);
  }
  while ( v12 != v10 || v11 != *(_QWORD *)(a2 + 8LL * v18 + 88) );
  v13 = v16;
  if ( v16 )
  {
    if ( (v16 & 1) != 0 )
      KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
    if ( (v13 & 2) != 0 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
  }
}
