/*
 * XREFs of RtlValidAcl @ 0x180014E40
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180014B60 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x180014D00 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x1800689C0 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x1800775C0 (RtlDeleteAce.c)
 *     sub_18008817C @ 0x18008817C (sub_18008817C.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008AEA0 (RtlAddProcessTrustLabelAce.c)
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
 *     RtlAddAccessFilterAce @ 0x1800E6EC0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E70D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7580 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     sub_1800E82B8 @ 0x1800E82B8 (sub_1800E82B8.c)
 *     sub_1800E849C @ 0x1800E849C (sub_1800E849C.c)
 *     sub_1800E8590 @ 0x1800E8590 (sub_1800E8590.c)
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
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r10
  _BYTE *v13; // rax
  unsigned __int8 v14; // al
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
        v15 = v3[9];
        if ( v15 > 0xFu || v8 < 4 * (unsigned __int64)v15 + 16 )
          return 0;
      }
      else if ( v9 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = sub_1800E8590(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(v9 - 5) <= 3u || (unsigned __int8)(v9 - 11) <= 1u || (unsigned __int8)(v9 - 15) <= 1u )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 || (unsigned int)v8 < 0xC )
          return 0;
        v10 = *((_DWORD *)v3 + 2) & 1;
        v11 = 16 * v10 + 16;
        if ( (*((_DWORD *)v3 + 2) & 2) == 0 )
          v11 = 16 * v10;
        v12 = (unsigned int)v11;
        if ( v8 < v11 + 24 )
          return 0;
        v13 = &v3[(*((_DWORD *)v3 + 2) & 2) != 0 ? 0x10 : 0];
        if ( v13[16 * v10 + 12] != 1 )
          return 0;
        v14 = v13[16 * v10 + 13];
        if ( v14 > 0xFu || v8 < v12 + 4 * ((unsigned __int64)v14 + 5) )
          return 0;
      }
      else if ( v9 == 18 )
      {
        result = sub_1800E849C(v3);
        if ( !result )
          return result;
      }
      else if ( v9 == 21 )
      {
        result = sub_1800E82B8(v3);
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
