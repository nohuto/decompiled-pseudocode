/*
 * XREFs of MiAllowGuardFault @ 0x140115490
 * Callers:
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiAccessCheck @ 0x14012DD24 (MiAccessCheck.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1401154F0 (KeInvalidAccessAllowed.c)
 */

_BOOL8 __fastcall MiAllowGuardFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r11
  _BYTE *v2; // rax
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  v2 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) == 0 )
    goto LABEL_3;
  if ( *v2 == 1 )
    return 0LL;
  if ( (a1 & 1) != 0 )
    v3 = *v2 == 3;
  else
LABEL_3:
    v3 = (unsigned __int8)KeInvalidAccessAllowed(a1) == 1;
  return !v3 && (CurrentThread->MiscFlags & 0x20) == 0;
}
