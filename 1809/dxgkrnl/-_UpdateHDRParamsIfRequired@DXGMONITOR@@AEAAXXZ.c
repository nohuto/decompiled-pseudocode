/*
 * XREFs of ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C004F11C (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C029A430 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C029AC98 (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C029DD64 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_UpdateHDRParamsIfRequired(DXGMONITOR *this)
{
  unsigned int ColorPrimariesType; // edi
  DXGMONITOR *v3; // rcx
  int v4; // ecx
  DXGMONITOR *v5; // rcx
  _DWORD *v6; // rcx

  ColorPrimariesType = DXGMONITOR::_GetColorPrimariesType(this);
  if ( DXGMONITOR::EdidSupportsHDR(this) )
  {
    if ( ColorPrimariesType <= 1 )
    {
      *((_DWORD *)this + 156) = 675;
      *((_DWORD *)this + 157) = 348;
      *((_DWORD *)this + 158) = 250;
      *((_DWORD *)this + 159) = 686;
      *((_DWORD *)this + 160) = 133;
      *((_DWORD *)this + 161) = 41;
      *((_DWORD *)this + 162) = 320;
      *((_DWORD *)this + 163) = 337;
      *((_DWORD *)this + 164) = 4;
    }
    if ( !*((_DWORD *)this + 166) )
    {
      *((_DWORD *)this + 173) = 5;
      *((_DWORD *)this + 165) = 100;
      *((_DWORD *)this + 166) = 14990000;
      v4 = 7990000;
      *((_DWORD *)this + 169) = 14990000;
      *((_DWORD *)this + 168) = 100;
LABEL_18:
      *((_DWORD *)this + 170) = v4;
      *((_DWORD *)this + 167) = v4;
      goto LABEL_19;
    }
  }
  else if ( !DXGMONITOR::EdidSupportsHDR(v3)
         && DXGMONITOR::EdidColorDepthMoreThanSDR(v5)
         && *((_DWORD *)this + 164) == 2
         && (unsigned int)DXGMONITOR::_GetColorPrimariesType(v6) == 2 )
  {
    if ( ColorPrimariesType <= 1 )
      DXGMONITOR::_SetColorPrimariesToBT709(this);
    if ( !*((_DWORD *)this + 166) )
    {
      *((_DWORD *)this + 173) = 4;
      *((_DWORD *)this + 165) = 5000;
      *((_DWORD *)this + 166) = 4000000;
      *((_DWORD *)this + 167) = 3500000;
      *((_DWORD *)this + 169) = 4000000;
      *((_DWORD *)this + 168) = 5000;
      *((_DWORD *)this + 170) = 3500000;
LABEL_19:
      *((_BYTE *)this + 688) = 0;
    }
  }
  else
  {
    if ( !ColorPrimariesType )
      DXGMONITOR::_SetColorPrimariesToBT709(this);
    if ( !*((_DWORD *)this + 166) )
    {
      *((_DWORD *)this + 173) = 3;
      v4 = 2700000;
      *((_DWORD *)this + 165) = 5000;
      *((_DWORD *)this + 166) = 2700000;
      *((_DWORD *)this + 169) = 2700000;
      *((_DWORD *)this + 168) = 5000;
      goto LABEL_18;
    }
  }
}
