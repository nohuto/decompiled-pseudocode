/*
 * XREFs of HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C0020CE8
 * Callers:
 *     HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x1C001BBF0 (HUBDSM_NotifyingDeviceResetToUCXAfterReset2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

_QWORD *__fastcall HUBUCX_NotifyDeviceResetUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r14
  _QWORD *i; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  _QWORD *result; // rax
  _DWORD *v9; // rbx
  __int64 j; // rdx
  _QWORD *v11; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)(a1 + 96) )
  {
LABEL_12:
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1 + 432),
                     0LL);
    memset(v9, 0, 0x30uLL);
    *v9 = 48;
    *((_QWORD *)v9 + 1) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 248LL);
    *((_QWORD *)v9 + 2) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v9 + 3) = *(_QWORD *)(a1 + 88);
    *((_QWORD *)v9 + 5) = v3;
    v9[8] = v2;
    result = (_QWORD *)HUBUCX_SubmitUcxIoctl(a1, 0x49101Bu);
    if ( (int)result < 0 )
      goto LABEL_13;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 120);
  for ( i = *(_QWORD **)(v1 + 16); ; i = (_QWORD *)*i )
  {
    v6 = i - 1;
    if ( (_QWORD *)(v1 + 16) == i )
      goto LABEL_12;
    v7 = 0LL;
    if ( *((_DWORD *)v6 + 6) )
      break;
LABEL_10:
    ;
  }
  while ( LODWORD(v6[9 * v7 + 6]) != 4 )
  {
LABEL_9:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)v6 + 6) )
      goto LABEL_10;
  }
  if ( v3 )
  {
    LODWORD(v6[9 * v7 + 6]) = 5;
    *(_QWORD *)(v3 + 8 * v2) = v6[9 * v7 + 5];
    v2 = (unsigned int)(v2 + 1);
    goto LABEL_9;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x16u,
    (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
  LODWORD(result) = -1073741811;
LABEL_13:
  result = (_QWORD *)WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       2u,
                       5u,
                       0x17u,
                       (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
                       (_DWORD)result);
  if ( v1 )
  {
    for ( result = *(_QWORD **)(v1 + 16); ; result = (_QWORD *)*result )
    {
      v11 = result - 1;
      if ( (_QWORD *)(v1 + 16) == result )
        break;
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)v11 + 6); j = (unsigned int)(j + 1) )
      {
        if ( LODWORD(v11[9 * j + 6]) == 5 )
          LODWORD(v11[9 * j + 6]) = 4;
      }
    }
  }
  return result;
}
