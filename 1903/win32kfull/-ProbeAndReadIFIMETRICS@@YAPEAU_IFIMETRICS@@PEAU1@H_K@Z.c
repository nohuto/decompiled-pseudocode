/*
 * XREFs of ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02A26C8
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02A4B90 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C02A2108 (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 */

struct _IFIMETRICS *__fastcall ProbeAndReadIFIMETRICS(struct _IFIMETRICS *Src, int a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  size_t cjThis; // rbx
  char *v8; // rcx
  struct _IFIMETRICS *v9; // rax
  struct _IFIMETRICS *v10; // rdi

  if ( a3 < 0xC0 )
    return 0LL;
  if ( a2 )
  {
    v6 = (unsigned __int8)Src & 3;
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v6 = (unsigned __int8)Src & 3;
  }
  cjThis = Src->cjThis;
  if ( a2 && (_DWORD)cjThis )
  {
    if ( v6 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)Src + cjThis;
    if ( (unsigned __int64)Src + cjThis > MmUserProbeAddress || v8 < (char *)Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (unsigned int)cjThis < 0xC0 )
    return 0LL;
  if ( cjThis > a3 )
    return 0LL;
  if ( (unsigned int)cjThis > 0x2710000 )
    return 0LL;
  v9 = (struct _IFIMETRICS *)PALLOCMEM2((unsigned int)cjThis, 1886221639LL, 1);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  memmove(v9, Src, cjThis);
  if ( !IsValidIFIMETRICS(v10, cjThis) )
  {
    Win32FreePool(v10);
    return 0LL;
  }
  return v10;
}
