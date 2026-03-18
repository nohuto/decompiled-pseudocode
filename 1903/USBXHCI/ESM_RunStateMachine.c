/*
 * XREFs of ESM_RunStateMachine @ 0x1C004588C
 * Callers:
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 *     ESM_SmWorker @ 0x1C0045B50 (ESM_SmWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0044FB4 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_FindAndSetTargetState @ 0x1C00453A0 (ESM_FindAndSetTargetState.c)
 *     ESM_GetNextEvent @ 0x1C0045644 (ESM_GetNextEvent.c)
 */

KIRQL __fastcall ESM_RunStateMachine(char *Context, int a2, KIRQL *a3)
{
  __int64 v3; // r15
  KSPIN_LOCK *v4; // rbp
  int v5; // r12d
  unsigned int NextEvent; // edi
  KIRQL result; // al
  unsigned __int8 v11; // r8
  char v12; // r10
  char v13; // r9
  KIRQL v14; // r11
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_QWORD *)Context + 121);
  v4 = (KSPIN_LOCK *)(Context + 840);
  v5 = *((_DWORD *)Context + 244);
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      NextEvent = ESM_GetNextEvent((__int64)Context);
      if ( NextEvent == 1000 )
      {
        v17 = *((_QWORD *)Context + 120);
        Context[848] = 0;
        v18 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1632))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                v17);
        return (*(__int64 (__fastcall **)(unsigned __int64, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v18,
                 "State Machine Tag",
                 1056LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      }
      KeReleaseSpinLock(v4, *a3);
      *a3 = KeAcquireSpinLockRaiseToDpc(v4);
    }
    else
    {
      NextEvent = a2;
      a2 = 1000;
    }
    KeReleaseSpinLock(v4, *a3);
    if ( !ESM_FindAndSetTargetState((__int64)Context, NextEvent, &v19) )
      goto LABEL_26;
    if ( v19 )
    {
      v19 = 0;
      if ( NextEvent != 126
        && !(*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *((_QWORD *)Context + 126),
              0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v4);
        v11 = Context[948];
        v12 = 0;
        v13 = Context[949];
        v14 = result;
        *a3 = result;
        v15 = v11;
        if ( v11 == v13 )
          goto LABEL_28;
        while ( *(_DWORD *)&Context[4 * v15 + 884] != 126 )
        {
          v15 = (v15 + 1) & 0xF;
          if ( v15 == v13 )
            goto LABEL_15;
        }
        v12 = 1;
LABEL_15:
        if ( v15 != v13 )
        {
          while ( v15 != v11 )
          {
            v16 = v15;
            v15 = (v15 - 1) & 0xF;
            *(_DWORD *)&Context[4 * v16 + 884] = *(_DWORD *)&Context[4 * (((_BYTE)v16 - 1) & 0xF) + 884];
            v11 = Context[948];
          }
          *(_DWORD *)&Context[4 * v11 + 884] = 1000;
          result = (Context[948] + 1) & 0xF;
          Context[948] = result;
        }
        if ( !v12 )
        {
LABEL_28:
          Context[1016] = 1;
          return result;
        }
        KeReleaseSpinLock(v4, v14);
      }
    }
    if ( ((*(_DWORD *)(*(_QWORD *)(v3
                                 + 8LL
                                 * (unsigned int)(*(_DWORD *)&Context[4 * *((unsigned int *)Context + 220) + 852] - v5))
                     + 16LL) & 0x10) != 0
       || Context[1018])
      && KeGetCurrentIrql() )
    {
      break;
    }
    a2 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState((unsigned int *)Context);
    if ( a2 == 1003 )
      goto LABEL_30;
LABEL_26:
    *a3 = KeAcquireSpinLockRaiseToDpc(v4);
  }
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
LABEL_30:
  result = KeAcquireSpinLockRaiseToDpc(v4);
  *a3 = result;
  return result;
}
