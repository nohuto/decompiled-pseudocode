/*
 * XREFs of RtlpCompareKnownAces @ 0x14062DD60
 * Callers:
 *     RtlpIsDuplicateAce @ 0x14062DC00 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  return *((_BYTE *)&RtlBaseAceType + v2) == *((_BYTE *)&RtlBaseAceType + *a1)
      && (!*((_BYTE *)&RtlIsSystemAceType + v2) || ((a1[1] ^ a2[1]) & 0xC0) == 0)
      && RtlEqualSid(a2 + 8, a1 + 8);
}
