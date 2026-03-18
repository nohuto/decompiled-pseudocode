/*
 * XREFs of MiAllowGuardFault @ 0x140116B00
 * Callers:
 *     MiZeroFault @ 0x1400A9860 (MiZeroFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiAccessCheck @ 0x14012E614 (MiAccessCheck.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140116B60 (KeInvalidAccessAllowed.c)
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
