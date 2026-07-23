/*
 * XREFs of IoSetActivityIdIrp @ 0x1400DF9E0
 * Callers:
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x140107974 (IoMakeAssociatedIrpPriv.c)
 *     IopInitActivityIdIrp @ 0x14027F1D4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     IopAllocateIrpExtension @ 0x1400DFA38 (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  NTSTATUS v4; // ebx
  __int64 IrpExtension; // rax
  __int64 v6; // r8

  v4 = 0;
  IrpExtension = IopAllocateIrpExtension(a1, 0LL);
  if ( !IrpExtension )
    return 3221225626LL;
  if ( a2 )
  {
    *(_OWORD *)(IrpExtension + 24) = *a2;
  }
  else
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
      v4 = EtwActivityIdControl(1u, (LPGUID)(IrpExtension + 24));
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
