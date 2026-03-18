/*
 * XREFs of NtGdiQueryFonts @ 0x1C011EED0
 * Callers:
 *     <none>
 * Callees:
 *     GreQueryFonts @ 0x1C011F00C (GreQueryFonts.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtGdiQueryFonts(char *a1, unsigned int a2, union _LARGE_INTEGER *a3)
{
  unsigned int v4; // r14d
  unsigned int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rdi
  unsigned int v8; // eax
  size_t v9; // r8
  union _LARGE_INTEGER v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  v11.QuadPart = 0LL;
  if ( a2 && a1 )
  {
    if ( a2 <= 0x4E2000 )
      v7 = (struct _UNIVERSAL_FONT_ID *)AllocFreeTmpBuffer(8 * a2);
    if ( !v7 )
      v6 = -1;
  }
  if ( v6 != -1 )
  {
    v8 = GreQueryFonts(v7, v4, &v11);
    v6 = v8;
    if ( v8 != -1 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (union _LARGE_INTEGER *)MmUserProbeAddress;
      *a3 = v11;
      if ( a1 )
      {
        if ( v8 < v4 )
          v4 = v8;
        v9 = 8LL * v4;
        if ( (unsigned __int64)&a1[v9] > MmUserProbeAddress || &a1[v9] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a1, v7, v9);
      }
    }
  }
  if ( v7 )
    FreeTmpBuffer(v7);
  if ( v6 == -1 )
    EngSetLastError(8u);
  return v6;
}
