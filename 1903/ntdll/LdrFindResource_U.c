/*
 * XREFs of LdrFindResource_U @ 0x18006F950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 v13; // rcx

  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v13 = 2147353476LL;
    sub_1800E0820(L",.", *(unsigned __int8 *)v13);
  }
  v11 = sub_180018D8C(a1, a2, a3, 0, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    sub_1800E0820(L"*,", *(unsigned __int8 *)v10);
  }
  return v11;
}
