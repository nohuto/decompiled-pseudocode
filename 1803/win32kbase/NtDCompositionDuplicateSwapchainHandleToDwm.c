/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0143430
 * Callers:
 *     <none>
 * Callees:
 *     CheckOrAcquireDwmStateLock @ 0x1C00120C4 (CheckOrAcquireDwmStateLock.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0066A40 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(__int64 a1, HANDLE *a2)
{
  struct _KPROCESS *v4; // rsi
  __int64 v5; // rcx
  char v6; // r15
  signed int v7; // edi
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+48h] [rbp-70h] BYREF
  struct _KPROCESS *v11; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  v6 = CheckOrAcquireDwmStateLock();
  Handle = 0LL;
  v7 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v4 = (struct _KPROCESS *)ReferenceDwmProcess();
    v11 = v4;
    if ( !v4 )
      v7 = -1073741811;
  }
  if ( v7 < 0
    || (CurrentProcess = PsGetCurrentProcess(v5),
        v7 = ObDuplicateObject(CurrentProcess, a1, v4, &Handle, 0, 0, 6, 0),
        v7 < 0) )
  {
    if ( Handle )
    {
      KeStackAttachProcess(v4, &ApcState);
      ObCloseHandle(Handle, 1);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v6 )
    GreUnlockDwmState();
  return (unsigned int)v7;
}
