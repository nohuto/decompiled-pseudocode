/*
 * XREFs of sub_18010E7E0 @ 0x18010E7E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18010F080 @ 0x18010F080 (sub_18010F080.c)
 */

void __fastcall sub_18010E7E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int32 v5; // edi
  __int64 v6; // rcx

  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v5 )
  {
    sub_180066BBC((volatile signed __int64 *)(a1 + 56), -v5, 0LL, a4);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      sub_18010F080(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v5);
  }
}
