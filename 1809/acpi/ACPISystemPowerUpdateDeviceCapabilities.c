/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0019890
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C005D07C (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009A620 (ACPISystemPowerUpdateWakeCapabilities.c)
 *     ACPISystemPowerGetSxD @ 0x1C009AC6C (ACPISystemPowerGetSxD.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009ADBC (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  __int64 v7; // r13
  int v8; // eax
  void *v9; // rsi
  __int64 v10; // rdx
  int v11; // r14d
  unsigned int v12; // r14d
  int updated; // r13d
  unsigned int v14; // ecx
  __int64 *v15; // r13
  int v16; // eax
  int SxD; // eax
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r13
  __int64 *v20; // rax
  int v21; // eax
  KIRQL v22; // al
  __int32 v23; // ecx
  KIRQL v24; // r8
  unsigned int v25; // eax
  __int64 v26; // xmm1_8
  int v27; // edx
  void *v29; // rdx
  __int64 v30; // rcx
  void *v31; // rcx
  int v32; // r9d
  char v33; // r8
  void *v34; // r10
  void *v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // edx
  KIRQL v39; // r10
  void *v40; // rcx
  __int64 v41; // rax
  void *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // [rsp+40h] [rbp-59h]
  __int64 v45; // [rsp+40h] [rbp-59h]
  char v46; // [rsp+50h] [rbp-49h]
  int v47; // [rsp+54h] [rbp-45h]
  int v48; // [rsp+58h] [rbp-41h] BYREF
  int v49; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v50; // [rsp+60h] [rbp-39h]
  int v51; // [rsp+64h] [rbp-35h]
  int v52; // [rsp+68h] [rbp-31h] BYREF
  int v53; // [rsp+6Ch] [rbp-2Dh] BYREF
  __int64 *v54; // [rsp+70h] [rbp-29h]
  int v55; // [rsp+78h] [rbp-21h]
  int v56; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v57; // [rsp+80h] [rbp-19h]
  __int64 v58; // [rsp+88h] [rbp-11h]
  __m128i v59; // [rsp+90h] [rbp-9h] BYREF
  __int64 v60; // [rsp+A0h] [rbp+7h]
  __int32 v61; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v59 = a2[1];
  v61 = v3;
  v7 = a3;
  v58 = a3;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v59, 4));
  v53 = 0;
  v52 = 0;
  if ( v59.m128i_i32[1] != 1 )
    v8 = 1;
  v48 = 0;
  v59.m128i_i32[1] = v8;
  v50 = 0;
  v55 = 0;
  v49 = 0;
  v60 = v5;
  v9 = &unk_1C006E28A;
  v11 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v11 >= 0 )
  {
    v12 = v50 | v55;
    if ( !(v50 | v55) )
    {
      LODWORD(v10) = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v10 & 3) == 0 )
        goto LABEL_22;
      v12 = 4 * (*(_DWORD *)(v7 + 4) & 1) + 18;
      if ( (v10 & 2) != 0 )
        v12 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v10,
                v7,
                (unsigned int)&v59,
                (__int64)&v49,
                (__int64)&v48,
                (__int64)&v53,
                (__int64)&v52);
    if ( updated < 0 )
    {
      v9 = &unk_1C006E28A;
      v31 = &unk_1C006E28A;
      if ( BugCheckParameter2 )
      {
        v10 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v10 & 0x200000000000LL) != 0 )
        {
          v9 = *(void **)(BugCheckParameter2 + 560);
          if ( (v10 & 0x400000000000LL) != 0 )
            v31 = *(void **)(BugCheckParameter2 + 568);
        }
      }
      v32 = 21;
      goto LABEL_44;
    }
    v14 = 2;
    v15 = &v59.m128i_i64[1];
    v47 = 2;
    v54 = &v59.m128i_i64[1];
