/*
 * XREFs of sub_1800E5164 @ 0x1800E5164
 * Callers:
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
 * Callees:
 *     sub_180087874 @ 0x180087874 (sub_180087874.c)
 *     sub_1800E51B0 @ 0x1800E51B0 (sub_1800E51B0.c)
 */

char __fastcall sub_1800E5164(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  char v4; // r11

  v4 = 0;
  if ( (unsigned __int8)(*a1 - 5) <= 3u && (unsigned __int8)(*a2 - 5) <= 3u )
    return sub_180087874(a1, a2, a3, a4);
  if ( (unsigned __int8)(*a1 - 5) > 3u && (unsigned __int8)(*a2 - 5) > 3u )
    return sub_1800E51B0();
  return v4;
}
