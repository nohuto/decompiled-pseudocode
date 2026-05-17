/*
 * XREFs of RtlValidAcl @ 0x180040E30
 * Callers:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x1800410A0 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1800415D0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAce @ 0x1800727A0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x18007BEB0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180088390 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B1DC (RtlpAddKnownObjectAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9E10 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800EA2D0 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x1800EB29C (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800EB480 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800EB574 (RtlpValidCompoundAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r15
  _BYTE *v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  unsigned __int64 v6; // rcx
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // al
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r10
  _BYTE *v14; // rax
  unsigned __int8 v15; // al
  char result; // al

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 )
      return 0;
    if ( *v2 < 8u )
      return 0;
    v3 = (_BYTE *)(a1 + 8);
    v4 = 0;
    v5 = 1730063;
    while ( 1 )
    {
      if ( v4 >= *(unsigned __int16 *)(a1 + 4) )
        return 1;
      v6 = a1 + (unsigned __int16)*v2;
      if ( (unsigned __int64)(v3 + 4) >= v6 )
        return 0;
      v7 = (unsigned __int16 *)(v3 + 2);
      if ( (_BYTE *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
        return 0;
      v8 = *v7;
      if ( (unsigned __int64)&v3[v8] > v6 )
        return 0;
      v9 = *v3;
      if ( *v3 <= 0x14u && _bittest(&v5, v9) )
      {
        if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
          return 0;
        if ( (unsigned int)v8 < 0x10 )
          return 0;
        if ( v3[8] != 1 )
          return 0;
        v10 = v3[9];
        if ( v10 > 0xFu || v8 < 4 * (unsigned __int64)v10 + 16 )
          return 0;
      }
      else if ( v9 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(v9 - 5) <= 3u || (unsigned __int8)(v9 - 11) <= 1u || (unsigned __int8)(v9 - 15) <= 1u )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 || (unsigned int)v8 < 0xC )
          return 0;
        v11 = *((_DWORD *)v3 + 2) & 1;
        v12 = 16 * v11 + 16;
        if ( (*((_DWORD *)v3 + 2) & 2) == 0 )
          v12 = 16 * v11;
        v13 = (unsigned int)v12;
        if ( v8 < v12 + 24 )
          return 0;
        v14 = &v3[(*((_DWORD *)v3 + 2) & 2) != 0 ? 0x10 : 0];
        if ( v14[16 * v11 + 12] != 1 )
          return 0;
        v15 = v14[16 * v11 + 13];
        if ( v15 > 0xFu || v8 < v13 + 4 * ((unsigned __int64)v15 + 5) )
          return 0;
      }
      else if ( v9 == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( v9 == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v8 < 4 )
      {
        return 0;
      }
      v3 += *v7;
      ++v4;
    }
  }
  return 0;
}
