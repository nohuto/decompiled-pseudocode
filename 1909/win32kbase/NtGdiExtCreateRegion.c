/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C0039C30
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     AllocFreeTmpBuffer @ 0x1C0022C80 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0039D50 (FreeTmpBuffer.c)
 *     ?ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z @ 0x1C0039DE0 (-ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(struct _XFORML *a1, size_t Size, char *Src)
{
  size_t v4; // r14
  __int64 Region; // rbx
  struct _RECTL *v7; // rdi
  int v8; // eax
  _XFORML v10; // [rsp+40h] [rbp-48h] BYREF

  v4 = (unsigned int)Size;
  memset(&v10, 0, sizeof(v10));
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
