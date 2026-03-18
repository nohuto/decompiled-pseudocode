/*
 * XREFs of MiInitializeWalkBounds @ 0x14013117C
 * Callers:
 *     MiGenerateRandomPte @ 0x1401310FC (MiGenerateRandomPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 1;
    switch ( *(_BYTE *)(v2 + 184) & 7 )
    {
      case 0:
        *a2 = 0LL;
        a2[1] = 0x7FFFFFFFFFFFLL;
        a2[2] = qword_14043A528;
        a2[3] = qword_14043A528 + 276840447;
        return 2;
      case 1:
        *a2 = qword_140439FB8;
        a2[1] = qword_140439FB8 + 0x7FFFFFFFFFLL;
        return v3;
      case 2:
        *a2 = qword_14043A3E8;
        v5 = qword_14043A3C8;
        v6 = qword_14043A3E8;
        break;
      case 3:
        *a2 = qword_14043A310;
        a2[1] = qword_14043A310 - 1 + (qword_14043A2F0 << 21);
        if ( !qword_14043A380 )
          return v3;
        a2[2] = qword_14043A3A0;
        a2[3] = qword_14043A3A0 - 1 + (qword_14043A380 << 21);
        return 2;
      case 4:
        *a2 = qword_14043A280;
        v5 = qword_14043A260;
        v6 = qword_14043A280;
        break;
      case 6:
        *a2 = qword_14043A1F0;
        v5 = qword_14043A1D0;
        v6 = qword_14043A1F0;
        break;
      default:
        return v3;
    }
    a2[1] = v6 - 1 + (v5 << 21);
    return v3;
  }
  *a2 = 0LL;
  a2[1] = 0xFFFFF67FFFFFFFFFuLL;
  a2[3] = -1LL;
  a2[2] = 0xFFFFF70000000000uLL;
  return 2LL;
}
