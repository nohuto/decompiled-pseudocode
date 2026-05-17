/*
 * XREFs of sub_1800255A8 @ 0x1800255A8
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     ApiSetQueryApiSetPresence @ 0x180075030 (ApiSetQueryApiSetPresence.c)
 *     sub_180083398 @ 0x180083398 (sub_180083398.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

struct _PEB *__fastcall sub_1800255A8(int a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax
  _DWORD *HotpatchInformation; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = NtCurrentPeb();
  HotpatchInformation = result->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->HotpatchInformation + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v9 = (__int64)result->HotpatchInformation + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (struct _PEB *)sub_1800CFA48(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
