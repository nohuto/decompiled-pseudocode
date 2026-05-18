/*
 * XREFs of sub_18011DFFC @ 0x18011DFFC
 * Callers:
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 *     _Cnd_init_in_situ @ 0x18012752C (_Cnd_init_in_situ.c)
 */

_QWORD *__fastcall sub_18011DFFC(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)operator new(0xE8uLL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xE8uLL);
    Mtx_init_in_situ((_Mtx_t)v3, 2);
    Cnd_init_in_situ((_Cnd_t)(v3 + 80));
    Cnd_init_in_situ((_Cnd_t)(v3 + 152));
    *((_DWORD *)v3 + 56) = 0;
    v3[228] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
