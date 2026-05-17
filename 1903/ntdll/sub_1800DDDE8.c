/*
 * XREFs of sub_1800DDDE8 @ 0x1800DDDE8
 * Callers:
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

char *__fastcall sub_1800DDDE8(char *a1)
{
  char *v2; // rcx

  memmove(a1, *((const void **)&xmmword_180166308 + 1), (unsigned __int16)xmmword_180166308 - 2LL);
  v2 = &a1[2 * ((unsigned __int64)(unsigned __int16)xmmword_180166308 >> 1)];
  *(_OWORD *)(v2 - 2) = xmmword_18012FB80;
  *(_DWORD *)(v2 + 14) = 7471205;
  *((_WORD *)v2 + 9) = 115;
  *((_WORD *)v2 + 10) = 59;
  return v2 + 22;
}
