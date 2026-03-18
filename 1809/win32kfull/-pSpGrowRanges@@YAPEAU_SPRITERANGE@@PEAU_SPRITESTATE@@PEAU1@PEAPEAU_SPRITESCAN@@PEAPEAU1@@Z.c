/*
 * XREFs of ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C0095768
 * Callers:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C0097204 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

struct _SPRITERANGE *__fastcall pSpGrowRanges(
        struct _SPRITESTATE *a1,
        struct _SPRITERANGE *a2,
        struct _SPRITESCAN **a3,
        struct _SPRITERANGE **a4)
{
  __int64 v4; // rax
  __int64 v7; // rbp
  char *v9; // rsi
  char *v10; // r14
  void *v11; // rax
  _DWORD *v12; // rdx
  void *v13; // rdi
  struct _SPRITERANGE *result; // rax
  int v15; // eax
  int v16; // eax

  v4 = *((_QWORD *)a1 + 17);
  v7 = *((_QWORD *)a1 + 18) - v4 + 360;
  v9 = (char *)a2 - v4;
  v10 = (char *)*a3 - v4;
  v11 = PALLOCMEM2((unsigned int)(*((_DWORD *)a1 + 36) - v4 + 360), 1919972167LL, 0);
  v12 = (_DWORD *)*((_QWORD *)a1 + 17);
  v13 = v11;
  if ( v11 )
  {
    memmove(v11, v12, (size_t)v9);
    Win32FreePool(*((_QWORD *)a1 + 17));
    *((_QWORD *)a1 + 17) = v13;
    *a3 = (struct _SPRITESCAN *)&v10[(_QWORD)v13];
    *((_QWORD *)a1 + 18) = (char *)v13 + v7;
    *a4 = (struct _SPRITERANGE *)((char *)v13 + v7 - 56);
    return (struct _SPRITERANGE *)&v9[(_QWORD)v13];
  }
  else
  {
    *v12 = *((_DWORD *)a1 + 11);
    v15 = *((_DWORD *)a1 + 13);
    *((_QWORD *)v12 + 2) = 0LL;
    v12[1] = v15;
    *((_QWORD *)v12 + 1) = 40LL;
    v12[6] = *((_DWORD *)a1 + 10);
    v16 = *((_DWORD *)a1 + 12);
    *((_QWORD *)v12 + 4) = 0LL;
    v12[7] = v16;
    *((_QWORD *)a1 + 18) = v12 + 10;
    result = 0LL;
    *((_QWORD *)a1 + 17) = v12;
  }
  return result;
}
