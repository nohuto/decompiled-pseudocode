/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x180001140
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E1EE8 (RtlpQueryEafPlusModuleList.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v5; // rbx
  __int64 v7; // r12
  ULONG v8; // r13d
  int inited; // esi
  const WCHAR *v11; // rdx
  ULONG v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int32 v17; // r14d
  __int32 v18; // r14d
  __int32 v19; // r14d
  __int32 v20; // r14d
  int v21; // r14d
  __int32 v22; // r14d
  __int32 v23; // r14d
  __int32 v24; // r14d
  __int32 v25; // r14d
  int v26; // r14d
  bool v27; // zf
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  char v32; // r8
  int v33; // r8d
  int v34; // r8d
  unsigned __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // r9
  unsigned __int64 v38; // r15
  __int64 v39; // r11
  __int64 v40; // r9
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  __int64 v43; // r10
  __int64 v44; // r9
  unsigned __int64 v45; // r15
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r15
  _OWORD *v49; // rdi
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  NTSTATUS v58; // eax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-A8h]
  _OBJECT_ATTRIBUTES DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v65[1024]; // [rsp+98h] [rbp-70h] BYREF

  v5 = 0LL;
  KeyHandle = 0LL;
  ResultLength[0] = Flags & 4;
  v62 = 0LL;
  v7 = 8LL;
  v63 = 0LL;
  v8 = Flags & 8;
  inited = RtlInitUnicodeStringEx((PUNICODE_STRING)&DestinationString, ImagePath);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v8 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx(&ValueName, v11);
    if ( inited >= 0 )
    {
      v12 = ResultLength[0];
      if ( ResultLength[0] )
      {
        if ( LOWORD(DestinationString.Length) )
          return -1073741811;
      }
      else
      {
        if ( LOWORD(DestinationString.Length) )
        {
          v58 = RtlpOpenImageFileOptionsKeyEx(&DestinationString, 9LL, 0LL, &KeyHandle);
        }
        else
        {
          DestinationString.Length = 48;
          DestinationString.ObjectName = (PUNICODE_STRING)&unk_180118AF8;
          DestinationString.RootDirectory = 0LL;
          DestinationString.Attributes = 576;
          *(_OWORD *)&DestinationString.SecurityDescriptor = 0LL;
          v58 = NtOpenKey(&KeyHandle, 9u, &DestinationString);
        }
        inited = v58;
        v12 = ResultLength[0];
      }
      if ( inited < 0 )
        return inited;
      if ( v12 )
      {
        if ( v8 )
        {
          v13 = 0LL;
          v14 = 0x2222222222222222LL;
        }
        else
        {
          v13 = 0x12222111211LL;
          v14 = 0x2222200000000000LL;
        }
        v15 = v14 | v13;
        v16 = 0x2222022222220222LL;
      }
      else
      {
        inited = NtQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   &DestinationString,
                   0x20u,
                   ResultLength);
        if ( inited >= 0 && Policy == ImagePayloadRestrictionPolicy )
          inited = RtlpQueryEafPlusModuleList(KeyHandle, v65);
        NtClose(KeyHandle);
        if ( inited < 0 )
          return inited;
        if ( LODWORD(DestinationString.RootDirectory) > 0x10 )
          return -1073741788;
        memmove(&v62, (char *)&DestinationString.RootDirectory + 4, LODWORD(DestinationString.RootDirectory));
        v15 = v62;
        v16 = v63;
      }
      if ( Policy <= ImageSignaturePolicy )
      {
        if ( Policy != ImageSignaturePolicy )
        {
          if ( Policy == ImageDepPolicy )
          {
            if ( BufferSize != 8 )
              return -1073741811;
            goto LABEL_43;
          }
          v17 = Policy - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( !v19 )
              {
                if ( BufferSize == 8 )
                {
                  v15 >>= 24;
                  goto LABEL_33;
                }
                return -1073741811;
              }
              v20 = v19 - 1;
              if ( !v20 )
              {
                if ( BufferSize == 8 )
                {
                  v15 >>= 28;
                  goto LABEL_33;
                }
                return -1073741811;
              }
              v21 = v20 - 2;
              if ( !v21 )
              {
                if ( BufferSize == 8 )
                {
                  v15 >>= 32;
LABEL_33:
                  *(_QWORD *)Buffer = 0LL;
                  if ( (v15 & 3) == 0 )
                    goto LABEL_37;
                  if ( (v15 & 3) == 1 )
                  {
                    *(_QWORD *)Buffer = 1LL;
                    v5 = 1LL;
                    goto LABEL_37;
                  }
                  if ( (v15 & 3) != 2 )
                  {
LABEL_37:
                    v27 = (v15 & 4) == 0;
                    goto LABEL_38;
                  }
LABEL_36:
                  *(_QWORD *)Buffer = 2LL;
                  v5 = 2LL;
                  goto LABEL_37;
                }
                return -1073741811;
              }
              if ( v21 != 1 || BufferSize != 16 )
                return -1073741811;
              v35 = v15 >> 40;
              v36 = 0LL;
              *(_QWORD *)Buffer = 0LL;
              v37 = 0LL;
              *((_QWORD *)Buffer + 1) = 0LL;
              if ( (v35 & 3) == 0 )
                goto LABEL_73;
              if ( (v35 & 3) != 1 )
              {
                if ( (v35 & 3) == 2 )
                {
                  *(_QWORD *)Buffer = 2LL;
                  v37 = 2LL;
LABEL_73:
                  if ( (v35 & 4) != 0 )
                    *(_QWORD *)Buffer = v37 | 4;
                  v38 = v16 >> 8;
                  goto LABEL_76;
                }
                if ( (v35 & 3) != 3 )
                  goto LABEL_73;
                v36 = 8LL;
              }
              v37 = v36 | 1;
              *(_QWORD *)Buffer = v36 | 1;
              goto LABEL_73;
            }
            if ( BufferSize != 8 )
              return -1073741811;
            v15 >>= 36;
LABEL_43:
            *(_QWORD *)Buffer = 0LL;
            if ( (v15 & 3) == 0 )
              goto LABEL_37;
            if ( (v15 & 3) != 1 )
            {
              if ( (v15 & 3) == 2 )
                goto LABEL_36;
              if ( (v15 & 3) != 3 )
                goto LABEL_37;
              v5 = 8LL;
            }
            v5 |= 1uLL;
            *(_QWORD *)Buffer = v5;
            goto LABEL_37;
          }
          if ( BufferSize != 24 )
            return -1073741811;
          v39 = 0LL;
          *(_QWORD *)Buffer = 0LL;
          v40 = 0LL;
          *((_QWORD *)Buffer + 1) = 0LL;
          *((_QWORD *)Buffer + 2) = 0LL;
          if ( (v15 & 0x300) == 0 )
            goto LABEL_90;
          if ( (BYTE1(v15) & 3) != 1 )
          {
            if ( (BYTE1(v15) & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v40 = 2LL;
LABEL_90:
              if ( (v15 & 0x400) != 0 )
                *(_QWORD *)Buffer = v40 | 4;
              v41 = 0LL;
              if ( (v15 & 0x30000) != 0 )
              {
                if ( (BYTE2(v15) & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v41 = 1LL;
                }
                else if ( (BYTE2(v15) & 3) == 2 )
                {
                  v41 = 2LL;
                  *((_QWORD *)Buffer + 1) = 2LL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) = 0LL;
              }
              if ( (v15 & 0x40000) != 0 )
                *((_QWORD *)Buffer + 1) = v41 | 4;
              v31 = v15 >> 20;
              v32 = v31;
LABEL_61:
              v33 = v32 & 3;
              if ( v33 )
              {
                v34 = v33 - 1;
                if ( v34 )
                {
                  if ( v34 == 1 )
                  {
                    *((_QWORD *)Buffer + 2) &= ~1uLL;
                    *((_QWORD *)Buffer + 2) |= 2uLL;
                  }
                }
                else
                {
                  *((_QWORD *)Buffer + 2) &= ~2uLL;
                  *((_QWORD *)Buffer + 2) |= 1uLL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              if ( (v31 & 4) != 0 )
                *((_QWORD *)Buffer + 2) |= 4uLL;
              return inited;
            }
            if ( (BYTE1(v15) & 3) != 3 )
              goto LABEL_90;
            v39 = 8LL;
          }
          v40 = v39 | 1;
          *(_QWORD *)Buffer = v39 | 1;
          goto LABEL_90;
        }
        if ( BufferSize != 16 )
          return -1073741811;
        v42 = v15 >> 44;
        v43 = 0LL;
        *(_QWORD *)Buffer = 0LL;
        v44 = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        if ( (v42 & 3) != 0 )
        {
          if ( (v42 & 3) != 1 )
          {
            if ( (v42 & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v44 = 2LL;
              goto LABEL_106;
            }
            if ( (v42 & 3) != 3 )
              goto LABEL_106;
            v43 = 8LL;
          }
          v44 = v43 | 1;
          *(_QWORD *)Buffer = v43 | 1;
        }
LABEL_106:
        if ( (v42 & 4) != 0 )
          *(_QWORD *)Buffer = v44 | 4;
        v38 = v16 >> 4;
LABEL_76:
        if ( (v38 & 3) != 0 )
        {
          if ( (v38 & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v5 = 1LL;
LABEL_81:
            if ( (v38 & 4) != 0 )
              *((_QWORD *)Buffer + 1) = v5 | 4;
            return inited;
          }
          if ( (v38 & 3) != 2 )
            goto LABEL_81;
          v5 = 2LL;
        }
        *((_QWORD *)Buffer + 1) = v5;
        goto LABEL_81;
      }
      v22 = Policy - 9;
      if ( !v22 )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        v15 >>= 48;
        goto LABEL_43;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        if ( BufferSize != 24 )
          return -1073741811;
        v29 = 0LL;
        *(_QWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( ((v15 >> 52) & 3) != 0 )
        {
          if ( ((v15 >> 52) & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
            v29 = 1LL;
          }
          else if ( ((v15 >> 52) & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v29 = 2LL;
          }
        }
        if ( ((v15 >> 52) & 4) != 0 )
          *(_QWORD *)Buffer = v29 | 4;
        v30 = 0LL;
        if ( (v15 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v15) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v30 = 1LL;
          }
          else if ( (HIBYTE(v15) & 3) == 2 )
          {
            v30 = 2LL;
            *((_QWORD *)Buffer + 1) = 2LL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v15 & 0x400000000000000LL) != 0 )
          *((_QWORD *)Buffer + 1) = v30 | 4;
        v31 = v15 >> 60;
        v32 = v31;
        goto LABEL_61;
      }
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 && BufferSize == 8 )
            {
              v15 >>= 12;
              goto LABEL_33;
            }
            return -1073741811;
          }
          if ( BufferSize != 8 )
            return -1073741811;
          v15 >>= 4;
          goto LABEL_43;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v45 = v16 >> 36;
        *(_QWORD *)Buffer = 0LL;
        if ( (v45 & 3) != 0 )
        {
          if ( (v45 & 3) != 1 )
          {
            if ( (v45 & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v5 = 2LL;
              goto LABEL_116;
            }
            if ( (v45 & 3) != 3 )
              goto LABEL_116;
            v5 = 8LL;
          }
          v5 |= 1uLL;
          *(_QWORD *)Buffer = v5;
        }
LABEL_116:
        v27 = (v45 & 4) == 0;
LABEL_38:
        if ( !v27 )
          *(_QWORD *)Buffer = v5 | 4;
        return inited;
      }
      if ( BufferSize != 1072 )
        return -1073741811;
      memset(Buffer, 0, 0x430uLL);
      v46 = 0LL;
      if ( (v16 & 0x30000) != 0 )
      {
        if ( (BYTE2(v16) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 3) = 1LL;
          v46 = 1LL;
        }
        else if ( (BYTE2(v16) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 3) = 2LL;
          v46 = 2LL;
        }
      }
      if ( (v16 & 0x40000) != 0 )
        *((_QWORD *)Buffer + 3) = v46 | 4;
      v47 = 0LL;
      if ( ((v16 >> 20) & 3) != 0 )
      {
        if ( ((v16 >> 20) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 4) = 1LL;
          v47 = 1LL;
        }
        else if ( ((v16 >> 20) & 3) == 2 )
        {
          v47 = *((_QWORD *)Buffer + 4) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 4) = v47;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 4) = 0LL;
      }
      if ( ((v16 >> 20) & 4) != 0 )
        *((_QWORD *)Buffer + 4) = v47 | 4;
      if ( (v16 & 0x3000000) != 0 )
      {
        if ( (BYTE3(v16) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 5) &= ~2uLL;
          *((_QWORD *)Buffer + 5) |= 1uLL;
        }
        else if ( (BYTE3(v16) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 5) &= ~1uLL;
          *((_QWORD *)Buffer + 5) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v16 & 0x4000000) != 0 )
        *((_QWORD *)Buffer + 5) |= 4uLL;
      if ( ((v16 >> 28) & 3) != 0 )
      {
        if ( ((v16 >> 28) & 3) == 1 )
        {
          *(_QWORD *)Buffer &= ~2uLL;
          *(_QWORD *)Buffer |= 1uLL;
        }
        else if ( ((v16 >> 28) & 3) == 2 )
        {
          *(_QWORD *)Buffer &= ~1uLL;
          *(_QWORD *)Buffer |= 2uLL;
        }
      }
      else
      {
        *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( ((v16 >> 28) & 4) != 0 )
        *(_QWORD *)Buffer |= 4uLL;
      if ( (v16 & 0x300000000LL) != 0 )
      {
        if ( (BYTE4(v16) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) &= ~2uLL;
          *((_QWORD *)Buffer + 1) |= 1uLL;
        }
        else if ( (BYTE4(v16) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 1) &= ~1uLL;
          *((_QWORD *)Buffer + 1) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v16 & 0x400000000LL) != 0 )
        *((_QWORD *)Buffer + 1) |= 4uLL;
      v48 = v16 >> 40;
      if ( (v48 & 3) != 0 )
      {
        if ( (v48 & 3) == 1 )
        {
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
        }
        else if ( (v48 & 3) == 2 )
        {
          *((_QWORD *)Buffer + 2) &= ~1uLL;
          *((_QWORD *)Buffer + 2) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v48 & 4) != 0 )
        *((_QWORD *)Buffer + 2) |= 4uLL;
      v49 = (char *)Buffer + 48;
      v50 = v65;
      do
      {
        v51 = v50[1];
        *v49 = *v50;
        v52 = v50[2];
        v49[1] = v51;
        v53 = v50[3];
        v49[2] = v52;
        v54 = v50[4];
        v49[3] = v53;
        v55 = v50[5];
        v49[4] = v54;
        v56 = v50[6];
        v49[5] = v55;
        v57 = v50[7];
        v50 += 8;
        v49[6] = v56;
        v49 += 8;
        *(v49 - 1) = v57;
        --v7;
      }
      while ( v7 );
    }
  }
  return inited;
}
