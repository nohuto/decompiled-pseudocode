/*
 * XREFs of sub_18002105C @ 0x18002105C
 * Callers:
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 * Callees:
 *     RtlInitString @ 0x180021100 (RtlInitString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007F53C @ 0x18007F53C (sub_18007F53C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sprintf_s @ 0x180097A70 (sprintf_s.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_1800CF628 @ 0x1800CF628 (sub_1800CF628.c)
 *     sub_1800CF68C @ 0x1800CF68C (sub_1800CF68C.c)
 */

struct _PEB *__fastcall sub_18002105C(__int64 a1, __int64 a2, __int64 a3, int a4)
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
  struct _PEB *v18; // r14
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
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v13 = (unsigned int)RtlGetCurrentServiceSessionId()
        ? (char *)NtCurrentPeb()->HotpatchInformation + 555
        : (char *)2147353477;
    if ( (*v13 & 0x10) != 0 )
      goto LABEL_19;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v12 = (__int64)result->HotpatchInformation + 554;
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
        v10 = (__int64)result->HotpatchInformation + 555;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
LABEL_19:
        v25 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
        RtlInitString(&DestinationString, v25);
        sub_18007F53C(a1, a2, a4, (unsigned int)&v25, (__int64)&v24);
        v14 = v25;
        if ( !v25 )
        {
          sprintf_s(Buffer, 0xCuLL, "#%u", v24);
          v14 = Buffer;
        }
        RtlInitString(&v27, v14);
        v15 = a1 + 72;
        v16 = *(unsigned __int16 *)(a1 + 72)
            + *(unsigned __int16 *)(a3 + 72)
            + 2 * (DestinationString.Length + v27.Length + 4);
        v17 = v16 + 36;
        result = (struct _PEB *)RtlAllocateHeap(
                                  NtCurrentPeb()->ProcessHeap,
                                  (unsigned int)(dword_18016542C + 1572864),
                                  v16 + 36);
        v18 = result;
        if ( result )
        {
          LODWORD(result->ProcessParameters) = 3;
          *(_WORD *)(&result->3 + 3) = 5334;
          sub_1800CF68C(v15, (char *)&result->ProcessParameters + 4, v16, &v23);
          v19 = v16 - v23;
          v20 = (__int64)&v18->ProcessParameters + v23 + 4;
          sub_1800CF68C(a3 + 72, v20, v19, &v23);
          v21 = v19 - v23;
          v22 = v23 + v20;
          sub_1800CF628(&DestinationString, v22, v21, &v23);
          sub_1800CF628(&v27, v22 + v23, v21 - v23, &v23);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
          ZwTraceEvent(*(unsigned __int8 *)v8, 1026LL, v17 - 32, v18);
          return (struct _PEB *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v18);
        }
      }
    }
  }
  return result;
}
