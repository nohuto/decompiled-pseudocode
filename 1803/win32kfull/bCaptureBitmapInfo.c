/*
 * XREFs of bCaptureBitmapInfo @ 0x1C00169D0
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C0016150 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0016380 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0016580 (NtGdiCreateDIBSection.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F4440 (NtGdiCreateSessionMappedDIBSection.c)
 * Callees:
 *     GreGetBitmapSizeInternal @ 0x1C00A5C80 (GreGetBitmapSizeInternal.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall bCaptureBitmapInfo(char *Src, unsigned int a2, unsigned int a3, unsigned int **a4)
{
  __int64 v4; // rbx
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // r8d

  v4 = a3;
  if ( a3 >= 4 )
  {
    if ( Src )
    {
      if ( a3 <= 0x2710000 )
      {
        v8 = (unsigned int *)AllocThreadBufferWithTag(a3, 1886221383LL, 0LL);
        *a4 = v8;
        if ( v8 )
        {
          if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v9 = *a4;
          v10 = **a4;
          if ( v10 >= 0x28 && (unsigned int)v4 >= v10 && (_DWORD)v4 == (unsigned int)GreGetBitmapSizeInternal(*a4, a2) )
            return 1LL;
          FreeThreadBufferWithTag(v9);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
