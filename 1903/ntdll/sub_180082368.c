/*
 * XREFs of sub_180082368 @ 0x180082368
 * Callers:
 *     sub_1800820B0 @ 0x1800820B0 (sub_1800820B0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

struct _PEB *__fastcall sub_180082368(const void **a1, struct _RTL_USER_PROCESS_PARAMETERS *a2, void *a3, void *a4)
{
  struct _PEB *result; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // rdi

  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  v9 = 2147353476LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v10 = (__int64)result->HotpatchInformation + 554;
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( *(_BYTE *)v10 )
  {
    v11 = *(unsigned __int16 *)a1 + 64;
    result = (struct _PEB *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18016542C + 1572864, v11);
    v12 = (__int64)result;
    if ( result )
    {
      result->ProcessParameters = a2;
      result->SubSystemData = a3;
      *(_WORD *)(&result->3 + 3) = 5152;
      result->ProcessHeap = a4;
      memmove(&result->FastPebLock, a1[1], *(unsigned __int16 *)a1);
      *(_WORD *)(v12 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 56) = 0;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      ZwTraceEvent(*(unsigned __int8 *)v9, 1026LL, v11 - 32, v12);
      return (struct _PEB *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    }
  }
  return result;
}
