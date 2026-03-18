/*
 * XREFs of HvlpDetermineEnlightenments @ 0x14028CF88
 * Callers:
 *     HvlPhase0Initialize @ 0x1407882AC (HvlPhase0Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14018B5D0 (HviGetEnlightenmentInformation.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1401BE010 (HvlpQueryHypervisorSchedulerType.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x14028CD50 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x14028D54C (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x14028D5F4 (HvlpTryToLockCpuManagementVersion.c)
 *     HviGetHardwareFeatures @ 0x140343D80 (HviGetHardwareFeatures.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  int v0; // edi
  int v1; // esi
  __int64 v2; // rbx
  unsigned int v3; // r15d
  unsigned __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // ecx
  char v10; // r14
  int v11; // ecx
  int v12; // edx
  ULONG v13; // eax
  int v14; // ecx
  int v15; // r14d
  __int64 *v16; // rdi
  int v17; // ecx
  int v18; // edi
  int v19; // ebx
  char v20; // al
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v25; // [rsp+28h] [rbp-49h] BYREF
  PHYSICAL_ADDRESS v26[4]; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v30; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+88h] [rbp+17h]
  _QWORD v32[2]; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE v33[16]; // [rsp+A0h] [rbp+2Fh] BYREF

  v25 = 0LL;
  v28[0] = 0LL;
  v28[1] = 0LL;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32[0] = 0LL;
  v32[1] = 0LL;
  memset(v26, 0, sizeof(v26));
  v0 = 0;
  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(v27);
  v29[0] = 0LL;
  v29[1] = 0LL;
  HviGetHypervisorFeatures(v29);
  HviGetHypervisorFeatures(&v30);
  HviGetHardwareFeatures(v32);
  v1 = v27[0];
  if ( (v27[0] & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v27[0] & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v27[0] & 4) != 0 )
  {
    if ( (v27[0] & 0x20000) != 0 || (v0 = 8388612, v1 = v27[0], KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v29[0];
  if ( (v29[0] & 0x10) != 0 )
    HvlpFlags |= 0x80000u;
  if ( (v1 & 8) != 0 )
  {
    v0 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v1 & 0x200) != 0 )
  {
    v0 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v3 = HIDWORD(v31);
  if ( (v31 & 0x4000000000000LL) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  if ( (v1 & 0x40000) != 0 )
    HvlpFlags |= 0x400000u;
  v5 = v0 | 0x80;
  if ( ((HIDWORD(v31) >> 4) & 1) == 0 )
    v5 = v0;
  if ( (v1 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v6 = v5 | 0x20;
  if ( (v1 & 0x20) == 0 )
    v6 = v5;
  v7 = v6 | 0x4000;
  if ( (v1 & 0x400) == 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v31 & 0x2000000000LL) == 0 )
    v8 = v7;
  if ( SHIDWORD(v27[0]) > 0 )
  {
    _BitScanReverse(&v9, HIDWORD(v27[0]));
    v8 |= 0x40u;
    HvlLongSpinCountMask = HIDWORD(v27[0]) | ((1 << v9) - 1);
  }
  if ( (v29[0] & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v8 |= 0x4000000u;
    if ( ((v3 >> 4) & 1) == 0 )
      v8 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, v28);
    v10 = v28[0];
    v11 = v8 | 0x400;
    if ( (v28[0] & 0x100000000LL) == 0 )
      v11 = v8;
    v12 = v11 | 0x20000;
    if ( (v28[0] & 0x200000000LL) == 0 )
      v12 = v11;
    v8 = v12 | 0x40000;
    if ( (v28[0] & 0x400000000LL) == 0 )
      v8 = v12;
    if ( (v28[0] & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v28[0] & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( SLODWORD(v28[0]) < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v8 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v8 |= 0x40000u;
    }
    v13 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v10 & 4) != 0 )
    {
      v13 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v13 |= 0x10u;
      HvlpRootFlags = v13;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v13 | 0x400;
  }
  v14 = v8 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v14 = v8;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v15 = v14 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v15 = v14;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v16 = HvlpAcquireHypercallPage(v26, 2, (__int64)v33, 8LL);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((unsigned int *)v26);
    HvlPartitionId = *v16;
  }
  v17 = v15 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v17 = v15;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v18 = v17 | 0x8000;
  if ( (v2 & 0x20000000000000LL) == 0 )
    v18 = v17;
  if ( (v1 & 0x2000) != 0 )
  {
    v19 = v18 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v19 = v18;
  }
  else
  {
    v19 = v18;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v1 & 0x8000) != 0 && (v19 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v32[0] & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v20 = HvlpQueryExtendedCapabilities(&v25);
  v21 = v25 & -(__int64)(v20 != 0);
  if ( (v21 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v21 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v21 & 8) != 0 )
    HvlpFlags |= 0x100000u;
  if ( (v21 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v22 = v19 | 0x200000;
  if ( (v21 & 2) == 0 )
    v22 = v19;
  v23 = v22 | 0x400000;
  if ( (v21 & 4) == 0 )
    v23 = v22;
  result = HvlGetEnlightenmentInfo;
  qword_140424450 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v23;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v23;
  return result;
}
