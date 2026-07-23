/*
 * XREFs of PspWritePebAffinityInfo @ 0x14066DFD0
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140605550 (PspApplyJobLimitsToProcess.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     PspUpdateSingleProcessAffinity @ 0x14088A4AC (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeQueryGroupMaskProcess @ 0x1400F123C (KeQueryGroupMaskProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  int v11; // r9d
  char v12; // bl
  unsigned int v13; // ebx
  signed __int32 v14[8]; // [rsp+0h] [rbp-98h] BYREF
  int v15; // [rsp+20h] [rbp-78h]
  unsigned int GroupMaskProcess; // [rsp+24h] [rbp-74h]
  unsigned int v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h]
  _BYTE v22[48]; // [rsp+50h] [rbp-48h] BYREF

  v21 = a2;
  v15 = 0;
  v3 = *(_QWORD *)(a2 + 1016);
  v18 = v3;
  if ( !v3 )
    return;
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      v13 = 0;
      if ( a2 != *(_QWORD *)(a1 + 544) )
      {
        v15 = 2;
        v13 = 2;
      }
      if ( v13 < 2 )
      {
LABEL_19:
        if ( (v13 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0LL, (__int64)v22);
        goto LABEL_3;
      }
    }
    else
    {
      LOBYTE(v13) = 3;
      v15 = 3;
    }
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760)) )
      return;
    goto LABEL_19;
  }
LABEL_3:
  v4 = 0LL;
  v5 = *(__int64 **)(a2 + 1064);
  if ( v5 )
    v4 = *v5;
  v19 = v4;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v7, GroupMaskProcess);
      v17 = v7;
      v8 = *(_QWORD *)(a2 + 8 * v7 + 88);
      v20 = v8;
    }
    while ( !v8 );
    *(_QWORD *)(v3 + 312) = v8;
    if ( v6 )
      *(_DWORD *)(v6 + 192) = v8 | HIDWORD(v8);
    _InterlockedOr(v14, 0);
    v9 = KeQueryGroupMaskProcess(a2);
  }
  while ( v11 != v9 || v10 != *(_QWORD *)(a2 + 8LL * v17 + 88) );
  v12 = v15;
  if ( v15 )
  {
    if ( (v15 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v22, 0LL);
    if ( (v12 & 2) != 0 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760));
  }
}
