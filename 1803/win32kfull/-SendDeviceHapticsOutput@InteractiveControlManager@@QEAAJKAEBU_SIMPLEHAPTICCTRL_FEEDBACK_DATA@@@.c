/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C020CEB0
 * Callers:
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01F4670 (NtUserSendInteractiveControlHapticsReport.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0212154 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

int __fastcall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  int result; // eax
  InteractiveControlDevice **v8; // rbx
  __int64 v9; // rsi
  InteractiveControlDevice *v10; // rcx
  int v11; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  int *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]

  result = 0;
  v11 = 0;
  if ( dword_1C031C7D0 > 4u )
  {
    v16 = 0;
    v19 = 0;
    v14 = "InteractiveControlManager::SendDeviceHapticsOutput entry";
    v17 = v12;
    v15 = 57;
    v12[0] = a2;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3826, a3, a4, 4u, &pData);
    result = v11;
  }
  v8 = (InteractiveControlDevice **)((char *)this + 40);
  v9 = 5LL;
  do
  {
    v10 = *v8;
    if ( *v8 && (!a2 || a2 == *((_DWORD *)v10 + 2)) )
    {
      result = InteractiveControlDevice::SendHapticFeedbackOutput(
                 v10,
                 (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)a3);
      v11 = result;
      if ( result < 0 && dword_1C031C7D0 > 2u )
      {
        v16 = 0;
        v19 = 0;
        v12[0] = result;
        v17 = v12;
        v14 = "Function failed.";
        v15 = 17;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
        result = v11;
      }
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( dword_1C031C7D0 > 4u )
  {
    v16 = 0;
    v19 = 0;
    v14 = "InteractiveControlManager::SendDeviceHapticsOutput exit";
    v17 = &v11;
    v15 = 56;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, a3, a4, 4u, &pData);
    return v11;
  }
  return result;
}
