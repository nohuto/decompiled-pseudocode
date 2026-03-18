/*
 * XREFs of ?EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@1@@Z @ 0x1C020EF54
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z @ 0x1C020EBE0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerInfoList::EmitSleepStudyBlockerTelemetry(
        DripsBlockerInfoList *this,
        __int64 a2,
        struct DripsBlockerInfoList::_DripsBlockerInfoTelemetryEntry *a3)
{
  const GUID *v3; // r9
  char v4; // r10
  unsigned __int16 *v5; // rax
  int v6; // ecx
  char v7; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  char *v9; // [rsp+60h] [rbp-29h]
  __int64 v10; // [rsp+68h] [rbp-21h]
  _DWORD *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  __int64 v13; // [rsp+80h] [rbp-9h]
  _DWORD v14[2]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 *Data4; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  const GUID *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  unsigned __int8 *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  const GUID *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  if ( dword_1C008D838 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000004uLL) )
    {
      v7 = v4;
      v9 = &v7;
      v5 = *(unsigned __int16 **)&v3->Data1;
      v10 = 1LL;
      v11 = v14;
      v12 = 2LL;
      v6 = *v5;
      v13 = *((_QWORD *)v5 + 1);
      Data4 = v3->Data4;
      v17 = v3 + 1;
      v19 = v3[1].Data4;
      v21 = v3 + 2;
      v14[0] = v6;
      v14[1] = 0;
      v16 = 8LL;
      v18 = 8LL;
      v20 = 8LL;
      v22 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006AD06, 0LL, v3, 9u, &pData);
    }
  }
}
