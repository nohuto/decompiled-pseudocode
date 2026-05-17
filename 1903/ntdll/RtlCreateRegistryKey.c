/*
 * XREFs of RtlCreateRegistryKey @ 0x1800EB2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall RtlCreateRegistryKey(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  result = sub_180003D40(a1, a2, 1, &v4);
  if ( (int)result >= 0 )
  {
    if ( (a1 & 0x40000000) == 0 )
      ZwClose();
    return 0LL;
  }
  return result;
}
