/*
 * XREFs of sub_18002A2F4 @ 0x18002A2F4
 * Callers:
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800D02E4 @ 0x1800D02E4 (sub_1800D02E4.c)
 */

struct _PEB *__fastcall sub_18002A2F4(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdi
  struct _PEB *result; // rax
  char *v9; // rcx

  v4 = 0LL;
  v5 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v6 = 2147353476LL;
  v7 = 2147353477LL;
  if ( *(_BYTE *)v6 )
  {
    v9 = (unsigned int)RtlGetCurrentServiceSessionId()
       ? (char *)NtCurrentPeb()->HotpatchInformation + 555
       : (char *)2147353477;
    if ( (*v9 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v5 = (__int64)result->HotpatchInformation + 554;
  }
  if ( *(_BYTE *)v5 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v7 = (__int64)result->HotpatchInformation + 555;
      }
      if ( (*(_BYTE *)v7 & 0x20) != 0 )
      {
LABEL_18:
        if ( a1 )
          v4 = *(_QWORD *)(a1 + 48);
        return (struct _PEB *)sub_1800D02E4(
                                *(_QWORD *)(a2 + 48),
                                v4,
                                *(unsigned int *)(a2 + 268),
                                *(unsigned __int16 *)(a2 + 72),
                                *(_QWORD *)(a2 + 80));
      }
    }
  }
  return result;
}
