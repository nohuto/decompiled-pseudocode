/*
 * XREFs of MiSetPfnKernelStack @ 0x14013DA00
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 *     MiMarkKernelStack @ 0x14017E8C0 (MiMarkKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x14013DA44 (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    result = *(unsigned int *)a1;
    if ( (result & 1) == 0 )
      return MiMarkPfnTradable(a1, 1LL, 0xFFFFFFFFFFELL, a4);
  }
  return result;
}
