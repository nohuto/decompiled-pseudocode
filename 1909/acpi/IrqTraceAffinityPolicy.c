/*
 * XREFs of IrqTraceAffinityPolicy @ 0x1C0097FC8
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1C009ADA8 (IrqPolicyGetDevicePolicy.c)
 * Callees:
 *     _TlgWrite @ 0x1C001D690 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001D730 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     IrqpAllocateInstancePath @ 0x1C009815C (IrqpAllocateInstancePath.c)
 */

void __fastcall IrqTraceAffinityPolicy(PDEVICE_OBJECT Pdo, ULONGLONG a2, __int16 a3, __int64 a4)
{
  unsigned __int16 v6; // si
  ULONG_PTR v8; // r9
  ULONG v9; // edi
  ULONGLONG v10; // rdx
  const GUID *v11; // r9
  __int16 v12; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+34h] [rbp-85h] BYREF
  ULONG v14; // [rsp+38h] [rbp-81h] BYREF
  __int64 v15; // [rsp+40h] [rbp-79h]
  PVOID P; // [rsp+48h] [rbp-71h]
  __int64 v17; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  _DWORD *v19; // [rsp+80h] [rbp-39h]
  int v20; // [rsp+88h] [rbp-31h]
  int v21; // [rsp+8Ch] [rbp-2Dh]
  __int64 v22; // [rsp+90h] [rbp-29h]
  _DWORD v23[2]; // [rsp+98h] [rbp-21h] BYREF
  int *v24; // [rsp+A0h] [rbp-19h]
  int v25; // [rsp+A8h] [rbp-11h]
  int v26; // [rsp+ACh] [rbp-Dh]
  __int16 *v27; // [rsp+B0h] [rbp-9h]
  int v28; // [rsp+B8h] [rbp-1h]
  int v29; // [rsp+BCh] [rbp+3h]
  __int64 *v30; // [rsp+C0h] [rbp+7h]
  int v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+CCh] [rbp+13h]
  ULONG *v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  int v35; // [rsp+DCh] [rbp+23h]

  v15 = 0LL;
  v6 = a2;
  if ( dword_1C007F120 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C007F120, a2) )
  {
    if ( v6 == 4 )
      v9 = RtlNumberOfSetBitsUlongPtr(v8);
    else
      v9 = 0;
    P = 0LL;
    IrqpAllocateInstancePath(Pdo);
    if ( dword_1C007F120 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C007F120, v10) )
    {
      v21 = 0;
      v23[1] = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v13 = v6;
      v19 = v23;
      v23[0] = (unsigned __int16)v15;
      v24 = &v13;
      v27 = &v12;
      v30 = &v17;
      v33 = &v14;
      v12 = a3;
      v17 = a4;
      v14 = v9;
      v20 = 2;
      v22 = 0LL;
      v25 = 4;
      v28 = 2;
      v31 = 8;
      v34 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C007F120, &unk_1C00723B2, (LPCGUID)4, v11, 8u, &pData);
    }
    if ( &word_1C006FF24 )
      ExFreePoolWithTag(0LL, 0);
  }
}
