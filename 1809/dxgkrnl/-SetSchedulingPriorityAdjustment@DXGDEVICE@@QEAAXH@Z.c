/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C011D5B0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C011CEF0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  DXGCONTEXT *v2; // rdi
  DXGCONTEXT *i; // rbx

  v2 = (DXGDEVICE *)((char *)this + 360);
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 45); i != v2 && i; i = *(DXGCONTEXT **)i )
  {
    DXGCONTEXT::SetSchedulingPriority(i, a2 + *((_DWORD *)i + 105), 1u);
    *((_DWORD *)i + 104) = a2;
  }
}
