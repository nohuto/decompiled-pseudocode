/*
 * XREFs of PopDiagTracePowerTransitionTime @ 0x140724A68
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     PopPowerTransitionTimesInMs @ 0x14015DFEC (PopPowerTransitionTimesInMs.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void PopDiagTracePowerTransitionTime()
{
  int v0; // [rsp+30h] [rbp-59h] BYREF
  int v1; // [rsp+34h] [rbp-55h] BYREF
  int v2; // [rsp+38h] [rbp-51h] BYREF
  int v3; // [rsp+3Ch] [rbp-4Dh] BYREF
  _BYTE v4[4]; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v5[3]; // [rsp+44h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v7; // [rsp+60h] [rbp-29h]
  int v8; // [rsp+68h] [rbp-21h]
  int v9; // [rsp+6Ch] [rbp-1Dh]
  __int64 *v10; // [rsp+70h] [rbp-19h]
  int v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+7Ch] [rbp-Dh]
  int *v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+8Ch] [rbp+3h]
  int *v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  int *v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  _BYTE *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  _DWORD *v25; // [rsp+C0h] [rbp+37h]
  int v26; // [rsp+C8h] [rbp+3Fh]
  int v27; // [rsp+CCh] [rbp+43h]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES) )
    {
      PopPowerTransitionTimesInMs(&v0, &v1, &v2, &v3, (__int64)v4, v5);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (ULONGLONG)&v0;
      v7 = &v1;
      v10 = &qword_1404436E8;
      v13 = &v2;
      v16 = &v3;
      v19 = &dword_140443730;
      v22 = v4;
      v25 = v5;
      UserData.Size = 4;
      v8 = 4;
      v11 = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES, 0LL, 8u, &UserData);
    }
  }
}
