/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800DE1BC
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDAAC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800058A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800DD38C (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x1800DF620 (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
 */

__int64 __fastcall DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        unsigned int a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v5; // rsi
  unsigned int v10; // r14d
  int v11; // edi
  __int64 v12; // rdx
  unsigned __int16 *v14; // r12
  unsigned int v15; // r15d
  int v16; // ebx
  __int64 v17; // rdx
  struct _GUID v19; // [rsp+50h] [rbp-41h] BYREF
  struct _GUID *v20; // [rsp+60h] [rbp-31h]
  struct tWAVEFORMATEX **v21; // [rsp+68h] [rbp-29h]
  struct WAVEFORMATEXTENSIBLE Src; // [rsp+70h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v5 = a5;
  v20 = a4;
  v21 = a5;
  if ( a3->wFormatTag == 0xFFFE )
    v10 = *(_DWORD *)&a3[1].nChannels;
  else
    v10 = 0;
  *a5 = 0LL;
  v11 = ValidateUncompressedWaveFormatEx(a3);
  if ( v11 < 0 )
  {
    v12 = 1551LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  if ( v11 )
  {
    v19 = *a4;
    v11 = ConnectorSupportsFormat(a1, a2, a3, &v19);
    if ( v11 < 0 )
    {
      v12 = 1578LL;
      goto LABEL_6;
    }
    v16 = CloneWaveFormat(a3, a5);
    if ( v16 < 0 )
    {
      v17 = 1579LL;
      goto LABEL_16;
    }
  }
  else
  {
    memset_0(&Src, 0, sizeof(Src));
    InitWaveFormatEx(&Src, 1, a3->nSamplesPerSec, 32, 32, a3->nChannels, v10);
    v19 = *a4;
    v11 = ConnectorSupportsFormat(a1, a2, &Src.Format, &v19);
    if ( v11 < 0 )
    {
      v14 = (unsigned __int16 *)&unk_18017FE20;
      v15 = 0;
      do
      {
        if ( v15 >= 5 )
          break;
        InitWaveFormatEx(&Src, 0, a3->nSamplesPerSec, *v14, v14[1], a3->nChannels, v10);
        v19 = *v20;
        ++v15;
        v14 += 2;
        v11 = ConnectorSupportsFormat(a1, a2, &Src.Format, &v19);
      }
      while ( v11 < 0 );
      v5 = v21;
      if ( v11 < 0 )
      {
        v12 = 1571LL;
        goto LABEL_6;
      }
    }
    v16 = CloneWaveFormat(&Src.Format, v5);
    if ( v16 < 0 )
    {
      v17 = 1573LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v16);
      return (unsigned int)v16;
    }
  }
  return 0LL;
}
