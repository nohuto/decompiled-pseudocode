/*
 * XREFs of RtlIsValidIndexHandle @ 0x18005B850
 * Callers:
 *     sub_18005B814 @ 0x18005B814 (sub_18005B814.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 * Callees:
 *     RtlIsValidHandle @ 0x18005B890 (RtlIsValidHandle.c)
 */

char __fastcall RtlIsValidIndexHandle(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)(a1 + 24) + (unsigned int)(a2 * *(_DWORD *)(a1 + 4));
  if ( !(unsigned __int8)RtlIsValidHandle(a1, v4) )
    return 0;
  *a3 = v4;
  return 1;
}
