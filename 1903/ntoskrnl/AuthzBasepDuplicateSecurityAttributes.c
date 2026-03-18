/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x14000A420
 * Callers:
 *     SepGetAnonymousToken @ 0x140087A4C (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140092040 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14031E9AC (SepValidateAndCopyGlobalEntry.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x1408E2640 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14000A3B0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14000A730 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140084E98 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1403466CC (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // r15
  unsigned int v4; // r14d
  char v5; // bp
  POOL_TYPE v7; // ecx
  char *PoolWithTag; // rax
  char *v9; // rsi
  unsigned int v10; // eax
  unsigned __int16 v11; // cx
  const void *v12; // rdx
  unsigned __int64 v13; // rbx
  char *v14; // r14
  int v15; // ecx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 *i; // rdi
  POOL_TYPE v19; // ecx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  char **v22; // rcx
  char *v23; // rax
  char v24; // di
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rdx
  char v29; // al
  __int64 *v31; // rdi
  char *SecurityAttributeValue; // rax
  char *v33; // rbx
  char **v34; // rcx
  char *v35; // rax
  __int64 *v36; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // rbp
  void *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // r9
  __int64 *v42; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rbp
  __int64 v45; // r9
  __int64 *v46; // [rsp+60h] [rbp+8h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = 0;
  v46 = (__int64 *)(a1 + 8);
  v5 = a3;
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_26:
    v24 = 1;
    goto LABEL_27;
  }
  while ( 1 )
  {
    if ( v5 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_25;
    v7 = PagedPool;
    if ( KeGetCurrentIrql() >= 2u )
      v7 = NonPagedPoolNx;
    PoolWithTag = (char *)ExAllocatePoolWithTag(v7, *((unsigned __int16 *)v3 + 16) + 112LL, 0x74416553u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_57;
    memset(PoolWithTag, 0, 0x70uLL);
    *((_WORD *)v9 + 17) = *((_WORD *)v3 + 16);
    *((_QWORD *)v9 + 5) = v9 + 112;
    v10 = *((unsigned __int16 *)v3 + 16);
    v11 = *((_WORD *)v9 + 17);
    v12 = (const void *)v3[5];
    if ( (unsigned __int16)v10 > v11 )
      v10 = v11;
    *((_WORD *)v9 + 16) = v10;
    v13 = v10;
    memmove(v9 + 112, v12, v10);
    if ( (unsigned __int64)*((unsigned __int16 *)v9 + 16) + 2 <= *((unsigned __int16 *)v9 + 17) )
      *(_WORD *)&v9[2 * (v13 >> 1) + 112] = 0;
    v14 = v9 + 96;
    *((_QWORD *)v9 + 10) = v9 + 72;
    *((_QWORD *)v9 + 9) = v9 + 72;
    *((_QWORD *)v9 + 13) = v9 + 96;
    *((_QWORD *)v9 + 12) = v9 + 96;
    v15 = *((_DWORD *)v3 + 13);
    *((_DWORD *)v9 + 13) = v15;
    if ( v5 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
      *((_DWORD *)v9 + 13) = v15 & 0xFFFFFF7E | 1;
    *((_WORD *)v9 + 24) = *((_WORD *)v3 + 24);
    if ( (*((_DWORD *)v9 + 14) & 2) == 0 )
    {
      v16 = *(_QWORD **)(a2 + 40);
      v17 = v9 + 16;
      if ( *v16 != a2 + 32 )
LABEL_56:
        __fastfail(3u);
      *v17 = a2 + 32;
      *((_QWORD *)v9 + 3) = v16;
      *v16 = v17;
      *(_QWORD *)(a2 + 40) = v17;
      *((_DWORD *)v9 + 14) |= 2u;
      ++*(_DWORD *)(a2 + 24);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_15:
    for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
    {
      v19 = PagedPool;
      if ( KeGetCurrentIrql() >= 2u )
        v19 = NonPagedPoolNx;
      v20 = ExAllocatePoolWithTag(v19, 0x40uLL, 0x74416553u);
      v21 = v20;
      if ( !v20 )
        goto LABEL_57;
      memset(v20, 0, 0x40uLL);
      v21[5] = i[5];
      if ( (v21[4] & 2) == 0 )
      {
        v22 = (char **)*((_QWORD *)v9 + 13);
        v23 = (char *)(v21 + 2);
        if ( *v22 != v14 )
          goto LABEL_56;
        *(_QWORD *)v23 = v14;
        v21[3] = v22;
        *v22 = v23;
        *((_QWORD *)v9 + 13) = v23;
        *((_DWORD *)v21 + 8) |= 2u;
        ++*((_DWORD *)v9 + 22);
      }
    }
LABEL_23:
    v5 = a3;
LABEL_24:
    v4 = 0;
LABEL_25:
    v3 = (__int64 *)*v3;
    if ( v3 == v46 )
      goto LABEL_26;
  }
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_15;
    case 3:
      v31 = (__int64 *)v3[9];
      if ( v31 == v3 + 9 )
        goto LABEL_24;
      do
      {
        SecurityAttributeValue = (char *)AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v31 + 20));
        v33 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_57;
        *((_WORD *)SecurityAttributeValue + 20) = 0;
        *((_WORD *)SecurityAttributeValue + 21) = *((_WORD *)v31 + 20);
        *((_QWORD *)SecurityAttributeValue + 6) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v31 + 5));
        if ( (*((_DWORD *)v33 + 8) & 2) == 0 )
        {
          v34 = (char **)*((_QWORD *)v9 + 13);
          v35 = v33 + 16;
          if ( *v34 != v14 )
            goto LABEL_56;
          *(_QWORD *)v35 = v14;
          *((_QWORD *)v33 + 3) = v34;
          *v34 = v35;
          *((_QWORD *)v9 + 13) = v35;
          *((_DWORD *)v33 + 8) |= 2u;
          ++*((_DWORD *)v9 + 22);
        }
        v31 = (__int64 *)*v31;
      }
      while ( v31 != v3 + 9 );
      v5 = a3;
      goto LABEL_24;
    case 4:
      v36 = (__int64 *)v3[9];
      if ( v36 == v3 + 9 )
        goto LABEL_24;
      while ( 1 )
      {
        v37 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v36 + 24));
        v38 = v37;
        if ( !v37 )
          goto LABEL_57;
        v39 = v37 + 8;
        v37[5] = v36[5];
        v40 = *((unsigned __int16 *)v36 + 24);
        *((_WORD *)v38 + 24) = v40;
        v38[7] = v38 + 8;
        memmove(v39, (const void *)v36[7], v40);
        LOBYTE(v41) = 1;
        AuthzBasepAddSecurityAttributeValueToLists(v9, v38, 0LL, v41);
        v36 = (__int64 *)*v36;
        if ( v36 == v3 + 9 )
          goto LABEL_23;
      }
    case 5:
    case 0x10:
      v42 = (__int64 *)v3[9];
      if ( v42 == v3 + 9 )
        goto LABEL_24;
      break;
    default:
      v4 = -1073741811;
      goto LABEL_58;
  }
  while ( 1 )
  {
    v43 = AuthzBasepAllocateSecurityAttributeValue(*((_DWORD *)v42 + 12));
    v44 = v43;
    if ( !v43 )
      break;
    v43[5] = v43 + 8;
    *((_DWORD *)v43 + 12) = *((_DWORD *)v42 + 12);
    memmove(v43 + 8, (const void *)v42[5], *((unsigned int *)v42 + 12));
    LOBYTE(v45) = 1;
    AuthzBasepAddSecurityAttributeValueToLists(v9, v44, 0LL, v45);
    v42 = (__int64 *)*v42;
    if ( v42 == v3 + 9 )
    {
      v5 = a3;
      goto LABEL_24;
    }
  }
LABEL_57:
  v4 = -1073741670;
LABEL_58:
  v24 = 0;
LABEL_27:
  v25 = (_QWORD *)(a2 + 32);
  while ( 1 )
  {
    v26 = (_QWORD *)*v25;
    if ( (_QWORD *)*v25 == v25 )
      break;
    v27 = v26 - 2;
    v28 = v26 - 2;
    if ( v24 )
      v29 = AuthzBasepCommitSecurityAttributeChanges(a2, v28);
    else
      v29 = AuthzBasepRollbackSecurityAttributeChanges(a2, v28);
    if ( v29 )
      ExFreePoolWithTag(v27, 0);
  }
  return v4;
}
