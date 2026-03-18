/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1C0060C48
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_di @ 0x1C0002B18 (WPP_RECORDER_SF_di.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rsi
  int v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a2 == 2 )
  {
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 312))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v3);
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 952))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v5,
               131097LL,
               0LL,
               &v14);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v3,
               1LL,
               131097LL,
               0LL,
               &v14);
  }
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, unsigned int *))(WdfFunctions_01023 + 1920))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v14,
               &DestinationString,
               &v13);
    if ( (int)result >= 0 )
    {
      result = v13;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          result = 0x8000000000000000uLL;
          a1[42] |= 0x8000000000000000uLL;
        }
      }
      else
      {
        result = 0x7FFFFFFFFFFFFFFFLL;
        a1[42] &= ~0x8000000000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = result;
    result = WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0xA2u, (__int64)&Context.Logger + 4, v11);
  }
  if ( v14 )
    result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v11) = a2;
      result = WPP_RECORDER_SF_d(a1[9], 5u, 4u, 0xA3u, (__int64)&Context.Logger + 4, v11);
    }
  }
  v8 = 0;
  v9 = a1 + 42;
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      result = (__int64)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_di(a1[9], 5u, v7, 0xA4u, v10);
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  return result;
}
