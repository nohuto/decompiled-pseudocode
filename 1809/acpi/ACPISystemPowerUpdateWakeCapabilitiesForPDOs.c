/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0017BE0
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009A620 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0016038 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0098C18 (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00996A0 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        int *a8)
{
  int *v9; // r14
  char v10; // r15
  int v11; // esi
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // rax
  int v18; // r14d
  KIRQL v19; // r9
  int v20; // eax
  int IdleWakeInfo; // eax
  __int64 v22; // rcx
  char v23; // cl
  int *v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __m128i si128; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+48h] [rbp-40h]
  int v29; // [rsp+4Ch] [rbp-3Ch]

  v9 = a5;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v26 = a6;
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 8);
  v25 = a4;
  v24 = a5;
  if ( (*(_QWORD *)&v14 & 0x10000LL) == 0 )
    goto LABEL_2;
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v13 = *(_DWORD *)(a1 + 488);
  v18 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v19);
  if ( !v13 )
  {
    v22 = *(_QWORD *)(a1 + 952);
    if ( (v22 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v13 = 5;
      else
        v13 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v13 = (v22 & 0x100000000LL) != 0;
    }
  }
  v20 = AcpiSupportedSystemStates;
  if ( !_bittest(&v20, v13) )
  {
    v9 = v24;
    v12 = 0;
    v13 = 0;
    goto LABEL_2;
  }
  if ( v18 )
  {
    v23 = v18;
    v11 = v18;
    v9 = v24;
    v10 = 1;
    *v24 = 1 << v23;
  }
  else
  {
    v9 = v24;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v13, &v24);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v24);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v28 = 4;
    v29 = 4;
    if ( (unsigned int)v24 > 5 )
      v11 = 0;
    else
      v11 = si128.m128i_i32[(int)v24];
    v10 = 1;
  }
  v12 = v11;
  if ( v10 )
  {
LABEL_32:
    if ( v12 )
      goto LABEL_19;
LABEL_2:
    v15 = 0;
    goto LABEL_3;
  }
  v12 = *(_DWORD *)(v25 + 4LL * (int)v13);
  if ( !v12 )
  {
    v12 = 4;
    goto LABEL_32;
  }
LABEL_19:
  v15 = 1 << v12;
LABEL_3:
  v16 = (_DWORD *)v26;
  *v9 = v15;
  if ( v16 )
    *v16 = v13;
  if ( a7 )
    *a7 = v12;
  if ( a8 )
    *a8 = v11;
  return 0LL;
}
