/*
 * XREFs of memset @ 0x1C0003A40
 * Callers:
 *     QueryFeatureOverride @ 0x1C0003398 (QueryFeatureOverride.c)
 *     CiThreadCreate @ 0x1C000AE70 (CiThreadCreate.c)
 *     CiProcessCreate @ 0x1C000B420 (CiProcessCreate.c)
 *     WppTraceCallback @ 0x1C000C520 (WppTraceCallback.c)
 *     CsInitialize @ 0x1C000D0B0 (CsInitialize.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D610 (CiConfigInitializeFromRegistry.c)
 *     CiSystemInitialize @ 0x1C000DE90 (CiSystemInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
