/*
 * XREFs of sub_180093FE0 @ 0x180093FE0
 * Callers:
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 *     sub_180094030 @ 0x180094030 (sub_180094030.c)
 *     sub_180094088 @ 0x180094088 (sub_180094088.c)
 * Callees:
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 */

void __fastcall sub_180093FE0(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( (unsigned __int16)sub_180096660() == 0xFFFF && (*(_BYTE *)(a2 + 24) & 0x20) != 0 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}
