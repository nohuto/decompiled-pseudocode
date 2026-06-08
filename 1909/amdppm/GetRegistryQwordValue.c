/*
 * XREFs of GetRegistryQwordValue @ 0x1C001C694
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x1C000E300 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001C614 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryQwordValue(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  int RegistryDwordValueNoDefault; // eax
  unsigned int v6; // ecx
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+10h] BYREF

  v9 = a2;
  v8 = 4294967288LL;
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[3] = &v8;
  v7[2] = L"Capabilities";
  LODWORD(v7[4]) = 184549376;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              v7,
              0LL,
              0LL) < 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                                    (__int64)L"Capabilities",
                                    (__int64)&v9);
    v6 = v9;
    if ( RegistryDwordValueNoDefault < 0 )
      v6 = 0;
    result = v6;
  }
  else
  {
    result = v8;
  }
  *a3 = result;
  return result;
}
