/*
 * XREFs of WPP_RECORDER_SF_qZq @ 0x1C007FDC0
 * Callers:
 *     ndisIMCheckDeviceInstance @ 0x1C007FF38 (ndisIMCheckDeviceInstance.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  __int64 v8; // rdx
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  unsigned __int16 *v17; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, unsigned __int16 *);
  v5 = L"NULL";
  v6 = v17;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( v17 )
      v8 = *v17;
    else
      v8 = 8LL;
    if ( v17 && *v17 )
      v9 = (const wchar_t *)*((_QWORD *)v17 + 1);
    else
      v9 = L"NULL";
    v10 = v17;
    if ( !v17 )
      v10 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      0x34u,
      va,
      8LL,
      v10,
      2LL,
      v9,
      v8,
      va1,
      8LL,
      0LL);
  }
  if ( v6 )
    v11 = *v6;
  else
    v11 = 8LL;
  v12 = v6 == 0LL;
  if ( v6 )
  {
    if ( *v6 )
      v5 = (const wchar_t *)*((_QWORD *)v6 + 1);
    v12 = v6 == 0LL;
  }
  if ( v12 )
    v6 = L"\b";
  LOWORD(v14) = 52;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_a3868331fe073391203672ef2b551460_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           v6,
           2LL,
           v5,
           v11,
           va1);
}
