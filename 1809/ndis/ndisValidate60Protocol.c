/*
 * XREFs of ndisValidate60Protocol @ 0x1C00CE240
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00CDAF0 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     McTemplateK0zq @ 0x1C0059EB4 (McTemplateK0zq.c)
 *     WPP_SF_ZL @ 0x1C005E7A4 (WPP_SF_ZL.c)
 */

__int64 __fastcall ndisValidate60Protocol(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = -1073676283;
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_Z(0x4Bu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 40)
    && *(_QWORD *)(a1 + 48)
    && *(_QWORD *)(a1 + 56)
    && *(_QWORD *)(a1 + 64)
    && *(_QWORD *)(a1 + 72) )
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( *(_QWORD *)(a1 + 104) )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          v4 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A0254 >= 2u )
            WPP_SF_Z(0x4Eu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)(a1 + 16));
          if ( (byte_1C00A2084 & 0x10) != 0 )
            McTemplateK0zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 2);
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A0254 >= 2u )
          WPP_SF_Z(0x4Du, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)(a1 + 16));
        if ( (byte_1C00A2084 & 0x10) != 0 )
          McTemplateK0zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 1);
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A0254 >= 2u )
        WPP_SF_Z(0x4Cu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)(a1 + 16));
      if ( (byte_1C00A2084 & 0x10) != 0 )
        McTemplateK0zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 0);
    }
  }
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_ZL(0x4Fu, a2, (const wchar_t *)(a1 + 16), v4);
  return v4;
}
