/*
 * XREFs of _HamSetCommitProperties@20 @ 0x10012FE0
 * Callers:
 *     <none>
 * Callees:
 *     __aulldiv @ 0x1000D0E0 (__aulldiv.c)
 *     ?RtlULongLongMult@@YGJ_K0PA_K@Z @ 0x10012171 (-RtlULongLongMult@@YGJ_K0PA_K@Z.c)
 */

int __userpurge HamSetCommitProperties@<eax>(
        unsigned __int64 *a1@<esi>,
        _DWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // ecx
  int v5; // edi
  int v6; // edx
  unsigned __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 *v10; // [esp-4h] [ebp-14h]
  unsigned __int64 v11; // [esp+8h] [ebp-8h] BYREF

  v4 = HIDWORD(a3);
  if ( !a3 )
    return -1073741584;
  v6 = a4;
  if ( !a4 )
    return -1073741583;
  if ( a3 <= a4 )
  {
    if ( (HIDWORD(a3) & (unsigned int)a3) == 0xFFFFFFFF )
    {
      a2[82] = -1;
      a2[83] = -1;
      a2[84] = -1;
      a2[85] = -1;
      v5 = 0;
      a2[72] = 0;
      a2[73] = 0;
    }
    else
    {
      v5 = 0;
      if ( RtlULongLongMult((int)&v11, a3, 0x5AuLL, a1) < 0 )
        return -1073741584;
      *((_QWORD *)a2 + 42) = v11 / 0x64;
      RtlULongLongMult((int)&v11, a3, 0x32uLL, v10);
      v7 = v11 / 0x64;
      v4 = HIDWORD(a3);
      *((_QWORD *)a2 + 41) = v11 / 0x64;
      *((_QWORD *)a2 + 36) = v7;
      v6 = a4;
    }
    a2[88] = v6;
    a2[89] = HIDWORD(a4);
    a2[86] = a3;
    a2[87] = v4;
    a2[74] |= 4u;
    v8 = a2[81];
    a2[80] |= 0xFu;
    a2[81] = v8;
    return v5;
  }
  return -1073741776;
}
