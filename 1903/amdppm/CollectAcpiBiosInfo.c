/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0035408
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C002611C (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(_DWORD *a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  _DWORD *Signature; // [rsp+40h] [rbp+8h] BYREF

  Signature = a1;
  AcpiTable = (unsigned int)GetAcpiTable((ULONG)a1, (ULONG)&Signature, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( Signature[14] )
    {
      dword_1C0013BF4 = 268439553;
      dword_1C0013BFC = 0;
      dword_1C0013BF8 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0013C00 = 268439553;
      HIDWORD(qword_1C0013C04) = 0;
      LODWORD(qword_1C0013C04) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C0013C0C = 268439553;
      dword_1C0013C14 = 0;
      dword_1C0013C10 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0013C18 = 268439553;
      HIDWORD(qword_1C0013C1C) = 0;
      LODWORD(qword_1C0013C1C) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0013C24 = 134219777;
      dword_1C0013C2C = 0;
      dword_1C0013C28 = Signature[18];
    }
    dword_1C0013C30 = Signature[12];
    byte_1C0013C36 = *((_BYTE *)Signature + 105);
    byte_1C0013C37 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0013BF2 = *((_WORD *)Signature + 49);
    byte_1C0013C34 = *((_BYTE *)Signature + 55);
    byte_1C0013C35 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  return (unsigned int)AcpiTable;
}
