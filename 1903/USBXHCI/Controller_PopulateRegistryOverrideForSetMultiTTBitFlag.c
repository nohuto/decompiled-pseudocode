/*
 * XREFs of Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006173C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h]
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0;
  result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             0LL,
             L"vx",
             131097LL,
             0LL,
             &v5);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v5,
               L"HJ",
               4LL,
               &v4,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      result = v4;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          result = 0x2000000000000000LL;
          *(_QWORD *)(a1 + 336) |= 0x2000000000000000uLL;
        }
      }
      else
      {
        result = 0xDFFFFFFFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 336) &= ~0x2000000000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v3) = result;
    result = WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 3u, 4u, 0xA5u, (__int64)&Context.Logger + 4, v3);
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
