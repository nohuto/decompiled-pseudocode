/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@AEAU_HIDP_CAPS@@_N@Z @ 0x1C018A91C
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C018A814 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, struct _IV_HIDP_CAPS *a2, struct _HIDP_CAPS *a3)
{
  struct _IV_HIDP_CAPS *v4; // rbx
  _WORD *v5; // rcx
  char *v6; // rdx
  __int64 v7; // r8

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      70,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v5 = (_WORD *)((char *)v4 + 20);
  *(_WORD *)v4 = a3->Usage;
  v6 = (char *)((char *)a3 - (char *)v4);
  *((_WORD *)v4 + 2) = a3->UsagePage;
  v7 = 17LL;
  *((_WORD *)v4 + 4) = a3->InputReportByteLength;
  *((_WORD *)v4 + 6) = a3->OutputReportByteLength;
  *((_WORD *)v4 + 8) = a3->FeatureReportByteLength;
  do
  {
    *v5 = *(_WORD *)((char *)v5 + (_QWORD)v6 - 10);
    ++v5;
    --v7;
  }
  while ( v7 );
  *((_WORD *)v4 + 28) = a3->NumberLinkCollectionNodes;
  *((_WORD *)v4 + 30) = a3->NumberInputButtonCaps;
  *((_WORD *)v4 + 32) = a3->NumberInputValueCaps;
  *((_WORD *)v4 + 34) = a3->NumberInputDataIndices;
  *((_WORD *)v4 + 36) = a3->NumberOutputButtonCaps;
  *((_WORD *)v4 + 38) = a3->NumberOutputValueCaps;
  *((_WORD *)v4 + 40) = a3->NumberOutputDataIndices;
  *((_WORD *)v4 + 42) = a3->NumberFeatureButtonCaps;
  *((_WORD *)v4 + 44) = a3->NumberFeatureValueCaps;
  *((_WORD *)v4 + 46) = a3->NumberFeatureDataIndices;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      12,
      71,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return 0LL;
}
