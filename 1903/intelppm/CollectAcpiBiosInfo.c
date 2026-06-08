/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0039178
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00396F4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C001F7B0 (GetAcpiTable.c)
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  }
  else
  {
    if ( Signature[14] )
    {
      dword_1C001BD94 = 268439553;
      dword_1C001BD9C = 0;
      dword_1C001BD98 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C001BDA0 = 268439553;
      HIDWORD(qword_1C001BDA4) = 0;
      LODWORD(qword_1C001BDA4) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C001BDAC = 268439553;
      dword_1C001BDB4 = 0;
      dword_1C001BDB0 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C001BDB8 = 268439553;
      HIDWORD(qword_1C001BDBC) = 0;
      LODWORD(qword_1C001BDBC) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C001BDC4 = 134219777;
      dword_1C001BDCC = 0;
      dword_1C001BDC8 = Signature[18];
    }
    dword_1C001BDD0 = Signature[12];
    byte_1C001BDD6 = *((_BYTE *)Signature + 105);
    byte_1C001BDD7 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C001BD92 = *((_WORD *)Signature + 49);
    byte_1C001BDD4 = *((_BYTE *)Signature + 55);
    byte_1C001BDD5 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
