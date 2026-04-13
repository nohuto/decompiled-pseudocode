/*
 * XREFs of ??_G?$basic_istream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180030AA8
 * Callers:
 *     ??_E?$basic_istream@_WU?$char_traits@_W@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x18003D3C0 (--_E-$basic_istream@_WU-$char_traits@_W@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AEF7C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

char *__fastcall std::wistream::`scalar deleting destructor'(struct std::ios_base *a1, char a2)
{
  char *v2; // rdi
  __int64 v4; // r8

  v2 = (char *)a1 - 24;
  *(_QWORD *)((char *)a1 + *(int *)(*((_QWORD *)a1 - 3) + 4LL) - 24) = &std::basic_istream<unsigned short>::`vftable';
  v4 = *(int *)(*((_QWORD *)a1 - 3) + 4LL);
  *(_DWORD *)((char *)a1 + v4 - 28) = v4 - 24;
  *(_QWORD *)a1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
