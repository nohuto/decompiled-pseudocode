/*
 * XREFs of WPP_RECORDER_SF__guid_DqD @ 0x1C0029A7C
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_DqD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6, ...)
{
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  __int64 v12; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      a4,
      a6,
      16LL,
      va,
      4LL,
      va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           28LL,
           &WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
           v9,
           a6,
           16LL,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2);
}
