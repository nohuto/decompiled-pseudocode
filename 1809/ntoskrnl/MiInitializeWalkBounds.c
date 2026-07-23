/*
 * XREFs of MiInitializeWalkBounds @ 0x14013126C
 * Callers:
 *     MiGenerateRandomPte @ 0x1401311EC (MiGenerateRandomPte.c)
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
        a2[2] = qword_14043B5E8;
        a2[3] = qword_14043B5E8 + 276840447;
        return 2;
      case 1:
        *a2 = qword_14043B078;
        a2[1] = qword_14043B078 + 0x7FFFFFFFFFLL;
        return v3;
      case 2:
        *a2 = qword_14043B4A8;
        v5 = qword_14043B488;
        v6 = qword_14043B4A8;
        break;
      case 3:
        *a2 = qword_14043B3D0;
        a2[1] = qword_14043B3D0 - 1 + (qword_14043B3B0 << 21);
        if ( !qword_14043B440 )
          return v3;
        a2[2] = qword_14043B460;
        a2[3] = qword_14043B460 - 1 + (qword_14043B440 << 21);
        return 2;
      case 4:
        *a2 = qword_14043B340;
        v5 = qword_14043B320;
        v6 = qword_14043B340;
        break;
      case 6:
        *a2 = qword_14043B2B0;
        v5 = qword_14043B290;
        v6 = qword_14043B2B0;
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
