/*
 * XREFs of HUBUCX_CreateDefaultEndpointInUCX @ 0x1C0023770
 * Callers:
 *     HUBDSM_CreatingUCXDefaultEndpointFor30 @ 0x1C001D410 (HUBDSM_CreatingUCXDefaultEndpointFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateDefaultEndpointInUCX(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 432LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 248LL),
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 160),
         a1 + 88);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x24u,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v4);
    }
    *(_DWORD *)(a1 + 1564) = -1073737728;
    *(_DWORD *)(a1 + 1560) = -1073741670;
  }
  result = 4065LL;
  if ( v2 >= 0 )
    return 4077LL;
  return result;
}
