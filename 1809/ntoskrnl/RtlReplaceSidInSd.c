/*
 * XREFs of RtlReplaceSidInSd @ 0x140895140
 * Callers:
 *     <none>
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     RtlSubAuthorityCountSid @ 0x1400DCB60 (RtlSubAuthorityCountSid.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14060ECC0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406CD310 (RtlGetGroupSecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  PSECURITY_DESCRIPTOR v4; // r13
  unsigned int v8; // r15d
  NTSTATUS result; // eax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // cl
  int v12; // ecx
  char *v13; // rsi
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  int v16; // ecx
  char *v17; // rsi
  __int64 v18; // rsi
  unsigned __int8 *v19; // rdi
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // cl
  int v23; // ecx
  unsigned int v24; // r14d
  void *v25; // r15
  __int64 v26; // rsi
  unsigned __int8 *v27; // rdi
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // cl
  int v31; // ecx
  unsigned int v32; // r14d
  void *v33; // r15
  BOOLEAN DaclPresent[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+24h] [rbp-Ch]
  PSID Owner; // [rsp+28h] [rbp-8h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+88h] [rbp+58h] BYREF

  *NumChanges = 0;
  v4 = SecurityDescriptor;
  Owner = 0LL;
  v8 = 4 * *RtlSubAuthorityCountSid(OldSid);
  v35 = v8;
  result = RtlGetOwnerSecurityDescriptor(v4, &Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    if ( Owner )
    {
      if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
      {
        v10 = *((_BYTE *)Owner + 1);
        v11 = *((_BYTE *)OldSid + 1);
        if ( v10 == v11 || v10 == v11 + 1 )
        {
          v12 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v12 )
            v12 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v12 )
          {
            v13 = (char *)Owner + 8;
            if ( !memcmp((char *)Owner + 8, (char *)OldSid + 8, v8) )
            {
              memmove(v13, (char *)NewSid + 8, v8);
              ++*NumChanges;
            }
          }
        }
      }
    }
    Owner = 0LL;
    result = RtlGetGroupSecurityDescriptor(v4, &Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      if ( Owner )
      {
        if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
        {
          v14 = *((_BYTE *)Owner + 1);
          v15 = *((_BYTE *)OldSid + 1);
          if ( v14 == v15 || v14 == v15 + 1 )
          {
            v16 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v16 )
              v16 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v16 )
            {
              v17 = (char *)Owner + 8;
              if ( !memcmp((char *)Owner + 8, (char *)OldSid + 8, v8) )
              {
                memmove(v17, (char *)NewSid + 8, v8);
                ++*NumChanges;
              }
            }
          }
        }
      }
      Owner = 0LL;
      result = RtlGetDaclSecurityDescriptor(v4, DaclPresent, (PACL *)&Owner, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( DaclPresent[0] )
        {
          if ( Owner )
          {
            v18 = *((unsigned __int16 *)Owner + 2);
            v19 = (unsigned __int8 *)Owner + 8;
            if ( *((_WORD *)Owner + 2) )
            {
              while ( *v19 > 3u )
              {
                if ( *v19 == 4 )
                {
                  v20 = (__int64)&v19[RtlLengthSid(v19 + 12) + 12];
                  goto LABEL_29;
                }
LABEL_38:
                v19 += *((unsigned __int16 *)v19 + 1);
                if ( !--v18 )
                {
                  v4 = SecurityDescriptor;
                  goto LABEL_40;
                }
              }
              v20 = (__int64)(v19 + 8);
LABEL_29:
              if ( *(_BYTE *)v20 == *(_BYTE *)OldSid )
              {
                v21 = *(_BYTE *)(v20 + 1);
                v22 = *((_BYTE *)OldSid + 1);
                if ( v21 == v22 || v21 == v22 + 1 )
                {
                  v23 = *(_DWORD *)(v20 + 2) - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v23 )
                    v23 = *(unsigned __int16 *)(v20 + 6) - *((unsigned __int16 *)OldSid + 3);
                  if ( !v23 )
                  {
                    v24 = v8;
                    v25 = (void *)(v20 + 8);
                    if ( !memcmp((const void *)(v20 + 8), (char *)OldSid + 8, v24) )
                    {
                      memmove(v25, (char *)NewSid + 8, v24);
                      ++*NumChanges;
                    }
                    v8 = v35;
                  }
                }
              }
              goto LABEL_38;
            }
          }
        }
LABEL_40:
        Owner = 0LL;
        result = RtlGetSaclSecurityDescriptor(v4, DaclPresent, (PACL *)&Owner, &OwnerDefaulted);
        if ( result >= 0 && DaclPresent[0] && Owner )
        {
          v26 = *((unsigned __int16 *)Owner + 2);
          v27 = (unsigned __int8 *)Owner + 8;
          if ( *((_WORD *)Owner + 2) )
          {
            while ( *v27 > 3u )
            {
              if ( *v27 == 4 )
              {
                v28 = (__int64)&v27[RtlLengthSid(v27 + 12) + 12];
                goto LABEL_48;
              }
LABEL_56:
              v8 = v35;
              v27 += *((unsigned __int16 *)v27 + 1);
              if ( !--v26 )
                return 0;
            }
            v28 = (__int64)(v27 + 8);
LABEL_48:
            if ( *(_BYTE *)v28 == *(_BYTE *)OldSid )
            {
              v29 = *(_BYTE *)(v28 + 1);
              v30 = *((_BYTE *)OldSid + 1);
              if ( v29 == v30 || v29 == v30 + 1 )
              {
                v31 = *(_DWORD *)(v28 + 2) - *(_DWORD *)((char *)OldSid + 2);
                if ( !v31 )
                  v31 = *(unsigned __int16 *)(v28 + 6) - *((unsigned __int16 *)OldSid + 3);
                if ( !v31 )
                {
                  v32 = v8;
                  v33 = (void *)(v28 + 8);
                  if ( !memcmp((const void *)(v28 + 8), (char *)OldSid + 8, v32) )
                  {
                    memmove(v33, (char *)NewSid + 8, v32);
                    ++*NumChanges;
                  }
                }
              }
            }
            goto LABEL_56;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
