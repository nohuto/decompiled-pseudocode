/*
 * XREFs of PopDiagTracePowerSettingStart @ 0x1405B1220
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1405B13B8 (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSettingStart(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v8; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+48h] [rbp-38h]
  int v13; // [rsp+4Ch] [rbp-34h]
  int *v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+B0h] [rbp+30h] BYREF

  v4 = &retaddr;
  v22 = a3;
  v21 = a1;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 8;
      v14 = &v22;
      v11 = a2;
      v12 = 16;
      v15 = 4;
      v17 = a4;
      v18 = a3;
      LOBYTE(v4) = EtwWrite(v8, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
