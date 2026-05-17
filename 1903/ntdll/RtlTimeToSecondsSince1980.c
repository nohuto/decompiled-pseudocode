/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x18007A160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007A2D0 @ 0x18007A2D0 (sub_18007A2D0.c)
 */

char __fastcall RtlTimeToSecondsSince1980(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v4; // r10

  LOBYTE(a3) = 23;
  v3 = sub_18007A2D0(*a1, 0xD6BF94D5E57A42BDuLL, a3) - 0x2C8DF3700LL;
  if ( HIDWORD(v3) )
    return 0;
  *v4 = v3;
  return 1;
}
