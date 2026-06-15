/*
 * XREFs of WPP_SF_qd_guid_ @ 0x1800C5224
 * Callers:
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800C4CA0 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd_guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids, 12LL, (__int64 *)va);
}
