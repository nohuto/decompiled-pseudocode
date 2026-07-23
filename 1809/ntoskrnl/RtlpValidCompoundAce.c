/*
 * XREFs of RtlpValidCompoundAce @ 0x140894760
 * Callers:
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpValidCompoundAce(__int64 a1)
{
  unsigned __int64 v1; // r8
  _BYTE *v2; // rcx
  unsigned __int8 v3; // al
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int8 v8; // cl

  if ( !a1 )
    return 0;
  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v1 )
    return 0;
  if ( (unsigned int)v1 >= 0x18
    && *(_WORD *)(a1 + 8) == 1
    && (v2 = (_BYTE *)(a1 + 12), *v2 == 1)
    && (v3 = v2[1], v3 <= 0xFu)
    && (v4 = v3, v5 = 4 * (unsigned int)v3 + 8, v6 = (unsigned int)v5, v1 >= v5 + 24)
    && (v7 = (unsigned int)(4 * v4 + 8), v2[v7] == 1)
    && (v8 = v2[v7 + 1], v8 <= 0xFu)
    && v1 >= v6 + 4 * ((unsigned __int64)v8 + 5) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
