/*
 * XREFs of CrmLogRegistrationNotify @ 0x180034C68
 * Callers:
 *     CrmRegistrationNotify @ 0x180034BE0 (CrmRegistrationNotify.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall CrmLogRegistrationNotify(__int64 a1, char a2, int a3)
{
  __int64 v3; // rax
  int v4; // r9d
  char v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  _BYTE v8[4]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  UUID *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  __int64 *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  _BYTE *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  int *v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+98h] [rbp+3Fh]
  int v23; // [rsp+9Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    if ( dword_18009B128 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL) )
    {
      v7 = *(_QWORD *)(v6 + 16);
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v10 = v7;
      v12 = &Uuid;
      v15 = &v10;
      v18 = v8;
      v21 = &v9;
      v8[0] = v5;
      v9 = v4;
      v13 = 16;
      v16 = 8;
      v19 = 1;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CE21, 0LL, 0LL, 6u, &pData);
    }
  }
  else if ( dword_18009B128 > 5u )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v10 = v3;
    v12 = &Uuid;
    v15 = &v10;
    v18 = v8;
    v21 = &v9;
    v8[0] = a2;
    v9 = a3;
    v13 = 16;
    v16 = 8;
    v19 = 1;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CF06, 0LL, 0LL, 6u, &pData);
  }
}
