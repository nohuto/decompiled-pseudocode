/*
 * XREFs of GetTaskName @ 0x1C01C3720
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00BB038 (xxxQueryInformationThread.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall GetTaskName(__int64 a1, _WORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rsi
  const void **v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v8; // ebx
  PEPROCESS ThreadProcess; // rax
  const char *ProcessImageFileName; // rax
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v4 = a3;
  v5 = *(const void ***)(a1 + 496);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(unsigned __int16 *)v5;
    v8 = v7 + 2;
    if ( v7 + 2 >= v4 )
      v8 = v4;
    memmove(a2, v5[1], v8);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(ThreadProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( (unsigned int)v4 < 2 )
      return 2 * (unsigned int)DestinationString.Length + 2;
    v12.Buffer = a2;
    v12.MaximumLength = v4 - 2;
    if ( RtlAnsiStringToUnicodeString(&v12, &DestinationString, 0) < 0 )
    {
      *a2 = 0;
      return v6;
    }
    v8 = v12.Length + 2;
  }
  if ( v8 <= (unsigned int)v4 )
    LODWORD(v4) = v8;
  a2[((unsigned __int64)(unsigned int)v4 >> 1) - 1] = 0;
  return (unsigned int)v4;
}
