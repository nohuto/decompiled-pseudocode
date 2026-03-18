/*
 * XREFs of ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C014C85C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C007AE84 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandlePTPTimer(CHidInput *this, char a2, int a3, void *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  v6 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(
                                     *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                                     4LL,
                                     1LL);
  if ( a2 )
  {
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000 * v6;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
    *(_QWORD *)(v4 + 1128) = a4;
  }
}
