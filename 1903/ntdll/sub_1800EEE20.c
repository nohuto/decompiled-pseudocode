/*
 * XREFs of sub_1800EEE20 @ 0x1800EEE20
 * Callers:
 *     sub_1800D8110 @ 0x1800D8110 (sub_1800D8110.c)
 * Callees:
 *     sub_1800F3104 @ 0x1800F3104 (sub_1800F3104.c)
 */

__int64 __fastcall sub_1800EEE20(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v4; // r11

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    *(_QWORD *)a2 = a1;
    *(_DWORD *)(a2 + 8) = sub_1800F3104(*(unsigned int *)(a1 + 20));
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(v4 + 136) << 12;
    *(_QWORD *)(a2 + 24) += *(_QWORD *)(v4 + 96) << 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
