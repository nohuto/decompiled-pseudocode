/*
 * XREFs of WPP_RECORDER_SF_qZDLd @ 0x1C00A6518
 * Callers:
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZDLd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  __int64 v8; // rdx
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v17; // [rsp+E0h] [rbp+38h]
  __int64 v18; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v20; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v5 = L"NULL";
  v6 = v17;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
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
      &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      0x36u,
      va,
      8LL,
      v10,
      2LL,
      v9,
      v8,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
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
  LOWORD(v14) = 54;
  return WppAutoLogTrace(
           a1,
           4LL,
           14LL,
           &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           v6,
           2LL,
           v5,
           v11,
           (__int64 *)va1);
}
