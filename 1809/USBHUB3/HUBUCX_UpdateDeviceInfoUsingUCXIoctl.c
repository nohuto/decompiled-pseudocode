/*
 * XREFs of HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0021478
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001BA30 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C00212C4 (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBUCX_UpdateDeviceInfoUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rsi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  unsigned __int8 v7; // dl
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 432),
                   0LL);
  memset(v3, 0, 0x48uLL);
  v4 = v3[6] | 0xB;
  v3[6] = v4;
  v5 = v4 | 4;
  v6 = v4 & 0xFFFFFFFB;
  if ( (*(_DWORD *)(v2 + 2496) & 4) == 0 )
    v6 = v5;
  v3[6] = v6;
  if ( (*(_DWORD *)(a1 + 1644) & 0x400) != 0 )
    v3[6] = v6 | 0x10;
  *v3 = 72;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  *((_QWORD *)v3 + 2) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v3 + 4) = a1 + 1988;
  *((_QWORD *)v3 + 5) = *(_QWORD *)(a1 + 2056);
  v7 = *(_BYTE *)(a1 + 2220);
  if ( (v7 & 8) == 0 || (*(_DWORD *)(a1 + 1644) & 0x80u) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000) != 0 )
  {
    v8 = 4061;
  }
  else
  {
    v8 = 4089;
    *(_BYTE *)(a1 + 2213) = ~(v7 >> 5) | 0xFE;
  }
  if ( v8 == 4089 )
    v9 = *(unsigned __int16 *)(a1 + 2204);
  else
    v9 = 0;
  v3[12] = v9;
  if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
    *((_BYTE *)v3 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters(a1, (__int64)v3);
  if ( (*(_DWORD *)(a1 + 2464) & 0x80u) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 1632);
    if ( (v10 & 0x20) != 0 && (v10 & 2) == 0 && *(_DWORD *)(*(_QWORD *)(a1 + 8) + 208LL) == 512 )
    {
      v3[6] |= 0x40u;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 240LL) )
        *((_WORD *)v3 + 32) = 20;
      else
        *((_WORD *)v3 + 32) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 2504) + 5LL);
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
  if ( (int)result < 0 )
  {
    v12 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x20u,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
             v12);
  }
  return result;
}
