/*
 * XREFs of DbgkForwardException @ 0x1406D7B7C
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeCopyExceptionRecord @ 0x14013B9E4 (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsCaptureExceptionPort @ 0x1405F8D1C (PsCaptureExceptionPort.c)
 *     PsSetProcessFaultInformation @ 0x1406E3040 (PsSetProcessFaultInformation.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140811EAC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  void *v8; // rbx
  char v9; // r14
  __int64 v11; // r8
  int v12; // esi
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[17]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( a3 )
  {
    v14 = 1LL;
    PsSetProcessFaultInformation(KeGetCurrentThread()->ApcState.Process, &v14);
  }
  DWORD2(v15[2]) = 0;
  *(_QWORD *)&v15[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      v8 = 0LL;
    else
      v8 = (void *)Process[1].ActiveProcessors.Bitmap[6];
    v9 = 0;
  }
  else
  {
    v8 = PsCaptureExceptionPort((__int64)CurrentThread->ApcState.Process);
    DWORD1(v15[0]) = 7;
    v9 = 1;
  }
  if ( !v8 && a2 )
    return 0;
  KeCopyExceptionRecord(&v15[3], a1);
  DWORD2(v15[12]) = a3 == 0;
  if ( v9 )
  {
    if ( v8 )
    {
      LOBYTE(v11) = a2;
      v12 = DbgkpSendApiMessageLpc(v15, v8, v11);
      ObfDereferenceObject(v8);
    }
    else
    {
      v12 = 0;
      HIDWORD(v15[2]) = -2147418111;
    }
  }
  else
  {
    v12 = DbgkpSendApiMessage(Process);
  }
  if ( v12 < 0 )
    return 0;
  v13 = HIDWORD(v15[2]);
  if ( HIDWORD(v15[2]) == -2147418111 )
  {
    if ( a2 )
      return 0;
    v13 = DbgkpSendErrorMessage(a1, 2LL, v15);
  }
  return v13 >= 0;
}
