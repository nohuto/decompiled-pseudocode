/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00CC840
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C012195C (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  DXGCONTEXT *v2; // rdi
  DXGCONTEXT *i; // rbx

  v2 = (DXGDEVICE *)((char *)this + 360);
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 45); i != v2 && i; i = *(DXGCONTEXT **)i )
  {
    DXGCONTEXT::SetSchedulingPriority(i, a2 + *((_DWORD *)i + 109), 1);
    *((_DWORD *)i + 108) = a2;
  }
}
