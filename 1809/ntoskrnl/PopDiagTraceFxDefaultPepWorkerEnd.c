/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x1401005A4
 * Callers:
 *     PopPepWork @ 0x1400FF084 (PopPepWork.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v10; // rdi
  ULONG64 v11; // r8
  ULONG cData; // r9d
  ULONG64 v13; // r8
  ULONG v14; // r9d
  char v15; // al
  REGHANDLE v16; // rdi
  REGHANDLE v17; // rbx
  const GUID *ActivityId; // [rsp+28h] [rbp-81h]
  const GUID *RelatedActivityId; // [rsp+30h] [rbp-79h]
  char v21; // [rsp+48h] [rbp-61h] BYREF
  char v22; // [rsp+49h] [rbp-60h] BYREF
  char v23; // [rsp+4Ah] [rbp-5Fh] BYREF
  int v24; // [rsp+4Ch] [rbp-5Dh] BYREF
  __int64 v25; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  char *v27; // [rsp+68h] [rbp-41h]
  __int64 v28; // [rsp+70h] [rbp-39h]
  char *v29; // [rsp+78h] [rbp-31h]
  __int64 v30; // [rsp+80h] [rbp-29h]
  char *v31; // [rsp+88h] [rbp-21h]
  __int64 v32; // [rsp+90h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-11h] BYREF
  int *v34; // [rsp+B8h] [rbp+Fh]
  __int64 v35; // [rsp+C0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( a4 == 2 )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v24 = a5;
        v34 = &v24;
        v35 = 4LL;
        LOBYTE(v5) = TlgWriteEx(&pCallbackContext, &unk_14037171B, v13, v14, ActivityId, RelatedActivityId, v14, &pData);
      }
    }
  }
  else if ( a4 == 3 && pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v5 )
    {
      v24 = a5;
      v34 = &v24;
      v35 = 4LL;
      LOBYTE(v5) = TlgWriteEx(
                     &pCallbackContext,
                     &unk_1403716DD,
                     v11,
                     cData,
                     ActivityId,
                     RelatedActivityId,
                     cData,
                     &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END)
      || EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED)
      || (LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED), (_BYTE)v5) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v15 = -1;
        }
        else
        {
          v15 = a3;
          if ( a2 == 3 )
            v15 = -2;
        }
      }
      else
      {
        v15 = -3;
      }
      v21 = v15;
      v25 = 0LL;
      if ( a1 )
        v25 = *(_QWORD *)(a1 + 48);
      v22 = a4;
      UserData.Ptr = (ULONGLONG)&v25;
      v23 = a5;
      v27 = &v21;
      *(_QWORD *)&UserData.Size = 8LL;
      v29 = &v22;
      v31 = &v23;
      v28 = 1LL;
      v30 = 1LL;
      v32 = 1LL;
      LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
        LOBYTE(v5) = EtwWriteEx(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
      if ( a4 == 2 )
      {
        v16 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        LOBYTE(v5) = EtwWriteEx(
                       v16,
                       &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED,
                       0LL,
                       1u,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
      }
      if ( a4 == 3 )
      {
        v17 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( (_BYTE)v5 )
          LOBYTE(v5) = EtwWriteEx(
                         v17,
                         &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED,
                         0LL,
                         1u,
                         0LL,
                         0LL,
                         4u,
                         &UserData);
      }
    }
  }
  return (char)v5;
}
