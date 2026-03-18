/*
 * XREFs of HUBID_BuildUxdPnpId @ 0x1C0019020
 * Callers:
 *     HUBPDO_AssignPDOIds @ 0x1C006F6FC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBREG_GetUxdPnpValue @ 0x1C0076364 (HUBREG_GetUxdPnpValue.c)
 */

__int64 __fastcall HUBID_BuildUxdPnpId(__int64 a1, const void **a2)
{
  int v4; // eax
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  void *v7; // rsi
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         0LL,
         &v9);
  if ( v4 >= 0 )
  {
    v8 = *(_OWORD *)(a1 + 1668);
    result = HUBREG_GetUxdPnpValue(a1, &v8, v9);
    if ( (int)result >= 0 )
    {
      if ( !v9 )
        return result;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v9,
        a2);
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)a2 + 2LL, 0x64334855u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, *(unsigned __int16 *)a2 + 2LL);
        result = (__int64)memmove(v7, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)a2 += 2;
        a2[1] = v7;
      }
      else
      {
        result = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   3u,
                   5u,
                   0xBu,
                   (__int64)&WPP_55e5ae68dce134eda0e0394b0184ed4a_Traceguids);
      }
    }
  }
  else
  {
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               3u,
               5u,
               0xAu,
               (__int64)&WPP_55e5ae68dce134eda0e0394b0184ed4a_Traceguids,
               v4);
  }
  if ( v9 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
