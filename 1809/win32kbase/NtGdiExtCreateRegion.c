/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C005E3B0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreateRegion @ 0x1C001A670 (GreExtCreateRegion.c)
 *     AllocFreeTmpBuffer @ 0x1C0023DB0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C005E4C0 (FreeTmpBuffer.c)
 *     ?ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z @ 0x1C005E550 (-ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(struct _XFORML *a1, size_t Size, char *Src)
{
  size_t v4; // rsi
  __int64 Region; // rbx
  struct _RECTL *v7; // rdi
  int v8; // eax
  _XFORML v10; // [rsp+40h] [rbp-48h] BYREF

  v4 = (unsigned int)Size;
  Region = 0LL;
  if ( (unsigned int)(Size - 32) <= 0x270FFE0 )
  {
    v7 = (struct _RECTL *)AllocFreeTmpBuffer(Size);
    if ( v7 )
    {
      v8 = 1;
      if ( a1 )
      {
        v8 = ProbeAndConvertXFORM(a1, &v10);
        a1 = &v10;
      }
      if ( v8 )
      {
        if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v7, Src, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = (__int64)GreExtCreateRegion((__int64)a1, v4, v7);
      FreeTmpBuffer(v7);
    }
  }
  return Region;
}
