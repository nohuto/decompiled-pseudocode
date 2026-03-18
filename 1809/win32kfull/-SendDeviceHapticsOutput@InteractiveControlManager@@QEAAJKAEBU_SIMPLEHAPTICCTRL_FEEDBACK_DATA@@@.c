/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C02362D8
 * Callers:
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C021BDB0 (NtUserSendInteractiveControlHapticsReport.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C023B908 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

int __fastcall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        int a2,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a3)
{
  int result; // eax
  InteractiveControlDevice **v7; // rbx
  __int64 v8; // rsi
  InteractiveControlDevice *v9; // rcx
  int v10; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]

  result = 0;
  v10 = 0;
  if ( dword_1C030C400 > 4u )
  {
    v15 = 0;
    v18 = 0;
    v13 = "InteractiveControlManager::SendDeviceHapticsOutput entry";
    v16 = v11;
    v14 = 57;
    v11[0] = a2;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6118, 0LL, 0LL, 4u, &pData);
    result = v10;
  }
  v7 = (InteractiveControlDevice **)((char *)this + 40);
  v8 = 5LL;
  do
  {
    v9 = *v7;
    if ( *v7 && (!a2 || a2 == *((_DWORD *)v9 + 2)) )
    {
      result = InteractiveControlDevice::SendHapticFeedbackOutput(v9, a3);
      v10 = result;
      if ( result < 0 && dword_1C030C400 > 2u )
      {
        v15 = 0;
        v18 = 0;
        v11[0] = result;
        v16 = v11;
        v13 = "Function failed.";
        v14 = 17;
        v17 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
        result = v10;
      }
    }
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( dword_1C030C400 > 4u )
  {
    v15 = 0;
    v18 = 0;
    v13 = "InteractiveControlManager::SendDeviceHapticsOutput exit";
    v16 = &v10;
    v14 = 56;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &pData);
    return v10;
  }
  return result;
}
