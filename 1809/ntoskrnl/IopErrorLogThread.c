/*
 * XREFs of IopErrorLogThread @ 0x14070D630
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyNW @ 0x1400F5114 (RtlStringCchCopyNW.c)
 *     IopErrorLogGetEntry @ 0x14016BB78 (IopErrorLogGetEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     IopErrorLogRequeueEntry @ 0x14028653C (IopErrorLogRequeueEntry.c)
 *     IopVerifierExAllocatePool_3 @ 0x1402865E8 (IopVerifierExAllocatePool_3.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     EtwWriteErrorLogEntry @ 0x14070D930 (EtwWriteErrorLogEntry.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140718C1C (EtwQueryTraceHandleByLoggerName.c)
 *     IopErrorLogQueueRequest @ 0x140822334 (IopErrorLogQueueRequest.c)
 */

__int64 IopErrorLogThread()
{
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v2; // r14
  int v3; // eax
  unsigned __int16 Length; // di
  wchar_t *j; // rcx
  wchar_t v6; // r8
  __int16 v7; // dx
  wchar_t *Buffer; // r14
  char v9; // r12
  UNICODE_STRING *p_P; // r15
  unsigned int v11; // r8d
  int v12; // ecx
  void *v13; // rcx
  int v14; // eax
  const WCHAR *v15; // rdx
  __int16 v16; // r9
  unsigned int DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  __int16 DestinationString_4; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  UNICODE_STRING v23; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v24; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v25; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v27[256]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char P; // [rsp+5A8h] [rbp+4A0h] BYREF

  DestinationString_4 = 0;
  v21 = 0LL;
  if ( !ErrorLogSessionOpened )
  {
    RtlInitUnicodeString(&v24, L"Eventlog-System");
    if ( (int)EtwQueryTraceHandleByLoggerName(&v24, &IopErrorLogSession) < 0 )
      return IopErrorLogQueueRequest();
    ErrorLogSessionOpened = 1;
  }
  DestinationString = 0;
  result = IopErrorLogGetEntry();
  for ( i = result; result; i = result )
  {
    v2 = *(_QWORD *)(i + 24);
    v3 = *(unsigned __int16 *)(i - 6) - 48;
    v22 = v2;
    LODWORD(v20) = v3;
    if ( v2 )
    {
      RtlInitUnicodeString(&DestinationString_8, 0LL);
      if ( *(_QWORD *)(v2 + 64) )
        DestinationString_8 = *(UNICODE_STRING *)(v2 + 56);
      Length = DestinationString_8.Length;
      if ( DestinationString_8.Length )
      {
LABEL_7:
        for ( j = &DestinationString_8.Buffer[((unsigned __int64)Length >> 1) - 1];
              *j != 92 && j != DestinationString_8.Buffer;
              --j )
        {
          ;
        }
        v6 = *j;
        v7 = (__int16)j;
        if ( *j == 92 )
          v7 = (_WORD)j + 2;
        Buffer = j + 1;
        Length += LOWORD(DestinationString_8.Buffer) - v7;
        DestinationString_8.Length = Length;
        if ( v6 != 92 )
          Buffer = j;
        DestinationString_8.Buffer = Buffer;
        goto LABEL_16;
      }
      DestinationString = 0;
      if ( (int)ObQueryNameStringMode((char *)v2, (__int64)&v25, 0x110u, &DestinationString, 0) >= 0
        && DestinationString )
      {
        DestinationString_8 = v25;
        goto LABEL_44;
      }
      v15 = &word_140767740;
    }
    else
    {
      v15 = L"Application Popup";
    }
    RtlInitUnicodeString(&DestinationString_8, v15);
LABEL_44:
    Length = DestinationString_8.Length;
    if ( DestinationString_8.Length )
      goto LABEL_7;
    Buffer = DestinationString_8.Buffer;
LABEL_16:
    DestinationString = 0;
    v9 = 0;
    p_P = (UNICODE_STRING *)&P;
    v11 = 272;
    if ( !*(_QWORD *)(i + 16) )
      goto LABEL_17;
    while ( 1 )
    {
      v14 = ObQueryNameStringMode(*(char **)(i + 16), (__int64)p_P, v11, &DestinationString, 0);
      if ( v14 != -1073741820 )
        break;
      if ( v9 )
        goto LABEL_17;
      p_P = (UNICODE_STRING *)IopVerifierExAllocatePool_3(PagedPool, DestinationString);
      if ( !p_P )
        goto LABEL_17;
      v11 = DestinationString;
      v9 = 1;
    }
    v12 = 0;
    if ( v14 >= 0 && DestinationString )
    {
      v23 = *p_P;
    }
    else
    {
LABEL_17:
      RtlInitUnicodeString(&v23, &word_140767740);
      v12 = 0;
    }
    pszDest[0] = 0;
    v27[0] = 0;
    if ( Buffer )
      RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
    if ( v23.Buffer )
      RtlStringCchCopyNW(v27, 0x100uLL, v23.Buffer, (unsigned __int64)v23.Length >> 1);
    if ( v9 == 1 )
      ExFreePoolWithTag(p_P, 0);
    if ( (unsigned int)(*(_DWORD *)(i + 52) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
    {
      v16 = *(_WORD *)(i + 84);
      *(_WORD *)(i + 42) -= v16;
      DestinationString_4 = v16;
      v21 = i + 120;
    }
    if ( (int)EtwWriteErrorLogEntry(
                v12,
                (int)i + 40,
                v20,
                (int)i + 32,
                (__int64)pszDest,
                (__int64)v27,
                DestinationString_4,
                v21) < 0 )
    {
      IopErrorLogRequeueEntry((__int64 *)i);
      return IopErrorLogQueueRequest();
    }
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*(unsigned __int16 *)(i - 6));
    v13 = *(void **)(i + 16);
    if ( v13 )
      ObfDereferenceObject(v13);
    if ( v22 )
      ObfDereferenceObject(*(PVOID *)(i + 24));
    ExFreePoolWithTag((PVOID)(i - 8), 0);
    DestinationString = 0;
    result = IopErrorLogGetEntry();
  }
  return result;
}
