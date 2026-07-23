/*
 * XREFs of ExpRaiseHardError @ 0x1408D7BA0
 * Callers:
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x1408D7F20 (NtRaiseHardError.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x1401C7180 (ExpSystemErrorHandler.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PsCaptureExceptionPort @ 0x1405F8D1C (PsCaptureExceptionPort.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     LpcRequestWaitReplyPortEx @ 0x1406A5670 (LpcRequestWaitReplyPortEx.c)
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
  _KPROCESS **CurrentServerSiloGlobals; // r15
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ebx
  char v13; // dl
  _KPROCESS *Process; // r10
  int v15; // r11d
  _KPROCESS *v16; // rdi
  char v17; // si
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // r15d
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
  v13 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v13 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v15 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v13) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[110] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
LABEL_37:
    *a7 = 0;
    return 0LL;
  }
  v16 = 0LL;
  v17 = 0;
  if ( !v15 && ((Process[1].ThreadSeed[2] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v16 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process);
    if ( v16 )
      v17 = 1;
    else
      v16 = CurrentServerSiloGlobals[111];
  }
  if ( v16
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v20 = (Teb[5808] & 0x10) == 0;
    v21 = 0;
    if ( !v20 )
      v21 = -1073741823;
    v22 = a3;
    if ( v21 < 0 )
    {
      if ( v17 == 1 )
        ObfDereferenceObject(v16);
      v16 = 0LL;
    }
  }
  else
  {
    v22 = a3;
  }
  if ( !v16 )
    goto LABEL_37;
  v27[0] = 7340104;
  v27[1] = 9;
  v27[10] = a1 & 0xEFFFFFFF;
  v29 = a6;
  v32 = v22;
  v31 = a2;
  if ( a4 )
    memmove(v33, a4, 8LL * a2);
  v28 = MEMORY[0xFFFFF78000000014];
  v23 = LpcRequestWaitReplyPortEx((int)v16, (int)v27, (__int64)v27);
  if ( v17 == 1 )
    ObfDereferenceObject(v16);
  if ( v23 >= 0 )
  {
    if ( v30 <= 0xA )
      v11 = v30;
    *a7 = v11;
  }
  return (unsigned int)v23;
}
