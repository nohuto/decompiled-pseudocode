/*
 * XREFs of MiInitializeWalkBounds @ 0x14012A000
 * Callers:
 *     MiGenerateRandomPte @ 0x140129F80 (MiGenerateRandomPte.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140075C50 (MiHyperSpaceSize.c)
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( (*(_WORD *)a1 & 0x800) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = 1;
    switch ( *(_BYTE *)(v3 + 184) & 7 )
    {
      case 0:
        *a2 = 0LL;
        a2[1] = 0x7FFFFFFFFFFFLL;
        a2[2] = qword_140465ED8;
        v5 = MiHyperSpaceSize();
        v4 = 2;
        *(_QWORD *)(v6 + 24) = v5 + qword_140465ED8 - 1;
        return v4;
      case 1:
        *a2 = qword_1404659D0;
        a2[1] = qword_1404659D0 + 0x7FFFFFFFFFLL;
        return v4;
      case 2:
        *a2 = qword_140465D98;
        v8 = qword_140465D78;
        v9 = qword_140465D98;
        break;
      case 3:
        *a2 = qword_140465D50;
        v8 = qword_140465D30;
        v9 = qword_140465D50;
        break;
      case 4:
        *a2 = qword_140465CC0;
        v8 = qword_140465CA0;
        v9 = qword_140465CC0;
        break;
      case 6:
        *a2 = qword_140465C30;
        v8 = qword_140465C10;
        v9 = qword_140465C30;
        break;
      default:
        return v4;
    }
    a2[1] = v9 - 1 + (v8 << 21);
    return v4;
  }
  *a2 = 0LL;
  a2[1] = 0xFFFFF67FFFFFFFFFuLL;
  a2[3] = -1LL;
  a2[2] = 0xFFFFF70000000000uLL;
  return 2LL;
}
