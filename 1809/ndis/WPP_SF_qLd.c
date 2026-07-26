/*
 * XREFs of WPP_SF_qLd @ 0x1C007A340
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001F9B4 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qLd(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, 0x29u, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
