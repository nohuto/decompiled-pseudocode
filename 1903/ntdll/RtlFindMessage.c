/*
 * XREFs of RtlFindMessage @ 0x180068320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     sub_1800683DC @ 0x1800683DC (sub_1800683DC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v9; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  v11[0] = a2;
  v11[2] = a3;
  v11[1] = 1LL;
  v11[3] = a4;
  result = sub_180018D8C(a1, (__int64)v11, 4u, 0x40u, (unsigned __int64 *)&v9);
  if ( (int)result >= 0 )
  {
    result = LdrAccessResource_0(a1, v9, &v10, &v8);
    if ( (int)result >= 0 )
      return sub_1800683DC(v10, v8, a4, a5);
  }
  return result;
}
