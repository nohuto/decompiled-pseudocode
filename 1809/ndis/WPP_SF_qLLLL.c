/*
 * XREFs of WPP_SF_qLLLL @ 0x1C0065A58
 * Callers:
 *     NdisMConfigMSIXTableEntry @ 0x1C0024E50 (NdisMConfigMSIXTableEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qLLLL(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids,
    0x28u,
    &v4,
    8LL,
    &v5,
    4LL,
    va,
    4LL,
    va1,
    4LL,
    va2,
    4LL,
    0LL);
}
