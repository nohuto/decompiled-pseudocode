/*
 * XREFs of WPP_SF_qccL @ 0x1C007C4E8
 * Callers:
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0101094 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qccL(__int64 a1, __int64 a2, __int64 a3, char a4, ...)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  char v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_ab90398e33e23eea2eee39389267d473_Traceguids,
    0x11u,
    &v4,
    8LL,
    &v5,
    1LL,
    va,
    1LL,
    va1,
    4LL,
    0LL);
}
