/*
 * XREFs of WPP_RECORDER_SF_ZqD @ 0x1C002854C
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104448 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZqD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rbx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  const wchar_t *v15; // r8
  int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v17 = va_arg(va1, _QWORD);
  v6 = L"NULL";
  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
      v13 = *a6;
    else
      v13 = 8LL;
    if ( a6 && *a6 )
      v14 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v14 = L"NULL";
    v15 = a6;
    if ( !a6 )
      v15 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
      a4,
      v15,
      2LL,
      v14,
      v13,
      va,
      8LL,
      va1,
      4LL,
      0LL);
  }
  if ( a6 )
    v10 = *a6;
  else
    v10 = 8LL;
  v11 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v11 = a6 == 0LL;
  }
  if ( v11 )
    v7 = L"\b";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           28LL,
           &WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
           v16,
           v7,
           2LL,
           v6,
           v10,
           (__int64 *)va,
           8LL,
           va1);
}
