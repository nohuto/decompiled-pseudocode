/*
 * XREFs of _lambda_ad03797ec7a38125f83dc9209b66074e_::operator() @ 0x1C005DA48
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C005D8D8 (-Initialize@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C0073358 (-Initialize@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C0073684 (-Initialize@-$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C0073854 (-Initialize@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall lambda_ad03797ec7a38125f83dc9209b66074e_::operator()(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  ULONG v3; // edi
  struct _RTL_BITMAP *result; // rax
  struct _RTL_BITMAP *v5; // rbx

  v2 = 8;
  if ( a2 >= 8 )
    v2 = a2;
  v3 = v2;
  result = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPoolSession,
                                   ((unsigned int)(((unsigned __int64)v2 + 31) >> 3) & 0x1FFFFFFC) + 16,
                                   0x6F736955u);
  v5 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v3);
    RtlClearAllBits(v5);
    return v5;
  }
  return result;
}
