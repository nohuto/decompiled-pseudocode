/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x18002105C
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180021100 (RtlInitAnsiString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetDelayloadAPIInfo @ 0x18007FBDC (LdrpGetDelayloadAPIInfo.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     sprintf_s @ 0x180098110 (sprintf_s.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     LdrpEventAddAnsiString @ 0x1800CF6E8 (LdrpEventAddAnsiString.c)
 *     LdrpEventAddUnicodeString @ 0x1800CF74C (LdrpEventAddUnicodeString.c)
 */

int __fastcall LdrpLogDelayLoadTrigger(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _PEB *Heap; // rax
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // rdx
  __int64 v15; // r13
  unsigned int v16; // esi
  unsigned int v17; // r15d
  struct _PEB *v18; // r14
  unsigned int v19; // esi
  __int64 v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v24; // [rsp+30h] [rbp-39h] BYREF
  int v25; // [rsp+34h] [rbp-35h] BYREF
  CHAR *v26; // [rsp+38h] [rbp-31h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  _STRING v28; // [rsp+50h] [rbp-19h] BYREF
  char Buffer[16]; // [rsp+60h] [rbp-9h] BYREF

  v8 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v13 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v13 & 0x10) != 0 )
      goto LABEL_19;
  }
  LODWORD(Heap) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)Heap )
  {
    Heap = NtCurrentPeb();
    v12 = (__int64)Heap->SharedData + 554;
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( *(_BYTE *)v12 )
  {
    Heap = NtCurrentPeb();
    if ( (Heap->TracingFlags & 4) != 0 )
    {
      LODWORD(Heap) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)Heap )
      {
        Heap = NtCurrentPeb();
        v10 = (__int64)Heap->SharedData + 555;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
LABEL_19:
        v26 = (CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
        RtlInitAnsiString(&DestinationString, v26);
        LdrpGetDelayloadAPIInfo(a1, a2, a4, (unsigned int)&v26, (__int64)&v25);
        v14 = v26;
        if ( !v26 )
        {
          sprintf_s(Buffer, 0xCuLL, "#%u", v25);
          v14 = Buffer;
        }
        RtlInitAnsiString(&v28, v14);
        v15 = a1 + 72;
        v16 = *(unsigned __int16 *)(a1 + 72)
            + *(unsigned __int16 *)(a3 + 72)
            + 2 * (DestinationString.Length + v28.Length + 4);
        v17 = v16 + 36;
        Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v16 + 36);
        v18 = Heap;
        if ( Heap )
        {
          LODWORD(Heap->ProcessParameters) = 3;
          *(_WORD *)&Heap->Padding0[2] = 5334;
          LdrpEventAddUnicodeString(v15, (char *)&Heap->ProcessParameters + 4, v16, &v24);
          v19 = v16 - v24;
          v20 = (__int64)&v18->ProcessParameters + v24 + 4;
          LdrpEventAddUnicodeString(a3 + 72, v20, v19, &v24);
          v21 = v19 - v24;
          v22 = v24 + v20;
          LdrpEventAddAnsiString(&DestinationString, v22, v21, &v24);
          LdrpEventAddAnsiString(&v28, v22 + v24, v21 - v24, &v24);
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x402u, v17 - 32, v18);
          LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
      }
    }
  }
  return (int)Heap;
}
