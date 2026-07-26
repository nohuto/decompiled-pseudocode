/*
 * XREFs of WPP_SF__guid_Dd @ 0x1C0041BCC
 * Callers:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF__guid_Dd(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = a4;
  ndisWppFastTraceMessage(&WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, 0xAAu, a3, 16LL, &v4, 4LL, va, 4LL, 0LL);
}
