/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0037184
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00361EC (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C0023800 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(_DWORD *a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  _DWORD *Signature; // [rsp+40h] [rbp+8h] BYREF

  Signature = a1;
  AcpiTable = (unsigned int)GetAcpiTable((ULONG)a1, (ULONG)&Signature, a3, a4);
  if ( AcpiTable < 0 )
  {
    v6 = AcpiTable;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x52u,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      v6);
  }
  else
  {
    if ( Signature[14] )
    {
      dword_1C001AD84 = 268439553;
      dword_1C001AD8C = 0;
      dword_1C001AD88 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C001AD90 = 268439553;
      HIDWORD(qword_1C001AD94) = 0;
      LODWORD(qword_1C001AD94) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C001AD9C = 268439553;
      dword_1C001ADA4 = 0;
      dword_1C001ADA0 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C001ADA8 = 268439553;
      HIDWORD(qword_1C001ADAC) = 0;
      LODWORD(qword_1C001ADAC) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C001ADB4 = 134219777;
      dword_1C001ADBC = 0;
      dword_1C001ADB8 = Signature[18];
    }
    dword_1C001ADC0 = Signature[12];
    byte_1C001ADC6 = *((_BYTE *)Signature + 105);
    byte_1C001ADC7 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C001AD82 = *((_WORD *)Signature + 49);
    byte_1C001ADC4 = *((_BYTE *)Signature + 55);
    byte_1C001ADC5 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
