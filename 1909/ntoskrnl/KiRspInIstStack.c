/*
 * XREFs of KiRspInIstStack @ 0x1402A9848
 * Callers:
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     KeQueryCurrentStackInformationEx @ 0x1400A2E20 (KeQueryCurrentStackInformationEx.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     KeInvalidAccessAllowed @ 0x140116B60 (KeInvalidAccessAllowed.c)
 *     KiMcheckFastForward @ 0x1402B6590 (KiMcheckFastForward.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiRspInIstStack(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  _BOOL8 result; // rax

  v2 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  v3 = 0x2000LL;
  if ( KiKvaShadow )
    v3 = 464LL;
  result = 1;
  if ( a2 > v2 || a2 < v2 - v3 )
  {
    if ( !KiKvaShadow )
      return 0;
    v4 = *(_QWORD *)(v2 + 8);
    if ( a2 > v4 || a2 < v4 - 8160 )
      return 0;
  }
  return result;
}
