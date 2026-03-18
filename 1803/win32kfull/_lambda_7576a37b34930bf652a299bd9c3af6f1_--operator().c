/*
 * XREFs of _lambda_7576a37b34930bf652a299bd9c3af6f1_::operator() @ 0x1C013C298
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C013C7EC (-Initialize@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C01D4C80 (-Initialize@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall lambda_7576a37b34930bf652a299bd9c3af6f1_::operator()(__int64 a1, unsigned int a2)
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
