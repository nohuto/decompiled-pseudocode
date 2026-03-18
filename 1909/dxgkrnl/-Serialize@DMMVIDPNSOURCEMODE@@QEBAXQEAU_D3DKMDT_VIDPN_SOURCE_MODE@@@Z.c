/*
 * XREFs of ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000EC40
 * Callers:
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131C2C (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6544 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02BE8CC (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BF688 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003B2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C00548AC (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 */

void __fastcall DMMVIDPNSOURCEMODE::Serialize(
        DMMVIDPNSOURCEMODE *this,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a2,
        __int64 a3)
{
  int v4; // eax
  __int64 v5; // rax

  a2->Id = *((_DWORD *)this + 6);
  a2->Type = *((_DWORD *)this + 18);
  v4 = *((_DWORD *)this + 18);
  if ( v4 == 1 )
    goto LABEL_2;
  if ( v4 == 2 )
  {
    a2->Format.Text = *DMMVIDPNSOURCEMODE::GetTextInfo(this);
  }
  else
  {
    if ( v4 > 2 && v4 <= 4 )
    {
LABEL_2:
      a2->Format.Graphics = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(this);
      return;
    }
    v5 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = *((int *)this + 18);
    WdLogEvent5_WdError(v5);
  }
}
