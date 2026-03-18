/*
 * XREFs of DbgkForwardException @ 0x1406F79F8
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeCopyExceptionRecord @ 0x14013D520 (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsCaptureExceptionPort @ 0x14060EE54 (PsCaptureExceptionPort.c)
 *     PsSetProcessFaultInformation @ 0x14071E780 (PsSetProcessFaultInformation.c)
 *     DbgkpSendApiMessage @ 0x14084A5AC (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14084A694 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Process; // rsi
  void *v8; // rbx
  char v9; // r14
  __int64 v11; // r8
  int v12; // esi
  int v13; // eax
  _OWORD v14[17]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( a3 )
    PsSetProcessFaultInformation((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  DWORD2(v14[2]) = 0;
  *(_QWORD *)&v14[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      v8 = 0LL;
    else
      v8 = *(void **)(Process + 1056);
    v9 = 0;
  }
  else
  {
    v8 = PsCaptureExceptionPort((__int64)CurrentThread->ApcState.Process);
    DWORD1(v14[0]) = 7;
    v9 = 1;
  }
  if ( !v8 && a2 )
    return 0;
  KeCopyExceptionRecord(&v14[3], a1);
  DWORD2(v14[12]) = a3 == 0;
  if ( v9 )
  {
    if ( v8 )
    {
      LOBYTE(v11) = a2;
      v12 = DbgkpSendApiMessageLpc(v14, v8, v11);
      ObfDereferenceObject(v8);
    }
    else
    {
      v12 = 0;
      HIDWORD(v14[2]) = -2147418111;
    }
  }
  else
  {
    v12 = DbgkpSendApiMessage(Process);
  }
  if ( v12 < 0 )
    return 0;
  v13 = HIDWORD(v14[2]);
  if ( HIDWORD(v14[2]) == -2147418111 )
  {
    if ( a2 )
      return 0;
    v13 = DbgkpSendErrorMessage(a1, 2LL, v14);
  }
  return v13 >= 0;
}
