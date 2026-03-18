/*
 * XREFs of RIMFillDeviceHealthInfo @ 0x1C00E1BB0
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00E319C (RIMLogDeviceHealthTelemetry.c)
 */

__int64 __fastcall RIMFillDeviceHealthInfo(ULONG64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // edi
  __int64 v6; // rax
  _OWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, 0x2CuLL);
  LODWORD(v8[0]) = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v4 = *(_DWORD *)(a2 + 184);
  LODWORD(v8[1]) = (v4 >> 12) & 1;
  DWORD1(v8[1]) = __CFSHR__(v4, 11);
  DWORD2(v8[1]) = __CFSHR__(v4, 12);
  LODWORD(v8[2]) = (unsigned __int8)(v4 & 0x40) >> 6;
  DWORD1(v8[2]) = !__CFSHR__(v4, 12) && !__CFSHR__(v4, 11) && (v4 & 0x80u) == 0;
  DWORD1(v8[0]) = *(_DWORD *)(a2 + 288);
  DWORD2(v8[0]) = *(_DWORD *)(a2 + 272);
  HIDWORD(v8[0]) = *(_DWORD *)(a2 + 152);
  v5 = (v4 >> 26) & 1;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 480);
    if ( v6 )
      HIDWORD(v8[1]) = -__CFSHR__(*(_DWORD *)(v6 + 276), 15);
  }
  RIMLogDeviceHealthTelemetry(a2, L"RIMFillDeviceHealthInfo", 0LL);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)a1 = v8[0];
  *(_OWORD *)(a1 + 16) = v8[1];
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v8[2];
  *(_DWORD *)(a1 + 40) = v5;
  return 1LL;
}
