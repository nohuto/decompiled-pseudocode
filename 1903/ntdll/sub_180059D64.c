/*
 * XREFs of sub_180059D64 @ 0x180059D64
 * Callers:
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     sub_18005A8B0 @ 0x18005A8B0 (sub_18005A8B0.c)
 *     sub_1800EBE9C @ 0x1800EBE9C (sub_1800EBE9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180059D64(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // ecx

  v2 = a2 * a1;
  result = 0LL;
  if ( is_mul_ok(a2, a1) )
  {
    v4 = 0;
  }
  else
  {
    v2 = -1LL;
    v4 = -1073741675;
  }
  if ( v4 >= 0 )
    return v2;
  return result;
}
