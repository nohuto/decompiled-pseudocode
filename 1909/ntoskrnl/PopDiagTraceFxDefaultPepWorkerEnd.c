/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400E2E78
 * Callers:
 *     PopPepWork @ 0x1400E19A0 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v10; // rbx
  ULONG64 v11; // r8
  __int64 cData; // r9
  ULONG64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  REGHANDLE v16; // rbx
  REGHANDLE v17; // rbx
  const GUID *ActivityId; // [rsp+28h] [rbp-A1h]
  const GUID *RelatedActivityId; // [rsp+30h] [rbp-99h]
  char v21; // [rsp+48h] [rbp-81h] BYREF
  char v22; // [rsp+49h] [rbp-80h] BYREF
  char v23; // [rsp+4Ah] [rbp-7Fh] BYREF
  int v24; // [rsp+4Ch] [rbp-7Dh] BYREF
  __int64 v25; // [rsp+50h] [rbp-79h] BYREF
  __int64 v26; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-61h] BYREF
  char *v28; // [rsp+78h] [rbp-51h]
  __int64 v29; // [rsp+80h] [rbp-49h]
  char *v30; // [rsp+88h] [rbp-41h]
  __int64 v31; // [rsp+90h] [rbp-39h]
  char *v32; // [rsp+98h] [rbp-31h]
  __int64 v33; // [rsp+A0h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-21h] BYREF
  int *v35; // [rsp+C8h] [rbp-1h]
  __int64 v36; // [rsp+D0h] [rbp+7h]
  __int64 *v37; // [rsp+D8h] [rbp+Fh]
  __int64 v38; // [rsp+E0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( a4 == 2 )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v24 = a5;
        v35 = &v24;
        v36 = v14;
        LOBYTE(v5) = TlgWriteEx(&pCallbackContext, &unk_140390845, v13, v14, ActivityId, RelatedActivityId, 3u, &pData);
      }
    }
  }
  else if ( a4 == 3 && pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v5 )
    {
      v24 = a5;
      v35 = &v24;
      v37 = &v26;
      v26 = 0x1000000LL;
      v36 = cData;
      v38 = 8LL;
      LOBYTE(v5) = TlgWriteEx(
                     &pCallbackContext,
                     &unk_14039091A,
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
      v28 = &v21;
      *(_QWORD *)&UserData.Size = 8LL;
      v30 = &v22;
      v32 = &v23;
      v29 = 1LL;
      v31 = 1LL;
      v33 = 1LL;
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
