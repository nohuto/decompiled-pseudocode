/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E2FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079278 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E4B68 (RtlpQueryEafPlusModuleList.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v5; // rbx
  __int64 v7; // r15
  ULONG v8; // r13d
  int inited; // esi
  const WCHAR *v11; // rdx
  ULONG v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int32 v18; // r14d
  __int32 v19; // r14d
  __int32 v20; // r14d
  __int32 v21; // r14d
  int v22; // r14d
  unsigned __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r9
  unsigned __int64 v26; // r12
  __int64 v27; // r11
  __int64 v28; // r9
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  char v31; // r8
  int v32; // r8d
  int v33; // r8d
  unsigned __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // r9
  __int32 v37; // r14d
  __int32 v38; // r14d
  __int32 v39; // r14d
  __int32 v40; // r14d
  int v41; // r14d
  unsigned __int64 v42; // r12
  bool v43; // zf
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r12
  _OWORD *v47; // rdi
  _OWORD *v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // r9
  __int64 v57; // r8
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
          v13 = RtlpOpenImageFileOptionsKeyEx((unsigned __int16 *)&DestinationString, 9LL, 0, &KeyHandle);
        }
        else
        {
          DestinationString.Length = 48;
          DestinationString.ObjectName = (PUNICODE_STRING)&unk_180118B78;
          DestinationString.RootDirectory = 0LL;
          DestinationString.Attributes = 576;
          *(_OWORD *)&DestinationString.SecurityDescriptor = 0LL;
          v13 = NtOpenKey(&KeyHandle, 9u, &DestinationString);
        }
        inited = v13;
        v12 = ResultLength[0];
      }
      if ( inited < 0 )
        return inited;
      if ( v12 )
      {
        if ( v8 )
        {
          v16 = 0LL;
          v17 = 0x2222222222222222LL;
        }
        else
        {
          v16 = 0x12222111211LL;
          v17 = 0x2222200000000000LL;
        }
        v14 = v17 | v16;
        v15 = 0x2222022222220222LL;
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
        v14 = v62;
        v15 = v63;
      }
      if ( Policy <= ImageSignaturePolicy )
      {
        if ( Policy != ImageSignaturePolicy )
        {
          if ( Policy == ImageDepPolicy )
          {
            if ( BufferSize != 8 )
              return -1073741811;
            goto LABEL_201;
          }
          v18 = Policy - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  v22 = v21 - 2;
                  if ( v22 )
                  {
                    if ( v22 != 1 || BufferSize != 16 )
                      return -1073741811;
                    v23 = v14 >> 40;
                    v24 = 0LL;
                    *(_QWORD *)Buffer = 0LL;
                    v25 = 0LL;
                    *((_QWORD *)Buffer + 1) = 0LL;
                    if ( (v23 & 3) == 0 )
                    {
                      *(_QWORD *)Buffer = 0LL;
                      goto LABEL_43;
                    }
                    if ( (v23 & 3) != 1 )
                    {
                      if ( (v23 & 3) == 2 )
                      {
                        *(_QWORD *)Buffer = 2LL;
                        v25 = 2LL;
                        goto LABEL_43;
                      }
                      if ( (v23 & 3) != 3 )
                      {
LABEL_43:
                        if ( (v23 & 4) != 0 )
                          *(_QWORD *)Buffer = v25 | 4;
                        v26 = v15 >> 8;
                        goto LABEL_101;
                      }
                      *(_QWORD *)Buffer = 8LL;
                      v24 = 8LL;
                    }
                    v25 = v24 | 1;
                    *(_QWORD *)Buffer = v24 | 1;
                    goto LABEL_43;
                  }
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v14 >>= 32;
                }
                else
                {
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v14 >>= 28;
                }
              }
              else
              {
                if ( BufferSize != 8 )
                  return -1073741811;
                v14 >>= 24;
              }
