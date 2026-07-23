/*
 * XREFs of sub_18007CF10 @ 0x18007CF10
 * Callers:
 *     sub_18007CE3C @ 0x18007CE3C (sub_18007CE3C.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_18007CF10(PSID Sid, unsigned int a2)
{
  if ( a2 >= 8 && a2 >= 4 * (unsigned int)*((unsigned __int8 *)Sid + 1) + 8 )
    return RtlValidSid(Sid);
  else
    return 0;
}
