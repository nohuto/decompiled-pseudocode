/*
 * XREFs of HvlpDetermineEnlightenments @ 0x140278EA4
 * Callers:
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D890 (HviGetEnlightenmentInformation.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x140278C6C (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x140279408 (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1402794A0 (HvlpTryToLockCpuManagementVersion.c)
 *     HviGetHardwareFeatures @ 0x140322540 (HviGetHardwareFeatures.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  int v0; // edi
  int v1; // esi
  __int64 v2; // rbx
  __int16 v3; // r15
  unsigned __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // r14d
  __int64 *v15; // rdi
  int v16; // ecx
  int v17; // edi
  int v18; // ebx
  char v19; // al
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v24; // [rsp+28h] [rbp-49h] BYREF
  PHYSICAL_ADDRESS v25[3]; // [rsp+30h] [rbp-41h] BYREF
  int v26; // [rsp+50h] [rbp-21h] BYREF
  signed int v27; // [rsp+54h] [rbp-1Dh]
  int v28; // [rsp+60h] [rbp-11h] BYREF
  int v29; // [rsp+64h] [rbp-Dh]
  __int64 v30; // [rsp+70h] [rbp-1h] BYREF
  _DWORD v31[3]; // [rsp+80h] [rbp+Fh] BYREF
  int v32; // [rsp+8Ch] [rbp+1Bh]
  _DWORD v33[4]; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE v34[16]; // [rsp+A0h] [rbp+2Fh] BYREF

  v0 = 0;
  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(&v26);
  HviGetHypervisorFeatures(&v30);
  HviGetHypervisorFeatures(v31);
  HviGetHardwareFeatures(v33);
  v1 = v26;
  if ( (v26 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v26 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v26 & 4) != 0 )
  {
    if ( (v26 & 0x20000) != 0 || (v0 = 8388612, v1 = v26, KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v30;
  if ( (v30 & 0x10) != 0 )
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
  v3 = v32;
  if ( (v32 & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  if ( (v1 & 0x40000) != 0 )
    HvlpFlags |= 0x400000u;
  if ( (v1 & 0x10000) != 0 )
    HvlpFlags |= 0x800000u;
  v5 = v0 | 0x80;
  if ( (v32 & 0x10) == 0 )
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
  if ( (v32 & 0x20) == 0 )
    v8 = v7;
  if ( v27 > 0 )
  {
    _BitScanReverse(&v9, v27);
    v8 |= 0x40u;
    HvlLongSpinCountMask = v27 | ((1 << v9) - 1);
  }
  if ( (v30 & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, &v28);
    v10 = v8 | 0x400;
    if ( (v29 & 1) == 0 )
      v10 = v8;
    v11 = v10 | 0x20000;
    if ( (v29 & 2) == 0 )
      v11 = v10;
    v8 = v11 | 0x40000;
    if ( (v29 & 4) == 0 )
      v8 = v11;
    if ( (v28 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v28 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( v28 < 0 )
    {
      v8 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      HvlpRootFlags |= 0x187u;
    }
    v12 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v28 & 4) != 0 )
    {
      v12 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v12 |= 0x10u;
      HvlpRootFlags = v12;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v12 | 0x400;
  }
  v13 = v8 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v13 = v8;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v14 = v13 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v14 = v13;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v15 = HvlpAcquireHypercallPage(v25, 2, (__int64)v34, 8LL);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((unsigned int *)v25);
    HvlPartitionId = *v15;
  }
  v16 = v14 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v16 = v14;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v17 = v16 | 0x8000;
  if ( (v2 & 0x20000000000000LL) == 0 )
    v17 = v16;
  if ( (v1 & 0x2000) != 0 )
  {
    v18 = v17 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v18 = v17;
  }
  else
  {
    v18 = v17;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v1 & 0x8000) != 0 && (v18 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v33[0] & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v19 = HvlpQueryExtendedCapabilities(&v24);
  v20 = v24 & -(__int64)(v19 != 0);
  if ( (v20 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v20 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v20 & 8) != 0 )
    HvlpFlags |= 0x100000u;
  if ( (v20 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v21 = v18 | 0x200000;
  if ( (v20 & 2) == 0 )
    v21 = v18;
  v22 = v21 | 0x400000;
  if ( (v20 & 4) == 0 )
    v22 = v21;
  result = HvlGetEnlightenmentInfo;
  qword_1403FF450 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v22;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v22;
  return result;
}
