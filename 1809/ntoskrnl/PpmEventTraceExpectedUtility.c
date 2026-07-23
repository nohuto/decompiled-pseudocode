/*
 * XREFs of PpmEventTraceExpectedUtility @ 0x1401758B0
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14017547C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceExpectedUtility(__int64 a1)
{
  REGHANDLE v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  int v7; // eax
  int v8; // edx
  __int16 v9; // [rsp+40h] [rbp-49h] BYREF
  int v10; // [rsp+44h] [rbp-45h] BYREF
  int v11; // [rsp+48h] [rbp-41h] BYREF
  int v12; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v13; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  int *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  int *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  int *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  unsigned int *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]
  __int16 *v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B8h] [rbp+2Fh]
  int v29; // [rsp+BCh] [rbp+33h]
  __int64 v30; // [rsp+C0h] [rbp+37h]
  int v31; // [rsp+C8h] [rbp+3Fh]
  int v32; // [rsp+CCh] [rbp+43h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_EXPECTED_UTILITY) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v3 = *(_QWORD *)(a1 + 24184);
      UserData.Size = 8;
      if ( v3 )
        v4 = *(_DWORD *)(v3 + 72);
      else
        v4 = 100;
      v13 = v4;
      v5 = PpmCheckPeriod / 0x2710uLL;
      v6 = ((unsigned int)(PpmCheckPeriod / 0x2710uLL) * (*(_DWORD *)(a1 + 24244) / v4) + 50) / 0x64;
      v10 = v6;
      if ( v6 <= (unsigned int)(PpmCheckPeriod / 0x2710uLL) )
      {
        v7 = v5 - v6;
        v8 = 0;
      }
      else
      {
        v7 = 0;
        v10 = PpmCheckPeriod / 0x2710uLL;
        v8 = v6 - v5;
      }
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v11 = v7;
      v15 = &v11;
      v18 = &v10;
      v21 = &v12;
      v24 = &v13;
      v9 = *(unsigned __int8 *)(a1 + 208);
      v27 = &v9;
      v30 = a1 + 209;
      v12 = v8;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 2;
      v31 = 1;
      EtwWriteEx(v2, &PPM_ETW_EXPECTED_UTILITY, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
}
