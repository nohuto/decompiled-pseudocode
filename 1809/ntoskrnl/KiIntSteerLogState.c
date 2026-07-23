/*
 * XREFs of KiIntSteerLogState @ 0x14016E32C
 * Callers:
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     KiIntSteerDisable @ 0x14016D520 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14016DFA4 (KiIntSteerConnect.c)
 *     KiIntSteerLogStatus @ 0x14029AB98 (KiIntSteerLogStatus.c)
 * Callees:
 *     KiIntSteerEtwEventEnabled @ 0x14005B8E0 (KiIntSteerEtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogState(__int64 a1, __int64 a2)
{
  char result; // al
  const EVENT_DESCRIPTOR *v4; // r11
  ULONGLONG v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  _DWORD v8[4]; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  _DWORD *v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  _DWORD *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  _DWORD *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  result = KiIntSteerEtwEventEnabled(a2);
  if ( result )
  {
    v8[0] = -1;
    v5 = *(_QWORD *)(a1 + 16) + 32LL;
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v5;
    v10 = v8;
    v12 = v8;
    v14 = a1 + 68;
    v6 = *(__int64 **)(a1 + 32);
    v11 = 4LL;
    v13 = 4LL;
    v15 = 4LL;
    v7 = *v6;
    v18 = v8;
    v16 = v7 + 24;
    v20 = v8;
    v17 = 8LL;
    v8[0] = 0;
    v19 = 4LL;
    v21 = 4LL;
    return EtwWriteEx(KiIntSteerEtwHandle, v4, 0LL, 0, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
