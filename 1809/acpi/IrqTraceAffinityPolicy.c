/*
 * XREFs of IrqTraceAffinityPolicy @ 0x1C00938A4
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1C0092268 (IrqPolicyGetDevicePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0048AE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0048B10 (_TlgWrite.c)
 *     IrqpAllocateInstancePath @ 0x1C00B3478 (IrqpAllocateInstancePath.c)
 */

void __fastcall IrqTraceAffinityPolicy(PDEVICE_OBJECT Pdo, ULONGLONG a2, __int16 a3, ULONG_PTR a4)
{
  unsigned __int16 v6; // si
  ULONG v8; // edi
  ULONGLONG v9; // rdx
  const GUID *v10; // r9
  __int16 v11; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+34h] [rbp-85h] BYREF
  ULONG v13; // [rsp+38h] [rbp-81h] BYREF
  ULONG_PTR v14; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v15; // [rsp+48h] [rbp-71h]
  PVOID P; // [rsp+50h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-39h]
  int v19; // [rsp+88h] [rbp-31h]
  int v20; // [rsp+8Ch] [rbp-2Dh]
  __int64 v21; // [rsp+90h] [rbp-29h]
  _DWORD v22[2]; // [rsp+98h] [rbp-21h] BYREF
  int *v23; // [rsp+A0h] [rbp-19h]
  int v24; // [rsp+A8h] [rbp-11h]
  int v25; // [rsp+ACh] [rbp-Dh]
  __int16 *v26; // [rsp+B0h] [rbp-9h]
  int v27; // [rsp+B8h] [rbp-1h]
  int v28; // [rsp+BCh] [rbp+3h]
  ULONG_PTR *v29; // [rsp+C0h] [rbp+7h]
  int v30; // [rsp+C8h] [rbp+Fh]
  int v31; // [rsp+CCh] [rbp+13h]
  ULONG *v32; // [rsp+D0h] [rbp+17h]
  int v33; // [rsp+D8h] [rbp+1Fh]
  int v34; // [rsp+DCh] [rbp+23h]

  v6 = a2;
  if ( dword_1C007D120 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C007D120, a2) )
  {
    if ( v6 == 4 )
      v8 = RtlNumberOfSetBitsUlongPtr(a4);
    else
      v8 = 0;
    P = 0LL;
    IrqpAllocateInstancePath(Pdo);
    if ( dword_1C007D120 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C007D120, v9) )
    {
      v20 = 0;
      v22[1] = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v12 = v6;
      v18 = v22;
      v22[0] = v15;
      v23 = &v12;
      v26 = &v11;
      v29 = &v14;
      v32 = &v13;
      v11 = a3;
      v14 = a4;
      v13 = v8;
      v19 = 2;
      v21 = 0LL;
      v24 = 4;
      v27 = 2;
      v30 = 8;
      v33 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C007D120, &unk_1C00705D2, (LPCGUID)4, v10, 8u, &pData);
    }
    if ( &word_1C006E654 )
      ExFreePoolWithTag(0LL, 0);
  }
}
