/*
 * XREFs of ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0044FB4
 * Callers:
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 *     ESM_RunStateMachine @ 0x1C004588C (ESM_RunStateMachine.c)
 *     ESM_SmWorker @ 0x1C0045B50 (ESM_SmWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0045BC0 (WPP_RECORDER_SF_qLLL.c)
 */

__int64 __fastcall ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(unsigned int *Context)
{
  __int64 v1; // r15
  __int64 v3; // rbp
  unsigned int v4; // r12d
  __int64 v5; // r14
  int v6; // eax
  _DWORD *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rdx
  _DWORD *v11; // rax
  unsigned int v12; // edi
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // r9d
  KIRQL v16; // r13
  __int64 v17; // r12
  int *v18; // rcx
  char v19; // r10
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  bool v23; // zf
  int v24; // eax
  unsigned int v25; // edi
  char v26; // cl
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v30; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+90h] [rbp+8h]

  v1 = *((_QWORD *)Context + 121);
  v3 = Context[220];
  v4 = Context[244];
  v5 = *(_QWORD *)(v1 + 8LL * (Context[v3 + 213] - v4));
  v6 = (*(__int64 (**)(void))(v5 + 8))();
  v7 = *(_DWORD **)(v5 + 24);
  v31 = v6;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = 0LL;
      if ( v7[1] == 1002 )
        goto LABEL_6;
      v9 = Context[238];
      v10 = 0LL;
      v11 = v7;
      while ( (v9 & *v11) != v9 )
      {
        v8 = (unsigned int)(v8 + 1);
        v10 = (unsigned int)v8;
        v11 = &v7[2 * v8];
        if ( v11[1] == 1002 )
          goto LABEL_6;
      }
      v22 = v7[2 * v10 + 1];
      if ( v22 == 1002 )
      {
LABEL_6:
        v31 = 1001;
        goto LABEL_7;
      }
      v3 = (unsigned int)(v3 + 1);
      Context[v3 + 213] = v22;
      v23 = Context[244] == 2000;
      Context[220] = v3;
      if ( v23 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          v8,
          v9,
          v30,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          v22);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v22;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v3;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v1 + 8LL * (v22 - v4));
      if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 || *((_BYTE *)Context + 1018) )
      {
        if ( KeGetCurrentIrql() )
          break;
      }
      v24 = (*(__int64 (__fastcall **)(unsigned int *, __int64, __int64))(v5 + 8))(Context, v10, v8);
      v7 = *(_DWORD **)(v5 + 24);
      v31 = v24;
      if ( !v7 )
        goto LABEL_7;
    }
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
    return 1003;
  }
  else
  {
LABEL_7:
    v12 = v4;
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
    while ( 1 )
    {
      LODWORD(v17) = 0;
      if ( *(_DWORD *)(v5 + 32) != 1000 )
      {
        v18 = (int *)(v5 + 32);
        do
        {
          if ( v18[1] != 1000 )
            break;
          LOBYTE(v14) = *((_BYTE *)Context + 948);
          v19 = 0;
          LOBYTE(v15) = *((_BYTE *)Context + 949);
          LOBYTE(v13) = v14;
          v20 = *v18;
          if ( (_BYTE)v14 != (_BYTE)v15 )
          {
            do
            {
              v15 = Context[(unsigned __int8)v13 + 221];
              if ( v15 == v20 )
              {
                v19 = 1;
              }
              else
              {
                v21 = (unsigned __int8)v14;
                LOBYTE(v14) = (v14 + 1) & 0xF;
                Context[v21 + 221] = v15;
              }
              LOBYTE(v15) = *((_BYTE *)Context + 949);
              LOBYTE(v13) = (v13 + 1) & 0xF;
            }
            while ( (_BYTE)v13 != (_BYTE)v15 );
          }
          v26 = v14;
          if ( (_BYTE)v14 != (_BYTE)v15 )
          {
            do
            {
              v27 = v26 & 0xF;
              v26 = (v26 + 1) & 0xF;
              Context[v27 + 221] = 1000;
            }
            while ( v26 != *((_BYTE *)Context + 949) );
          }
          *((_BYTE *)Context + 949) = v14;
          if ( v19 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v16);
            v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
          }
          v17 = (unsigned int)(v17 + 1);
          v18 = (int *)(v5 + 32 + 8 * v17);
        }
        while ( *v18 != 1000 );
      }
      if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
        break;
      v3 = (unsigned int)(v3 - 1);
      v28 = Context[v3 + 213];
      if ( Context[244] == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          v14,
          v15,
          v30,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          Context[v3 + 213]);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v28;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v3;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v1 + 8LL * (Context[v3 + 213] - v12));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v16);
    v25 = v31;
    Context[220] = v3;
  }
  return v25;
}
