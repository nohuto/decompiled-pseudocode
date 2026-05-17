/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x180022110
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800221EC (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitAnsiString @ 0x1800221B0 (RtlInitAnsiString.c)
 *     LdrpGetDelayloadAPIInfo @ 0x1800848BC (LdrpGetDelayloadAPIInfo.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     sprintf_s @ 0x18009B1C0 (sprintf_s.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     LdrpEventAddAnsiString @ 0x1800D0E18 (LdrpEventAddAnsiString.c)
 *     LdrpEventAddUnicodeString @ 0x1800D0E7C (LdrpEventAddUnicodeString.c)
 */

struct _PEB *__fastcall LdrpLogDelayLoadTrigger(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _PEB *result; // rax
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // rdx
  __int64 v15; // r13
  unsigned int v16; // esi
  unsigned int v17; // r15d
  unsigned __int64 v18; // r14
  unsigned int v19; // esi
  __int64 v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v23; // [rsp+30h] [rbp-39h] BYREF
  int v24; // [rsp+34h] [rbp-35h] BYREF
  char *v25; // [rsp+38h] [rbp-31h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  STRING v27; // [rsp+50h] [rbp-19h] BYREF
  char Buffer[16]; // [rsp+60h] [rbp-9h] BYREF

  v8 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v13 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v13 & 0x10) != 0 )
      goto LABEL_19;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v12 = (__int64)result->SharedData + 554;
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( *(_BYTE *)v12 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v10 = (__int64)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
LABEL_19:
        v25 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
        RtlInitAnsiString(&DestinationString, v25);
        LdrpGetDelayloadAPIInfo(a1, a2, a4, (unsigned int)&v25, (__int64)&v24);
        v14 = v25;
        if ( !v25 )
        {
          sprintf_s(Buffer, 0xCuLL, "#%u", v24);
          v14 = Buffer;
        }
        RtlInitAnsiString(&v27, v14);
        v15 = a1 + 72;
        v16 = *(unsigned __int16 *)(a1 + 72)
            + *(unsigned __int16 *)(a3 + 72)
            + 2 * (DestinationString.Length + v27.Length + 4);
        v17 = v16 + 36;
        result = (struct _PEB *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v16 + 36);
        v18 = (unsigned __int64)result;
        if ( result )
        {
          LODWORD(result->ProcessParameters) = 3;
          *(_WORD *)&result->Padding0[2] = 5334;
          LdrpEventAddUnicodeString(v15, (char *)&result->ProcessParameters + 4, v16, &v23);
          v19 = v16 - v23;
          v20 = v23 + v18 + 36;
          LdrpEventAddUnicodeString(a3 + 72, v20, v19, &v23);
          v21 = v19 - v23;
          v22 = v23 + v20;
          LdrpEventAddAnsiString(&DestinationString, v22, v21, &v23);
          LdrpEventAddAnsiString(&v27, v22 + v23, v21 - v23, &v23);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v8, 1026LL, v17 - 32, v18);
          return (struct _PEB *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
        }
      }
    }
  }
  return result;
}
