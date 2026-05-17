/*
 * XREFs of sub_18007CF10 @ 0x18007CF10
 * Callers:
 *     sub_18007CE3C @ 0x18007CE3C (sub_18007CE3C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18007CF10(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= 4 * (unsigned int)(unsigned __int8)a1[1] + 8 && RtlValidSid(a1);
}
