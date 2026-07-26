/*
 * XREFs of WPP_SF_SqZ @ 0x1C0049BE4
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A7B0 (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_SqZ(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  const wchar_t *v3; // rax
  __int64 v4; // rdx
  const wchar_t *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v10; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, unsigned __int16 *);
  v3 = v10;
  if ( v10 )
    v4 = *v10;
  else
    v4 = 8LL;
  if ( v10 && *v10 )
    v5 = (const wchar_t *)*((_QWORD *)v10 + 1);
  else
    v5 = L"NULL";
  if ( !v10 )
    v3 = L"\b";
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_293c7713174a39067998d2cc62157da6_Traceguids,
    0x7Fu,
    a3,
    v7,
    va,
    8LL,
    v3,
    2LL,
    v5,
    v4,
    0LL);
}
