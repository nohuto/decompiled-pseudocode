/*
 * XREFs of IopErrorLogThread @ 0x140739D70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyNW @ 0x140154688 (RtlStringCchCopyNW.c)
 *     IopErrorLogGetEntry @ 0x140176AA8 (IopErrorLogGetEntry.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     IopErrorLogRequeueEntry @ 0x14029B40C (IopErrorLogRequeueEntry.c)
 *     IopVerifierExAllocatePool_3 @ 0x14029B4B8 (IopVerifierExAllocatePool_3.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14062E570 (ObQueryNameStringMode.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071853C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwWriteErrorLogEntry @ 0x14073A070 (EtwWriteErrorLogEntry.c)
 *     IopErrorLogQueueRequest @ 0x14085A90C (IopErrorLogQueueRequest.c)
 */

__int64 IopErrorLogThread()
{
  wchar_t v0; // r8
  wchar_t *v1; // rdx
  wchar_t *i; // rcx
  wchar_t *Buffer; // r14
  unsigned __int16 Length; // di
  char v5; // r12
  UNICODE_STRING *p_P; // r15
  unsigned int v7; // r8d
  int v8; // ecx
  void *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  const WCHAR *v15; // rdx
  __int16 v16; // r9
  unsigned int v17; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v25; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v27[256]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char P; // [rsp+5A8h] [rbp+4A0h] BYREF

  *(_QWORD *)&v19.Length = 0LL;
  v19.Buffer = 0LL;
  *(_QWORD *)&v22.Length = 0LL;
  v22.Buffer = 0LL;
  v18 = 0;
  v21 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( ErrorLogSessionOpened )
  {
    while ( 1 )
    {
LABEL_24:
      v17 = 0;
      result = IopErrorLogGetEntry();
      v11 = result;
      if ( !result )
        return result;
      v12 = *(_QWORD *)(result + 24);
      v13 = *(unsigned __int16 *)(result - 6) - 48;
      v23 = v12;
      LODWORD(v20) = v13;
      if ( v12 )
      {
        RtlInitUnicodeString(&v19, 0LL);
        if ( *(_QWORD *)(v12 + 64) )
          v19 = *(UNICODE_STRING *)(v12 + 56);
        Length = v19.Length;
        if ( v19.Length )
        {
LABEL_29:
          for ( i = &v19.Buffer[((unsigned __int64)Length >> 1) - 1]; *i != 92 && i != v19.Buffer; --i )
            ;
          v0 = *i;
          v1 = i;
          if ( *i == 92 )
            LOWORD(i) = (_WORD)i + 2;
          Buffer = v1 + 1;
          Length += LOWORD(v19.Buffer) - (_WORD)i;
          v19.Length = Length;
          if ( v0 != 92 )
            Buffer = v1;
          v19.Buffer = Buffer;
          goto LABEL_9;
        }
        v17 = 0;
        if ( (int)ObQueryNameStringMode((char *)v12, (__int64)&v25, 0x110u, &v17, 0) >= 0 && v17 )
        {
          v19 = v25;
          goto LABEL_44;
        }
        v15 = &word_14078F2B0;
      }
      else
      {
        v15 = L"Application Popup";
      }
      RtlInitUnicodeString(&v19, v15);
LABEL_44:
      Length = v19.Length;
      if ( v19.Length )
        goto LABEL_29;
      Buffer = v19.Buffer;
LABEL_9:
      v17 = 0;
      v5 = 0;
      p_P = (UNICODE_STRING *)&P;
      v7 = 272;
      if ( !*(_QWORD *)(v11 + 16) )
        goto LABEL_10;
      while ( 1 )
      {
        v14 = ObQueryNameStringMode(*(char **)(v11 + 16), (__int64)p_P, v7, &v17, 0);
        if ( v14 != -1073741820 )
          break;
        if ( v5 )
          goto LABEL_10;
        p_P = (UNICODE_STRING *)IopVerifierExAllocatePool_3(PagedPool, v17);
        if ( !p_P )
          goto LABEL_10;
        v7 = v17;
        v5 = 1;
      }
      v8 = 0;
      if ( v14 >= 0 && v17 )
      {
        v22 = *p_P;
      }
      else
      {
LABEL_10:
        RtlInitUnicodeString(&v22, &word_14078F2B0);
        v8 = 0;
      }
      pszDest[0] = 0;
      v27[0] = 0;
      if ( Buffer )
        RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
      if ( v22.Buffer )
        RtlStringCchCopyNW(v27, 0x100uLL, v22.Buffer, (unsigned __int64)v22.Length >> 1);
      if ( v5 == 1 )
        ExFreePoolWithTag(p_P, 0);
      if ( (unsigned int)(*(_DWORD *)(v11 + 52) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
      {
        v16 = *(_WORD *)(v11 + 84);
        *(_WORD *)(v11 + 42) -= v16;
        v18 = v16;
        v21 = v11 + 120;
      }
      if ( (int)EtwWriteErrorLogEntry(v8, (int)v11 + 40, v20, (int)v11 + 32, (__int64)pszDest, (__int64)v27, v18, v21) < 0 )
      {
        IopErrorLogRequeueEntry((__int64 *)v11);
        return IopErrorLogQueueRequest();
      }
      _InterlockedExchangeAdd(&IopErrorLogAllocation, -*(unsigned __int16 *)(v11 - 6));
      v9 = *(void **)(v11 + 16);
      if ( v9 )
        ObfDereferenceObject(v9);
      if ( v23 )
        ObfDereferenceObject(*(PVOID *)(v11 + 24));
      ExFreePoolWithTag((PVOID)(v11 - 8), 0);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"Eventlog-System");
  if ( (int)EtwQueryTraceHandleByLoggerName(&DestinationString, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    goto LABEL_24;
  }
  return IopErrorLogQueueRequest();
}
