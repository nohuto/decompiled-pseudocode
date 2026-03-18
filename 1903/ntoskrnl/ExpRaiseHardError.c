/*
 * XREFs of ExpRaiseHardError @ 0x14072CFA8
 * Callers:
 *     NtRaiseHardError @ 0x14072CDA0 (NtRaiseHardError.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x1401CD5F0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     PsCaptureExceptionPort @ 0x14060EE54 (PsCaptureExceptionPort.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     LpcRequestWaitReplyPortEx @ 0x1406CAB60 (LpcRequestWaitReplyPortEx.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  _KPROCESS **CurrentServerSiloGlobals; // r13
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ebx
  char v12; // dl
  _KPROCESS *Process; // r10
  int v14; // r11d
  _KPROCESS *v15; // rdi
  char v16; // si
  unsigned int v17; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  bool v21; // zf
  int v22; // eax
  int v23; // r14d
  _DWORD v27[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-2C8h]
  int v29; // [rsp+B8h] [rbp-2C0h]
  unsigned int v30; // [rsp+BCh] [rbp-2BCh]
  unsigned int v31; // [rsp+C0h] [rbp-2B8h]
  unsigned int v32; // [rsp+C4h] [rbp-2B4h]
  char v33[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0;
  *a7 = 0;
  if ( a2 > 0x4D )
    return 3221225485LL;
  v12 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v12 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v14 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v12) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[110] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    goto LABEL_13;
  }
  v15 = 0LL;
  v16 = 0;
  if ( !v14 && ((Process[1].BasePriority & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v15 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process);
    if ( v15 )
      v16 = 1;
    else
      v15 = CurrentServerSiloGlobals[111];
  }
  if ( v15
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v21 = (Teb[5808] & 0x10) == 0;
    v22 = 0;
    if ( !v21 )
      v22 = -1073741823;
    v17 = a3;
    if ( v22 < 0 )
    {
      if ( v16 == 1 )
        ObfDereferenceObject(v15);
      v15 = 0LL;
    }
  }
  else
  {
    v17 = a3;
  }
  if ( !v15 )
  {
LABEL_13:
    *a7 = 0;
    return 0LL;
  }
  v27[0] = 7340104;
  v27[1] = 9;
  v27[10] = a1 & 0xEFFFFFFF;
  v29 = a6;
  v32 = v17;
  v31 = a2;
  if ( a4 )
    memmove(v33, a4, 8LL * a2);
  v28 = MEMORY[0xFFFFF78000000014];
  v23 = LpcRequestWaitReplyPortEx((int)v15, (int)v27, (__int64)v27);
  if ( v16 == 1 )
    ObfDereferenceObject(v15);
  if ( v23 >= 0 )
  {
    if ( v30 <= 0xA )
      v11 = v30;
    *a7 = v11;
  }
  return (unsigned int)v23;
}