LABEL_10:
    v16 = AcpiSupportedSystemStates;
    if ( !_bittest(&v16, v14) )
      goto LABEL_19;
    SxD = ACPISystemPowerGetSxD(BugCheckParameter2, v14, &v56);
    if ( SxD >= 0 )
    {
      if ( v56 > *(_DWORD *)v15 )
        *(_DWORD *)v15 = v56;
      goto LABEL_19;
    }
    if ( SxD != -1073741772 )
    {
      v33 = 0;
      v34 = &unk_1C006E28A;
      v35 = &unk_1C006E28A;
      if ( BugCheckParameter2 )
      {
        v36 = *(_QWORD *)(BugCheckParameter2 + 8);
        v33 = BugCheckParameter2;
        if ( (v36 & 0x200000000000LL) != 0 )
        {
          v34 = *(void **)(BugCheckParameter2 + 560);
          if ( (v36 & 0x400000000000LL) != 0 )
            v35 = *(void **)(BugCheckParameter2 + 568);
        }
      }
      v45 = (__int64)v35;
      LOBYTE(v35) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v35,
        15,
        22,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        SxD,
        v33,
        (__int64)v34,
        v45);
    }
    LODWORD(v10) = v12 & (-1 << *(_DWORD *)v15);
    v46 = 0;
    v51 = v10;
    if ( !(_DWORD)v10 )
      goto LABEL_57;
    while ( 1 )
    {
      LeastSignificantBit = RtlFindLeastSignificantBit((unsigned int)v10);
      BugCheckParameter4 = LeastSignificantBit;
      v56 = LeastSignificantBit;
      LODWORD(v10) = ~(1 << LeastSignificantBit) & v51;
      v51 = v10;
      if ( v47 <= v48 )
      {
        if ( ((unsigned int)v10 & v49) != 0 )
          goto LABEL_53;
        v20 = v54;
        if ( (_DWORD)BugCheckParameter4 == v52 )
        {
          v46 = 1;
          *(_DWORD *)v54 = BugCheckParameter4;
        }
      }
      else
      {
        v20 = v54;
      }
      if ( (_DWORD)BugCheckParameter4 == 4 || !v50 )
      {
        *(_DWORD *)v20 = BugCheckParameter4;
        goto LABEL_18;
      }
      KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v37 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
      v57 = v37;
      if ( !v37 )
      {
        v42 = &unk_1C006E28A;
        if ( BugCheckParameter2 )
        {
          v43 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v43 & 0x200000000000LL) != 0 )
          {
            v9 = *(void **)(BugCheckParameter2 + 560);
            if ( (v43 & 0x400000000000LL) != 0 )
              v42 = *(void **)(BugCheckParameter2 + 568);
          }
        }
        LOBYTE(v38) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v38,
          15,
          23,
          (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
          BugCheckParameter4 - 1,
          v4,
          (__int64)v9,
          (__int64)v42);
        KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      }
      KeReleaseSpinLock(&AcpiPowerLock, v39);
      if ( v57 >= v47 )
      {
        v46 = 1;
        *(_DWORD *)v54 = BugCheckParameter4;
LABEL_56:
        if ( !v46 )
        {
LABEL_57:
          v40 = &unk_1C006E28A;
          if ( BugCheckParameter2 )
          {
            v41 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v41 & 0x200000000000LL) != 0 )
            {
              v9 = *(void **)(BugCheckParameter2 + 560);
              if ( (v41 & 0x400000000000LL) != 0 )
                v40 = *(void **)(BugCheckParameter2 + 568);
            }
          }
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            15,
            24,
            (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
            v47 - 1,
            v4,
            (__int64)v9,
            (__int64)v40);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v47);
        }
LABEL_18:
        v15 = v54;
LABEL_19:
        v15 = (__int64 *)((char *)v15 + 4);
        v21 = v47 + 1;
        v54 = v15;
        v47 = v21;
        if ( v21 <= 6 )
        {
          v14 = v21;
          goto LABEL_10;
        }
        LODWORD(v7) = v58;
LABEL_22:
        updated = ACPISystemPowerUpdateWakeCapabilities(
                    BugCheckParameter2,
                    v10,
                    v7,
                    (unsigned int)&v59,
                    (__int64)&v49,
                    (__int64)&v48,
                    (__int64)&v53,
                    (__int64)&v52);
        if ( updated >= 0 )
        {
          v22 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v23 = v61;
          v24 = v22;
          v25 = *(_DWORD *)(BugCheckParameter2 + 552) & 0xFFFFFFC0;
          v26 = v60;
          v27 = 2 * (v49 & 0x1E);
          *(__m128i *)(BugCheckParameter2 + 460) = v59;
          *(_QWORD *)(BugCheckParameter2 + 476) = v26;
          *(_DWORD *)(BugCheckParameter2 + 484) = v23;
          *(_DWORD *)(BugCheckParameter2 + 492) = v53;
          *(_DWORD *)(BugCheckParameter2 + 488) = v48;
          *(_DWORD *)(BugCheckParameter2 + 552) = v25 | (v12 >> 2) & 3 | v27;
          KeReleaseSpinLock(&AcpiPowerLock, v24);
          if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
          return 0LL;
        }
        v31 = &unk_1C006E28A;
        if ( BugCheckParameter2 )
        {
          v10 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v9 = *(void **)(BugCheckParameter2 + 560);
            if ( (v10 & 0x400000000000LL) != 0 )
              v31 = *(void **)(BugCheckParameter2 + 568);
          }
        }
        v32 = 25;
LABEL_44:
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          15,
          v32,
          (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
          updated,
          v4,
          (__int64)v9,
          (__int64)v31);
        return (unsigned int)updated;
      }
      LODWORD(v10) = v51;
LABEL_53:
      if ( !(_DWORD)v10 )
        goto LABEL_56;
    }
  }
  v29 = &unk_1C006E28A;
  if ( BugCheckParameter2 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 8);
    v4 = BugCheckParameter2;
    if ( (v30 & 0x200000000000LL) != 0 )
    {
      v9 = *(void **)(BugCheckParameter2 + 560);
      if ( (v30 & 0x400000000000LL) != 0 )
        v29 = *(void **)(BugCheckParameter2 + 568);
    }
  }
  v44 = (__int64)v29;
  LOBYTE(v29) = 2;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v29,
    15,
    20,
    (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
    v11,
    v4,
    (__int64)v9,
    v44);
  return (unsigned int)v11;
}
