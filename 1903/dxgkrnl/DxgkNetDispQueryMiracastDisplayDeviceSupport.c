/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C01530B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceSupport(ULONG64 a1)
{
  int v2; // edx
  __int64 v4; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  LODWORD(v4) = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v2 = DxgkMiracastQueryMiracastSupportInternal(&v6);
  if ( v2 >= 0 )
  {
    HIDWORD(v4) = HIDWORD(v6);
    LOBYTE(v4) = v6;
    LOBYTE(v5) = v7;
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_QWORD *)a1 = v4;
    *(_DWORD *)(a1 + 8) = v5;
  }
  return (unsigned int)v2;
}