LABEL_48:
              *(_QWORD *)Buffer = 0LL;
              if ( (v14 & 3) != 0 )
              {
                if ( (v14 & 3) == 1 )
                {
                  *(_QWORD *)Buffer = 1LL;
                  v5 = 1LL;
                  goto LABEL_208;
                }
                if ( (v14 & 3) != 2 )
                {
LABEL_208:
                  v43 = (v14 & 4) == 0;
LABEL_209:
                  if ( !v43 )
                    *(_QWORD *)Buffer = v5 | 4;
                  return inited;
                }
LABEL_51:
                *(_QWORD *)Buffer = 2LL;
                v5 = 2LL;
                goto LABEL_208;
              }
              goto LABEL_207;
            }
            if ( BufferSize != 8 )
              return -1073741811;
            v14 >>= 36;
            goto LABEL_201;
          }
          if ( BufferSize != 24 )
            return -1073741811;
          v27 = 0LL;
          *(_QWORD *)Buffer = 0LL;
          v28 = 0LL;
          *((_QWORD *)Buffer + 1) = 0LL;
          *((_QWORD *)Buffer + 2) = 0LL;
          if ( (v14 & 0x300) == 0 )
          {
            *(_QWORD *)Buffer = 0LL;
            goto LABEL_68;
          }
          if ( (BYTE1(v14) & 3) != 1 )
          {
            if ( (BYTE1(v14) & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v28 = 2LL;
              goto LABEL_68;
            }
            if ( (BYTE1(v14) & 3) != 3 )
            {
LABEL_68:
              if ( (v14 & 0x400) != 0 )
                *(_QWORD *)Buffer = v28 | 4;
              v29 = 0LL;
              if ( (v14 & 0x30000) != 0 )
              {
                if ( (BYTE2(v14) & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v29 = 1LL;
                }
                else if ( (BYTE2(v14) & 3) == 2 )
                {
                  v29 = 2LL;
                  *((_QWORD *)Buffer + 1) = 2LL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) = 0LL;
              }
              if ( (v14 & 0x40000) != 0 )
                *((_QWORD *)Buffer + 1) = v29 | 4;
              v30 = v14 >> 20;
              v31 = v30;
LABEL_79:
              v32 = v31 & 3;
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  if ( v33 == 1 )
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
              if ( (v30 & 4) != 0 )
                *((_QWORD *)Buffer + 2) |= 4uLL;
              return inited;
            }
            *(_QWORD *)Buffer = 8LL;
            v27 = 8LL;
          }
          v28 = v27 | 1;
          *(_QWORD *)Buffer = v27 | 1;
          goto LABEL_68;
        }
        if ( BufferSize != 16 )
          return -1073741811;
        v34 = v14 >> 44;
        v35 = 0LL;
        *(_QWORD *)Buffer = 0LL;
        v36 = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        if ( (v34 & 3) == 0 )
        {
          *(_QWORD *)Buffer = 0LL;
          goto LABEL_98;
        }
        if ( (v34 & 3) != 1 )
        {
          if ( (v34 & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v36 = 2LL;
            goto LABEL_98;
          }
          if ( (v34 & 3) != 3 )
          {
LABEL_98:
            if ( (v34 & 4) != 0 )
              *(_QWORD *)Buffer = v36 | 4;
            v26 = v15 >> 4;
LABEL_101:
            if ( (v26 & 3) != 0 )
            {
              if ( (v26 & 3) == 1 )
              {
                *((_QWORD *)Buffer + 1) = 1LL;
                v5 = 1LL;
LABEL_106:
                if ( (v26 & 4) != 0 )
                  *((_QWORD *)Buffer + 1) = v5 | 4;
                return inited;
              }
              if ( (v26 & 3) != 2 )
                goto LABEL_106;
              v5 = 2LL;
            }
            *((_QWORD *)Buffer + 1) = v5;
            goto LABEL_106;
          }
          *(_QWORD *)Buffer = 8LL;
          v35 = 8LL;
        }
        v36 = v35 | 1;
        *(_QWORD *)Buffer = v35 | 1;
        goto LABEL_98;
      }
      v37 = Policy - 9;
      if ( !v37 )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        v14 >>= 48;
        goto LABEL_201;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        if ( BufferSize != 24 )
          return -1073741811;
        v56 = 0LL;
        *(_QWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( ((v14 >> 52) & 3) != 0 )
        {
          if ( ((v14 >> 52) & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
            v56 = 1LL;
          }
          else if ( ((v14 >> 52) & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v56 = 2LL;
          }
        }
        else
        {
          *(_QWORD *)Buffer = 0LL;
        }
        if ( ((v14 >> 52) & 4) != 0 )
          *(_QWORD *)Buffer = v56 | 4;
        v57 = 0LL;
        if ( (v14 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v14) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v57 = 1LL;
          }
          else if ( (HIBYTE(v14) & 3) == 2 )
          {
            v57 = 2LL;
            *((_QWORD *)Buffer + 1) = 2LL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v14 & 0x400000000000000LL) != 0 )
          *((_QWORD *)Buffer + 1) = v57 | 4;
        v30 = v14 >> 60;
        v31 = v30;
        goto LABEL_79;
      }
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            if ( v41 != 1 || BufferSize != 8 )
              return -1073741811;
            v14 >>= 12;
            goto LABEL_48;
          }
          if ( BufferSize != 8 )
            return -1073741811;
          v14 >>= 4;
LABEL_201:
          *(_QWORD *)Buffer = 0LL;
          if ( (v14 & 3) != 0 )
          {
            if ( (v14 & 3) != 1 )
            {
              if ( (v14 & 3) == 2 )
                goto LABEL_51;
              if ( (v14 & 3) != 3 )
                goto LABEL_208;
              *(_QWORD *)Buffer = 8LL;
              v5 = 8LL;
            }
            v5 |= 1uLL;
          }
LABEL_207:
          *(_QWORD *)Buffer = v5;
          goto LABEL_208;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v42 = v15 >> 36;
        *(_QWORD *)Buffer = 0LL;
        if ( (v42 & 3) != 0 )
        {
          if ( (v42 & 3) != 1 )
          {
            if ( (v42 & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v5 = 2LL;
              goto LABEL_127;
            }
            if ( (v42 & 3) != 3 )
            {
LABEL_127:
              v43 = (v42 & 4) == 0;
              goto LABEL_209;
            }
            *(_QWORD *)Buffer = 8LL;
            v5 = 8LL;
          }
          v5 |= 1uLL;
        }
        *(_QWORD *)Buffer = v5;
        goto LABEL_127;
      }
      if ( BufferSize != 1072 )
        return -1073741811;
      memset(Buffer, 0, 0x430uLL);
      v44 = 0LL;
      if ( (v15 & 0x30000) != 0 )
      {
        if ( (BYTE2(v15) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 3) = 1LL;
          v44 = 1LL;
        }
        else if ( (BYTE2(v15) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 3) = 2LL;
          v44 = 2LL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 3) = 0LL;
      }
      if ( (v15 & 0x40000) != 0 )
        *((_QWORD *)Buffer + 3) = v44 | 4;
      v45 = 0LL;
      if ( ((v15 >> 20) & 3) != 0 )
      {
        if ( ((v15 >> 20) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 4) = 1LL;
          v45 = 1LL;
        }
        else if ( ((v15 >> 20) & 3) == 2 )
        {
          v45 = *((_QWORD *)Buffer + 4) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 4) = v45;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 4) = 0LL;
      }
      if ( ((v15 >> 20) & 4) != 0 )
        *((_QWORD *)Buffer + 4) = v45 | 4;
      if ( (v15 & 0x3000000) != 0 )
      {
        if ( (BYTE3(v15) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 5) &= ~2uLL;
          *((_QWORD *)Buffer + 5) |= 1uLL;
        }
        else if ( (BYTE3(v15) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 5) &= ~1uLL;
          *((_QWORD *)Buffer + 5) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v15 & 0x4000000) != 0 )
        *((_QWORD *)Buffer + 5) |= 4uLL;
      if ( ((v15 >> 28) & 3) != 0 )
      {
        if ( ((v15 >> 28) & 3) == 1 )
        {
          *(_QWORD *)Buffer &= ~2uLL;
          *(_QWORD *)Buffer |= 1uLL;
        }
        else if ( ((v15 >> 28) & 3) == 2 )
        {
          *(_QWORD *)Buffer &= ~1uLL;
          *(_QWORD *)Buffer |= 2uLL;
        }
      }
      else
      {
        *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( ((v15 >> 28) & 4) != 0 )
        *(_QWORD *)Buffer |= 4uLL;
      if ( (v15 & 0x300000000LL) != 0 )
      {
        if ( (BYTE4(v15) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) &= ~2uLL;
          *((_QWORD *)Buffer + 1) |= 1uLL;
        }
        else if ( (BYTE4(v15) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 1) &= ~1uLL;
          *((_QWORD *)Buffer + 1) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v15 & 0x400000000LL) != 0 )
        *((_QWORD *)Buffer + 1) |= 4uLL;
      v46 = v15 >> 40;
      if ( (v46 & 3) != 0 )
      {
        if ( (v46 & 3) == 1 )
        {
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
        }
        else if ( (v46 & 3) == 2 )
        {
          *((_QWORD *)Buffer + 2) &= ~1uLL;
          *((_QWORD *)Buffer + 2) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v46 & 4) != 0 )
        *((_QWORD *)Buffer + 2) |= 4uLL;
      v47 = (char *)Buffer + 48;
      v48 = v65;
      do
      {
        v49 = v48[1];
        *v47 = *v48;
        v50 = v48[2];
        v47[1] = v49;
        v51 = v48[3];
        v47[2] = v50;
        v52 = v48[4];
        v47[3] = v51;
        v53 = v48[5];
        v47[4] = v52;
        v54 = v48[6];
        v47[5] = v53;
        v55 = v48[7];
        v48 += 8;
        v47[6] = v54;
        v47 += 8;
        *(v47 - 1) = v55;
        --v7;
      }
      while ( v7 );
    }
  }
  return inited;
}
