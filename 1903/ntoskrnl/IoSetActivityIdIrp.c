/*
 * XREFs of IoSetActivityIdIrp @ 0x1400A7F10
 * Callers:
 *     IoReuseIrp @ 0x1400A7F70 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011BF14 (IoMakeAssociatedIrpPriv.c)
 *     IopInitActivityIdIrp @ 0x1402939B8 (IopInitActivityIdIrp.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400A7E50 (IopAllocateIrpExtension.c)
 *     EtwActivityIdControl @ 0x14010AB90 (EtwActivityIdControl.c)
 *     IopFreeIrpExtension @ 0x14011BE78 (IopFreeIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  NTSTATUS v4; // ebx
  _WORD *IrpExtension; // rax
  __int64 v6; // r8

  v4 = 0;
  IrpExtension = IopAllocateIrpExtension(a1, 0);
  if ( !IrpExtension )
    return 3221225626LL;
  if ( a2 )
  {
    *(_OWORD *)(IrpExtension + 12) = *a2;
  }
  else
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
      v4 = EtwActivityIdControl(1u, (LPGUID)(IrpExtension + 12));
    else
      v4 = -1073741637;
    if ( v4 < 0 )
    {
      LOBYTE(v6) = 1;
      IopFreeIrpExtension(a1, 0LL, v6);
    }
  }
  return (unsigned int)v4;
}
