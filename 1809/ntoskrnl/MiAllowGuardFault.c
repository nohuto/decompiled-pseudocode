/*
 * XREFs of MiAllowGuardFault @ 0x140117D28
 * Callers:
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiAccessCheck @ 0x14009294C (MiAccessCheck.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 */

_BOOL8 __fastcall MiAllowGuardFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  _BYTE *v5; // rax
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  v5 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) == 0 )
    goto LABEL_3;
  if ( *v5 == 1 )
    return 0LL;
  if ( (a1 & 1) != 0 )
    v6 = *v5 == 3;
  else
LABEL_3:
    v6 = (unsigned __int8)KeInvalidAccessAllowed(a1, a1 & 1, CurrentThread, a4) == 1;
  return !v6 && (CurrentThread->MiscFlags & 0x20) == 0;
}
