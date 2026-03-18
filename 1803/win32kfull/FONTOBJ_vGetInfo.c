/*
 * XREFs of FONTOBJ_vGetInfo @ 0x1C0263F70
 * Callers:
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C0284F30 (NtGdiFONTOBJ_vGetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?vGetInfo@RFONTOBJ@@QEBAXPEAU_FONTINFO@@@Z @ 0x1C02784FC (-vGetInfo@RFONTOBJ@@QEBAXPEAU_FONTINFO@@@Z.c)
 */

void __stdcall FONTOBJ_vGetInfo(FONTOBJ *pfo, ULONG cjSize, FONTINFO *pfi)
{
  unsigned int v3; // r9d
  void *v4; // r10
  FONTOBJ *v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  struct _FONTINFO Src; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  v5 = pfo;
  RFONTOBJ::vGetInfo((RFONTOBJ *)&v5, &Src);
  if ( v3 >= 0x1C )
    v3 = 28;
  memmove(v4, &Src, v3);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
}
