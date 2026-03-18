/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C0043D50
 * Callers:
 *     <none>
 * Callees:
 *     AllocFreeTmpBuffer @ 0x1C001F470 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0043E70 (FreeTmpBuffer.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ProbeAndConvertXFORM @ 0x1C0044270 (ProbeAndConvertXFORM.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(__int64 a1, unsigned int a2, char *a3)
{
  size_t v4; // rsi
  __int64 Region; // rbx
  void *v7; // rdi
  int v8; // eax
  _BYTE *v9; // r14
  _BYTE v11[24]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a2;
  Region = 0LL;
  if ( a2 - 32 <= 0x270FFE0 )
  {
    v7 = (void *)AllocFreeTmpBuffer(a2);
    if ( v7 )
    {
      v8 = 1;
      if ( a1 )
        v8 = ProbeAndConvertXFORM(a1, v11);
      v9 = v11;
      if ( !a1 )
        v9 = 0LL;
      if ( v8 )
      {
        if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v7, a3, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = GreExtCreateRegion(v9, (unsigned int)v4, v7);
      FreeTmpBuffer(v7);
    }
  }
  return Region;
}
