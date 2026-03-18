/*
 * XREFs of ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@AEAAXE@Z @ 0x1C024319C
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z @ 0x1C02429F4 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(
        DripsBlockerTrackingHelper *this,
        char a2)
{
  int v2; // r9d
  _BYTE *v3; // r10
  __int64 v6; // r11
  bool v7; // zf
  int v8; // r8d
  const GUID *v9; // r9
  int v10; // r11d
  char v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  const GUID *v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  char *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  char *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  char *v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]
  const GUID **v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B8h] [rbp+2Fh]
  int v30; // [rsp+BCh] [rbp+33h]
  __int64 *v31; // [rsp+C0h] [rbp+37h]
  int v32; // [rsp+C8h] [rbp+3Fh]
  int v33; // [rsp+CCh] [rbp+43h]

  v2 = 0;
  v3 = (char *)this + 100;
  v6 = 64LL;
  do
  {
    v7 = *v3 == 0;
    v8 = v2 + 1;
    v3 += 4720;
    if ( v7 )
      v8 = v2;
    v2 = v8;
    --v6;
  }
  while ( v6 );
  if ( dword_1C00A1888 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000002000uLL) )
    {
      v18 &= v10;
      v21 &= v10;
      v24 &= v10;
      v27 &= v10;
      v30 &= v10;
      v33 &= v10;
      v16 = &v12;
      v19 = &v11;
      v22 = (char *)this + 302096;
      v25 = (char *)this + 302120;
      v28 = &v13;
      v31 = &v14;
      v12 = (unsigned int)(v10 + 8);
      v17 = v10 + 8;
      v11 = a2;
      v20 = 1;
      v23 = v10 + 8;
      v26 = v10 + 8;
      v13 = v9;
      v29 = v10 + 8;
      v14 = 50331648LL;
      v32 = v10 + 8;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00737BB, 0LL, v9, v10 + 8, &pData);
    }
  }
}
