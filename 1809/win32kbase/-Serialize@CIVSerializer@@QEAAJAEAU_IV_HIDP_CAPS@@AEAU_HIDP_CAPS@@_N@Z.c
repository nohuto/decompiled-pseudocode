/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@AEAU_HIDP_CAPS@@_N@Z @ 0x1C0154D34
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C0154C44 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, struct _IV_HIDP_CAPS *a2, struct _HIDP_CAPS *a3)
{
  _WORD *v5; // rcx
  __int64 v6; // r8

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x22u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v5 = (_WORD *)((char *)a2 + 20);
  *(_WORD *)a2 = a3->Usage;
  *((_WORD *)a2 + 2) = a3->UsagePage;
  v6 = 17LL;
  *((_WORD *)a2 + 4) = a3->InputReportByteLength;
  *((_WORD *)a2 + 6) = a3->OutputReportByteLength;
  *((_WORD *)a2 + 8) = a3->FeatureReportByteLength;
  do
  {
    *v5 = *(_WORD *)((char *)v5 + (char *)a3 - (char *)a2 - 10);
    ++v5;
    --v6;
  }
  while ( v6 );
  *((_WORD *)a2 + 28) = a3->NumberLinkCollectionNodes;
  *((_WORD *)a2 + 30) = a3->NumberInputButtonCaps;
  *((_WORD *)a2 + 32) = a3->NumberInputValueCaps;
  *((_WORD *)a2 + 34) = a3->NumberInputDataIndices;
  *((_WORD *)a2 + 36) = a3->NumberOutputButtonCaps;
  *((_WORD *)a2 + 38) = a3->NumberOutputValueCaps;
  *((_WORD *)a2 + 40) = a3->NumberOutputDataIndices;
  *((_WORD *)a2 + 42) = a3->NumberFeatureButtonCaps;
  *((_WORD *)a2 + 44) = a3->NumberFeatureValueCaps;
  *((_WORD *)a2 + 46) = a3->NumberFeatureDataIndices;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x23u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
