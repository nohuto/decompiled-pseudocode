/*
 * XREFs of RtlCheckRegistryKey @ 0x180003260
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180002AB0 (RtlCheckPortableOperatingSystem.c)
 * Callees:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall RtlCheckRegistryKey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  result = sub_180003D40(a1, a2, 0LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x40000000) == 0 )
      ZwClose(v4);
    return 0LL;
  }
  return result;
}
