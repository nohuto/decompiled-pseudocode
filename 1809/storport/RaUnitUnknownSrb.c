/*
 * XREFs of RaUnitUnknownSrb @ 0x1C0075454
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitUnknownSrb(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  bool v3; // zf

  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v3 = BYTE2(SecurityContext->SecurityQos) == 40;
  BYTE3(SecurityContext->SecurityQos) = 48;
  if ( v3 )
    SecurityContext[1].FullCreateOptions = -1073741637;
  else
    SecurityContext[2].DesiredAccess = -1073741637;
  return RaidCompleteRequestEx(a2, 0, 0xC00000BB);
}
