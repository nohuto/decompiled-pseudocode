/*
 * XREFs of SepCheckCapabilities @ 0x1406B44E8
 * Callers:
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AEBEC (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x1400DCB60 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     SepIsLpacCapabilitySid @ 0x1406B4654 (SepIsLpacCapabilitySid.c)
 */

__int64 __fastcall SepCheckCapabilities(PACCESS_TOKEN Token, unsigned int a2, __int64 a3, __int64 a4, char *a5)
{
  PSID *v5; // rdi
  PACCESS_TOKEN v7; // r13
  NTSTATUS InformationToken; // esi
  NTSTATUS v9; // eax
  _DWORD *v10; // r15
  char v11; // bl
  int v12; // r12d
  PSID v13; // rax
  NTSTATUS v15; // eax
  PSID v16; // rbx
  PULONG v17; // rbx
  PULONG v18; // rax
  char v19; // r12
  int TokenInformation; // [rsp+20h] [rbp-20h] BYREF
  _BYTE TokenInformation_4[12]; // [rsp+24h] [rbp-1Ch] BYREF
  PVOID v22; // [rsp+30h] [rbp-10h] BYREF
  PSID v23; // [rsp+38h] [rbp-8h]
  char v26; // [rsp+98h] [rbp+58h]

  v5 = 0LL;
  TokenInformation = 0;
  memset(TokenInformation_4, 0, sizeof(TokenInformation_4));
  v7 = Token;
  v22 = 0LL;
  v26 = 1;
  *a5 = 0;
  InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)&TokenInformation);
  if ( InformationToken >= 0 )
  {
    if ( TokenInformation )
    {
      v9 = SeQueryInformationToken(v7, TokenCapabilities, (PVOID *)&TokenInformation_4[4]);
      v10 = *(_DWORD **)&TokenInformation_4[4];
      InformationToken = v9;
      if ( v9 >= 0 )
      {
        InformationToken = SeQueryInformationToken(v7, TokenIsLessPrivilegedAppContainer, (PVOID *)TokenInformation_4);
        if ( InformationToken >= 0 )
        {
          TokenInformation = 0;
          v11 = 1;
          if ( a2 )
          {
            while ( 1 )
            {
              v11 = 0;
              if ( !*(_DWORD *)TokenInformation_4 && (unsigned __int8)SepIsLpacCapabilitySid(*(PSID *)a3) )
                goto LABEL_8;
              v12 = 0;
              *(_DWORD *)&TokenInformation_4[4] = *v10;
              if ( *(_DWORD *)&TokenInformation_4[4] )
                break;
LABEL_26:
              if ( *(_BYTE *)(*(_QWORD *)a3 + 1LL) != 9 || *RtlSubAuthoritySid(*(PSID *)a3, 0) != 3 )
                goto LABEL_18;
              if ( !v5 )
              {
                v15 = SeQueryInformationToken(v7, TokenAppContainerSid, &v22);
                v5 = (PSID *)v22;
                InformationToken = v15;
                if ( v15 < 0 )
                  goto LABEL_19;
              }
              v16 = *v5;
              if ( *RtlSubAuthorityCountSid(*v5) >= 8u
                && (v17 = RtlSubAuthoritySid(v16, 1u),
                    v18 = RtlSubAuthoritySid(*(PSID *)a3, 1u),
                    RtlCompareMemory(v18, v17, 0x1CuLL) == 28) )
              {
                v19 = v26;
              }
              else
              {
                v19 = 0;
                v26 = 0;
              }
              v11 = v19;
              if ( !v19 )
                goto LABEL_18;
LABEL_9:
              a3 += 16LL;
              if ( ++TokenInformation >= a2 )
                goto LABEL_18;
              v7 = Token;
            }
            v13 = *(PSID *)a3;
            v23 = *(PSID *)a3;
            while ( !RtlEqualSid(*(PSID *)&v10[4 * v12 + 2], v13) || v10[4 * v12 + 4] != *(_DWORD *)(a3 + 8) )
            {
              if ( (unsigned int)++v12 >= *(_DWORD *)&TokenInformation_4[4] )
              {
                v7 = Token;
                goto LABEL_26;
              }
              v13 = v23;
            }
LABEL_8:
            v11 = 1;
            goto LABEL_9;
          }
LABEL_18:
          *a5 = v11;
        }
      }
LABEL_19:
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
    else
    {
      *a5 = 1;
    }
  }
  return (unsigned int)InformationToken;
}
