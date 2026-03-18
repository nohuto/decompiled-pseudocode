/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0027000
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C005EE7C (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPISystemPowerGetSxD @ 0x1C009703C (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009EAB4 (ACPISystemPowerUpdateWakeCapabilities.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009EB50 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // edx
  int v10; // r14d
  unsigned int v11; // r15d
  int updated; // eax
  signed int v13; // ecx
  int v14; // eax
  int SxD; // eax
  char v16; // cl
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r14
  __int64 *v19; // rax
  __int64 result; // rax
  KIRQL v21; // al
  __int32 v22; // ecx
  KIRQL v23; // r8
  unsigned int v24; // eax
  __int64 v25; // xmm1_8
  int v26; // edx
  void *v27; // rdx
  __int64 v28; // rcx
  void *v29; // rsi
  void *v30; // rdx
  __int64 v31; // rcx
  char v32; // r8
  void *v33; // r10
  void *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  KIRQL v37; // r10
  const char *v38; // rcx
  __int64 v39; // rax
  const char *v40; // rdx
  __int64 v41; // rcx
  void *v42; // rcx
  __int64 v43; // rdx
  char v44; // [rsp+50h] [rbp-49h]
  unsigned int v45; // [rsp+54h] [rbp-45h]
  int v46; // [rsp+54h] [rbp-45h]
  int v47; // [rsp+58h] [rbp-41h] BYREF
  int v48; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 *v49; // [rsp+60h] [rbp-39h]
  int v50; // [rsp+68h] [rbp-31h]
  unsigned int v51; // [rsp+6Ch] [rbp-2Dh]
  int v52; // [rsp+70h] [rbp-29h] BYREF
  int v53; // [rsp+74h] [rbp-25h] BYREF
  int v54; // [rsp+78h] [rbp-21h]
  int v55; // [rsp+7Ch] [rbp-1Dh]
  int v56; // [rsp+80h] [rbp-19h] BYREF
  __int64 v57; // [rsp+88h] [rbp-11h]
  __m128i v58; // [rsp+90h] [rbp-9h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+7h]
  __int32 v60; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v58 = a2[1];
  v60 = v3;
  v57 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
  v53 = 0;
  v52 = 0;
  if ( v58.m128i_i32[1] != 1 )
    v7 = 1;
  v47 = 0;
  v58.m128i_i32[1] = v7;
  v50 = 0;
  v55 = 0;
  v48 = 0;
  v59 = v5;
  v8 = (const char *)&unk_1C006FE7D;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v27 = &unk_1C006FE7D;
    if ( BugCheckParameter2 )
    {
      v28 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v28 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v28 & 0x400000000000LL) != 0 )
          v27 = *(void **)(BugCheckParameter2 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x14u,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        v10,
        v4,
        (__int64)v8,
        (__int64)v27);
    return (unsigned int)v10;
  }
  else
  {
    v11 = v50 | v55;
    if ( !(v50 | v55) )
    {
      v9 = *(_DWORD *)(v57 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v9 & 3) == 0 )
        goto LABEL_19;
      v11 = 4 * (*(_DWORD *)(v57 + 4) & 1) + 18;
      if ( (v9 & 2) != 0 )
        v11 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v9,
                v57,
                (unsigned int)&v58,
                (__int64)&v48,
                (__int64)&v47,
                (__int64)&v53,
                (__int64)&v52);
    v45 = updated;
    if ( updated >= 0 )
    {
      v13 = 2;
      v46 = 2;
      v49 = &v58.m128i_i64[1];
      while ( 1 )
      {
        v14 = AcpiSupportedSystemStates;
        if ( !_bittest(&v14, v13) )
        {
          v19 = v49;
          goto LABEL_18;
        }
        SxD = ACPISystemPowerGetSxD(BugCheckParameter2, (unsigned int)v13, &v56);
        v16 = SxD;
        if ( SxD >= 0 )
        {
          v19 = v49;
          if ( v56 > *(_DWORD *)v49 )
            *(_DWORD *)v49 = v56;
          v13 = v46;
          goto LABEL_18;
        }
        if ( SxD != -1073741772 )
        {
          v32 = 0;
          v33 = &unk_1C006FE7D;
          v34 = &unk_1C006FE7D;
          if ( BugCheckParameter2 )
          {
            v35 = *(_QWORD *)(BugCheckParameter2 + 8);
            v32 = BugCheckParameter2;
            if ( (v35 & 0x200000000000LL) != 0 )
            {
              v33 = *(void **)(BugCheckParameter2 + 560);
              if ( (v35 & 0x400000000000LL) != 0 )
                v34 = *(void **)(BugCheckParameter2 + 568);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x16u,
              (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
              v16,
              v32,
              (__int64)v33,
              (__int64)v34);
        }
        v44 = 0;
        v9 = v11 & (-1 << *(_DWORD *)v49);
        v51 = v9;
        if ( !v9 )
          goto LABEL_60;
        while ( 1 )
        {
          LeastSignificantBit = RtlFindLeastSignificantBit(v9);
          BugCheckParameter4 = LeastSignificantBit;
          v56 = LeastSignificantBit;
          v13 = v46;
          v9 = ~(1 << LeastSignificantBit) & v51;
          v51 = v9;
          if ( v46 > v47 )
          {
            v19 = v49;
            goto LABEL_16;
          }
          if ( (v9 & v48) == 0 )
            break;
LABEL_56:
          if ( !v9 )
          {
            v19 = v49;
            goto LABEL_59;
          }
        }
        v19 = v49;
        if ( (_DWORD)BugCheckParameter4 == v52 )
        {
          v44 = 1;
          *(_DWORD *)v49 = BugCheckParameter4;
        }
LABEL_16:
        if ( (_DWORD)BugCheckParameter4 == 4 || !v50 )
        {
          *(_DWORD *)v19 = BugCheckParameter4;
          goto LABEL_18;
        }
        KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v36 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
        v54 = v36;
        if ( !v36 )
        {
          v40 = (const char *)&unk_1C006FE7D;
          if ( BugCheckParameter2 )
          {
            v41 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v41 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 560);
              if ( (v41 & 0x400000000000LL) != 0 )
                v40 = *(const char **)(BugCheckParameter2 + 568);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x17u,
              (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
              BugCheckParameter4 - 1,
              v4,
              v8,
              v40);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
        }
        KeReleaseSpinLock(&AcpiPowerLock, v37);
        v13 = v46;
        if ( v54 < v46 )
        {
          v9 = v51;
          goto LABEL_56;
        }
        v19 = v49;
        v44 = 1;
        *(_DWORD *)v49 = BugCheckParameter4;
LABEL_59:
        if ( !v44 )
        {
LABEL_60:
          v38 = (const char *)&unk_1C006FE7D;
          if ( BugCheckParameter2 )
          {
            v39 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v39 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 560);
              if ( (v39 & 0x400000000000LL) != 0 )
                v38 = *(const char **)(BugCheckParameter2 + 568);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x18u,
              (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
              v46 - 1,
              v4,
              v8,
              v38);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v46);
        }
LABEL_18:
        v46 = ++v13;
        v49 = (__int64 *)((char *)v19 + 4);
        if ( v13 > 6 )
        {
LABEL_19:
          result = ACPISystemPowerUpdateWakeCapabilities(
                     BugCheckParameter2,
                     v9,
                     v57,
                     (unsigned int)&v58,
                     (__int64)&v48,
                     (__int64)&v47,
                     (__int64)&v53,
                     (__int64)&v52);
          v54 = result;
          if ( (int)result < 0 )
          {
            v42 = &unk_1C006FE7D;
            if ( BugCheckParameter2 )
            {
              v43 = *(_QWORD *)(BugCheckParameter2 + 8);
              v4 = BugCheckParameter2;
              if ( (v43 & 0x200000000000LL) != 0 )
              {
                v8 = *(const char **)(BugCheckParameter2 + 560);
                if ( (v43 & 0x400000000000LL) != 0 )
                  v42 = *(void **)(BugCheckParameter2 + 568);
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0xFu,
                0x19u,
                (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
                result,
                v4,
                (__int64)v8,
                (__int64)v42);
              return (unsigned int)v54;
            }
          }
          else
          {
            v21 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
            v22 = v60;
            v23 = v21;
            v24 = *(_DWORD *)(BugCheckParameter2 + 552) & 0xFFFFFFC0;
            v25 = v59;
            v26 = 2 * (v48 & 0x1E);
            *(__m128i *)(BugCheckParameter2 + 460) = v58;
            *(_QWORD *)(BugCheckParameter2 + 476) = v25;
            *(_DWORD *)(BugCheckParameter2 + 484) = v22;
            *(_DWORD *)(BugCheckParameter2 + 492) = v53;
            *(_DWORD *)(BugCheckParameter2 + 488) = v47;
            *(_DWORD *)(BugCheckParameter2 + 552) = v24 | (v11 >> 2) & 3 | v26;
            KeReleaseSpinLock(&AcpiPowerLock, v23);
            if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
              _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
            return 0LL;
          }
          return result;
        }
      }
    }
    v29 = &unk_1C006FE7D;
    v30 = &unk_1C006FE7D;
    if ( BugCheckParameter2 )
    {
      v31 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v29 = *(void **)(BugCheckParameter2 + 560);
        if ( (v31 & 0x400000000000LL) != 0 )
          v30 = *(void **)(BugCheckParameter2 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x15u,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        updated,
        v4,
        (__int64)v29,
        (__int64)v30);
    return v45;
  }
}
