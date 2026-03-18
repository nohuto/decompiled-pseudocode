/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C00274E8
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009EAB4 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C00277C0 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009EC90 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009ED44 (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        signed int *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v10; // edi
  signed int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int DeviceWake; // eax
  bool v15; // zf
  signed int *v16; // rdx
  int v17; // eax
  signed int v18; // ecx
  KIRQL v20; // al
  signed int v21; // r13d
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  signed int v25; // r12d
  KIRQL v26; // r9
  signed int v27; // eax
  bool v28; // r12
  int IdleWakeInfo; // eax
  bool v30; // zf
  int v31; // esi
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // eax
  signed int v37; // ecx
  int v38; // eax
  char v39; // [rsp+20h] [rbp-50h]
  unsigned int v40; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v41; // [rsp+28h] [rbp-48h]
  signed int *v42; // [rsp+30h] [rbp-40h]
  signed int *v43; // [rsp+38h] [rbp-38h]
  signed int *v44; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v46; // [rsp+58h] [rbp-18h]
  int v47; // [rsp+5Ch] [rbp-14h]

  v10 = a3[12];
  v11 = a3[11];
  v42 = a6;
  *a5 = 0;
  v12 = a3[1];
  v43 = a7;
  v44 = a8;
  v13 = 0;
  v41 = a4;
  v39 = 0;
  if ( (v12 & 0x400) != 0 )
  {
    v13 = 2;
    *a5 = 2;
    v12 = a3[1];
  }
  if ( (v12 & 0x800) != 0 )
  {
    v13 |= 4u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x1000) != 0 )
  {
    v13 |= 8u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x2000) != 0 )
    *a5 = v13 | 0x10;
  if ( !v10 || !v11 )
  {
    v10 = 0;
    v39 = 1;
    v11 = 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) != 0 )
  {
    v20 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v21 = *(_DWORD *)(a1 + 488);
    LOBYTE(v22) = v20;
    v25 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v23, v24, v22);
    KeReleaseSpinLock(&AcpiPowerLock, v26);
    if ( v39 || v21 < v11 )
      v11 = v21;
    if ( !v11 )
    {
      v34 = *(_QWORD *)(a1 + 952);
      if ( (v34 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v11 = 5;
        else
          v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else
      {
        v11 = (v34 & 0x100000000LL) != 0;
      }
    }
    v27 = v25;
    if ( !v25 )
      v27 = v10;
    v28 = v25 != 0;
    v10 = v27;
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v21, &v40);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v40);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v40);
    }
    if ( IdleWakeInfo >= 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v46 = 4;
      v47 = 4;
      v35 = v40 > 5 ? 0 : si128.m128i_i32[v40];
      v36 = *a5;
      if ( _bittest(&v36, v35) )
      {
        v28 = 1;
        v10 = v35;
      }
    }
    if ( !v28 )
    {
      if ( (unsigned int)v11 > 6 )
        v11 = 0;
      v10 = *(_DWORD *)(v41 + 4LL * v11);
      if ( !v10 )
        v10 = 4;
    }
    if ( !v39 )
    {
      v30 = v10 == 5;
      if ( v10 >= 5 )
      {
LABEL_48:
        if ( v30 || !v10 )
        {
          v10 = 0;
          v11 = 0;
          v31 = 0;
        }
        else
        {
          v31 = 1 << v10;
        }
        *a5 = v31;
        goto LABEL_23;
      }
      do
      {
        v33 = *a5;
        if ( _bittest(&v33, v10) )
          break;
        ++v10;
      }
      while ( v10 < 5 );
    }
    v30 = v10 == 5;
    goto LABEL_48;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v40);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v40);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v46 = 4;
    v47 = 4;
    v37 = v40 > 5 ? 0 : si128.m128i_i32[v40];
    if ( v37 > 0 )
    {
      while ( 1 )
      {
        v38 = *a5;
        if ( _bittest(&v38, v37) )
          break;
        if ( --v37 <= 0 )
          goto LABEL_15;
      }
      v10 = v37;
    }
  }
LABEL_15:
  v15 = v11 == 0;
  if ( v11 > 0 )
  {
    v16 = (signed int *)(a4 + 4LL * v11);
    while ( 1 )
    {
      v17 = AcpiSupportedSystemStates;
      if ( _bittest(&v17, v11) )
      {
        v18 = *v16;
        if ( *v16 )
        {
          if ( v18 <= v10 )
            goto LABEL_20;
          v32 = *a5;
          if ( _bittest(&v32, v18) )
            break;
        }
      }
      --v11;
      --v16;
      if ( v11 <= 0 )
        goto LABEL_20;
    }
    v10 = *v16;
LABEL_20:
    v15 = v11 == 0;
  }
  if ( v15 )
  {
    v10 = 0;
    *a5 = 0;
  }
LABEL_23:
  if ( v42 )
    *v42 = v11;
  if ( v43 )
    *v43 = v10;
  if ( v44 )
    *v44 = v10;
  return 0LL;
}
