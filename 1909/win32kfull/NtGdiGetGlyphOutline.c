/*
 * XREFs of NtGdiGetGlyphOutline @ 0x1C00ED270
 * Callers:
 *     <none>
 * Callees:
 *     GreGetGlyphOutlineInternal @ 0x1C009B008 (GreGetGlyphOutlineInternal.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        ULONG64 a4,
        size_t Size,
        char *a6,
        ULONG64 a7,
        int a8)
{
  unsigned int GlyphOutlineInternal; // r14d
  struct tagTTPOLYGONHEADER *v12; // rbx
  _OWORD *v13; // rdx
  __int64 v15[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  int v17; // [rsp+70h] [rbp-48h]

  GlyphOutlineInternal = -1;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v16 = 0uLL;
  v17 = 0;
  if ( (unsigned int)(Size - 1) <= 0x270FFFF )
    v12 = (struct tagTTPOLYGONHEADER *)AllocFreeTmpBuffer((unsigned int)Size);
  else
    v12 = 0LL;
  if ( v12 || !(_DWORD)Size )
  {
    v13 = (_OWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v13 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v15 = *v13;
    if ( v12 )
      memset(v12, 0, (unsigned int)Size);
    GlyphOutlineInternal = GreGetGlyphOutlineInternal(a1, a2, a3, (__int64)&v16, Size, v12, (struct _MAT2 *)v15, a8);
    if ( GlyphOutlineInternal != -1 )
    {
      if ( v12 )
      {
        if ( (unsigned __int64)&a6[(unsigned int)Size] > MmUserProbeAddress || &a6[(unsigned int)Size] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v12, (unsigned int)Size);
      }
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_OWORD *)a4 = v16;
      *(_DWORD *)(a4 + 16) = v17;
    }
    if ( v12 )
      FreeTmpBuffer(v12);
  }
  return GlyphOutlineInternal;
}
