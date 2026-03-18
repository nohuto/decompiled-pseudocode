/*
 * XREFs of AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0048568
 * Callers:
 *     FreeContext @ 0x1C0065B50 (FreeContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0048AE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0048B10 (_TlgWrite.c)
 */

char __fastcall AcpiDiagTraceRecordAmlEvaluationStatistics(__int64 a1)
{
  unsigned __int128 v1; // rax
  const GUID *v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  int v6; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  _DWORD v11[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  *(_QWORD *)&v1 = *(_QWORD *)(a1 + 456);
  if ( (_QWORD)v1 )
  {
    v1 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v1) * (unsigned __int128)0x346DC5D63886594BuLL;
    if ( (unsigned int)(*((_QWORD *)&v1 + 1) >> 11) >= 0x3E8 && hProvider > 5u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, *((ULONGLONG *)&v1 + 1));
      if ( (_BYTE)v1 )
      {
        v6 = (int)v2;
        v8 = v11;
        v10 = *(_QWORD *)(v3 + 448);
        v11[0] = *(unsigned __int16 *)(v3 + 440);
        v12 = &v6;
        v9 = 2LL;
        v11[1] = v4;
        v13 = 4LL;
        LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0070540, v2, (LPCGUID)v3, 5u, &pData);
      }
    }
  }
  return v1;
}
