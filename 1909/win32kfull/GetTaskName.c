/*
 * XREFs of GetTaskName @ 0x1C01D6880
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000C908 (xxxQueryInformationThread.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall GetTaskName(__int64 a1, _WORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  const void **v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v8; // ebx
  PEPROCESS ThreadProcess; // rax
  const char *ProcessImageFileName; // rax
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v5 = *(const void ***)(a1 + 488);
  v6 = 0;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  if ( v5 )
  {
    v7 = *(unsigned __int16 *)v5;
    v8 = v7 + 2;
    if ( v7 + 2 >= v3 )
      v8 = v3;
    memmove(a2, v5[1], v8);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(ThreadProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( (unsigned int)v3 < 2 )
      return 2 * (unsigned int)DestinationString.Length + 2;
    v12.Buffer = a2;
    v12.MaximumLength = v3 - 2;
    if ( RtlAnsiStringToUnicodeString(&v12, &DestinationString, 0) < 0 )
    {
      *a2 = 0;
      return v6;
    }
    v8 = v12.Length + 2;
  }
  if ( v8 <= (unsigned int)v3 )
    LODWORD(v3) = v8;
  a2[((unsigned __int64)(unsigned int)v3 >> 1) - 1] = 0;
  return (unsigned int)v3;
}
