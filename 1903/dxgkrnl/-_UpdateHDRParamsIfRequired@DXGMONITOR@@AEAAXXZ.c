/*
 * XREFs of ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0171FC0
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C002009C (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C017205C (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C0172794 (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02D07E4 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_UpdateHDRParamsIfRequired(DXGMONITOR *this)
{
  unsigned int ColorPrimariesType; // edi
  DXGMONITOR *v3; // rcx
  DXGMONITOR *v4; // rcx
  int v5; // ecx

  ColorPrimariesType = DXGMONITOR::_GetColorPrimariesType();
  if ( DXGMONITOR::EdidSupportsHDR(this) )
  {
    if ( ColorPrimariesType <= 1 )
    {
      *((_DWORD *)this + 157) = 675;
      *((_DWORD *)this + 158) = 348;
      *((_DWORD *)this + 159) = 250;
      *((_DWORD *)this + 160) = 686;
      *((_DWORD *)this + 161) = 133;
      *((_DWORD *)this + 162) = 41;
      *((_DWORD *)this + 163) = 320;
      *((_DWORD *)this + 164) = 337;
      *((_DWORD *)this + 165) = 4;
    }
    if ( *((_DWORD *)this + 167) )
      return;
    *((_DWORD *)this + 174) = 5;
    *((_DWORD *)this + 166) = 100;
    *((_DWORD *)this + 167) = 14990000;
    v5 = 7990000;
    *((_DWORD *)this + 170) = 14990000;
    *((_DWORD *)this + 169) = 100;
LABEL_8:
    *((_DWORD *)this + 171) = v5;
    *((_DWORD *)this + 168) = v5;
LABEL_9:
    *((_BYTE *)this + 692) = 0;
    return;
  }
  if ( DXGMONITOR::EdidSupportsHDR(v3)
    || !DXGMONITOR::EdidColorDepthMoreThanSDR(v4)
    || *((_DWORD *)this + 165) != 2
    || (unsigned int)DXGMONITOR::_GetColorPrimariesType() != 2 )
  {
    if ( !ColorPrimariesType )
      DXGMONITOR::_SetColorPrimariesToBT709(this);
    if ( *((_DWORD *)this + 167) )
      return;
    *((_DWORD *)this + 174) = 3;
    v5 = 2700000;
    *((_DWORD *)this + 166) = 5000;
    *((_DWORD *)this + 167) = 2700000;
    *((_DWORD *)this + 170) = 2700000;
    *((_DWORD *)this + 169) = 5000;
    goto LABEL_8;
  }
  if ( ColorPrimariesType <= 1 )
    DXGMONITOR::_SetColorPrimariesToBT709(this);
  if ( !*((_DWORD *)this + 167) )
  {
    *((_DWORD *)this + 174) = 4;
    *((_DWORD *)this + 166) = 5000;
    *((_DWORD *)this + 167) = 4000000;
    *((_DWORD *)this + 168) = 3500000;
    *((_DWORD *)this + 170) = 4000000;
    *((_DWORD *)this + 169) = 5000;
    *((_DWORD *)this + 171) = 3500000;
    goto LABEL_9;
  }
}
