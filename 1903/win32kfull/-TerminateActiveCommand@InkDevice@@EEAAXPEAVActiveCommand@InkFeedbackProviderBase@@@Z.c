/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C02526B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C0251064 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __fastcall InkDevice::TerminateActiveCommand(InkDevice *this, struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  _DWORD v2[4]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  const char *v6; // [rsp+70h] [rbp-28h]
  __int64 v7; // [rsp+78h] [rbp-20h]

  if ( *((_BYTE *)this - 20) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      v2[0] = *((_DWORD *)a2 + 5);
      InkDevice::DoSuperWetInkStop((InkDevice *)((char *)this - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)v2);
    }
  }
  else if ( dword_1C0321298 > 2u )
  {
    v2[0] = -1073741823;
    v4 = v2;
    v5 = 4LL;
    v6 = "Device not opened";
    v7 = 18LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &v3);
  }
}
