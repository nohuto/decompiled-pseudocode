/*
 * XREFs of RtlGenerate8dot3Name @ 0x14069E320
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     GetNextWchar @ 0x14069E6EC (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x14069E7D0 (RtlComputeLfnChecksum.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  UCHAR v4; // si
  PGENERATE_NAME_CONTEXT v5; // rbx
  BOOLEAN v6; // r14
  char v8; // r13
  unsigned __int16 Length; // di
  unsigned int v10; // ebp
  __int16 NextWchar; // ax
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int16 v14; // ax
  unsigned int v15; // esi
  unsigned int i; // edi
  unsigned __int16 v17; // ax
  unsigned int v18; // r9d
  unsigned int v19; // edi
  char v20; // r15
  __int64 v21; // rax
  char v22; // cl
  __int16 v23; // r8
  UCHAR NameLength; // cl
  PUNICODE_STRING v25; // rbp
  _WORD *v26; // r14
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // cx
  ULONG ExtensionLength; // eax
  USHORT v31; // ax
  int v32; // r11d
  __int64 v33; // r8
  USHORT v34; // r9
  WCHAR *v35; // r10
  __int64 v36; // r8
  __int16 v37; // ax
  unsigned __int16 v38; // cx
  USHORT v39; // r11
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  WCHAR v43; // ax
  UCHAR v44; // r8
  unsigned int v45; // edx
  unsigned int j; // r9d
  WCHAR v47; // cx
  int v48; // eax
  unsigned int v49; // [rsp+24h] [rbp-64h] BYREF
  PUNICODE_STRING v50; // [rsp+28h] [rbp-60h]
  _DWORD v51[6]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v50 = Name8dot3;
  v5 = Context;
  v6 = AllowExtendedCharacters;
  if ( !AllowExtendedCharacters || (v8 = 1, !(_BYTE)NlsMbOemCodePageTag) )
    v8 = 0;
  if ( !Context->NameLength )
  {
    Length = Name->Length;
    v10 = -1;
    v49 = 0;
    if ( !Length || (LOBYTE(Context) = 1, *Name->Buffer != 46) )
      LOBYTE(Context) = 0;
    while ( 1 )
    {
      LOBYTE(Name8dot3) = v6;
      NextWchar = GetNextWchar(Name, &v49, Context, Name8dot3);
      if ( !NextWchar )
        break;
      LOBYTE(Context) = 0;
      if ( NextWchar == 46 )
        v10 = v49;
    }
    v12 = Length >> 1;
    v13 = 0;
    v49 = 0;
    v5->NameLength = 0;
    if ( v10 == v12 )
      v10 = -1;
    v51[0] = v10;
    while ( 1 )
    {
      LOBYTE(Name8dot3) = v6;
      LOBYTE(Context) = 1;
      v14 = GetNextWchar(Name, &v49, Context, Name8dot3);
      Context = 0LL;
      *(_QWORD *)&AllowExtendedCharacters = v14;
      if ( !v14 || v4 >= 6u || v49 >= v10 )
        break;
      if ( v8 )
      {
        if ( v14 <= 0x7Fu || (v41 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * AllowExtendedCharacters + 1)) )
          v41 = 1;
        v13 += v41;
        if ( v13 > 6 )
          break;
      }
      v5->NameBuffer[v4] = AllowExtendedCharacters;
      v4 = ++v5->NameLength;
    }
    if ( !v8 )
      v13 = v4;
    if ( v13 <= 2 )
    {
      v39 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters, 0LL);
      v5->Checksum = v39;
      LODWORD(Context) = 0;
      do
      {
        *(_QWORD *)&AllowExtendedCharacters = 48LL;
        if ( (v39 & 0xFu) > 9 )
          *(_WORD *)&AllowExtendedCharacters = 55;
        v40 = (unsigned int)Context + v5->NameLength;
        *(_WORD *)&AllowExtendedCharacters = (v39 & 0xF) + AllowExtendedCharacters;
        v39 >>= 4;
        Context = (PGENERATE_NAME_CONTEXT)(unsigned int)((_DWORD)Context + 1);
        v5->NameBuffer[v40] = AllowExtendedCharacters;
      }
      while ( (unsigned int)Context < 4 );
      v5->NameLength += 4;
      v5->CheckSumInserted = 1;
    }
    if ( v10 == -1 )
    {
      v5->ExtensionLength = 0;
    }
    else
    {
      v5->ExtensionBuffer[0] = 46;
      v15 = 1;
      v5->ExtensionLength = 1;
      for ( i = 1; ; i = v5->ExtensionLength )
      {
        LOBYTE(Name8dot3) = v6;
        LOBYTE(Context) = 1;
        v17 = GetNextWchar(Name, v51, Context, Name8dot3);
        Context = (PGENERATE_NAME_CONTEXT)v17;
        if ( !v17 )
          break;
        if ( i >= 4 )
          goto LABEL_48;
        if ( v8 )
        {
          if ( v17 <= 0x7Fu
            || (*(_QWORD *)&AllowExtendedCharacters = v17,
                v42 = 2,
                !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * (unsigned __int16)Context + 1)) )
          {
            v42 = 1;
          }
          v15 += v42;
          if ( v15 > 4 )
          {
LABEL_48:
            if ( FsRtlSafeExtensions )
              v5->NameBuffer[i + 9] = 126;
            break;
          }
        }
        v5->ExtensionBuffer[i] = (unsigned __int16)Context;
        ++v5->ExtensionLength;
      }
    }
  }
  v18 = v5->LastIndexValue + 1;
  v5->LastIndexValue = v18;
  if ( v18 > 4 && !v5->CheckSumInserted )
  {
    if ( v8 )
    {
      v43 = v5->NameBuffer[0];
      if ( v43 <= 0x7Fu
        || (*(_QWORD *)&AllowExtendedCharacters = 1LL, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v43 + 1)) )
      {
        *(_QWORD *)&AllowExtendedCharacters = 0LL;
      }
    }
    v31 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters, Context);
    v5->Checksum = v31;
    v33 = (unsigned int)(2 - v32);
    v34 = v31;
    if ( (unsigned int)v33 < 6 - v32 )
    {
      v35 = &v5->NameBuffer[v33];
      v36 = 4LL;
      do
      {
        v37 = 48;
        v38 = v34 & 0xF;
        if ( v38 > 9u )
          v37 = 55;
        v34 >>= 4;
        *v35++ = v38 + v37;
        --v36;
      }
      while ( v36 );
    }
    v5->LastIndexValue = 1;
    v5->NameLength = 6 - v32;
    v18 = 1;
    v5->CheckSumInserted = 1;
  }
  v19 = 1;
  v20 = 1;
  do
  {
    if ( !v18 )
      break;
    v21 = 8 - v19++;
    v22 = 0;
    v23 = v18 % 0xA + 48;
    v18 /= 0xAu;
    *((_WORD *)&v51[2] + v21) = v23;
    if ( v23 == 57 )
      v22 = v20;
    v20 = v22;
  }
  while ( v19 <= 7 );
  NameLength = v5->NameLength;
  v25 = v50;
  v26 = (_WORD *)&v51[2] + 8 - v19;
  *v26 = 126;
  if ( (unsigned __int8)(NameLength - 1) > 0xBu )
  {
    v27 = 0;
  }
  else
  {
    memmove(v25->Buffer, v5->NameBuffer, 2LL * NameLength);
    v27 = 2 * v5->NameLength;
  }
  v25->Length = v27;
  memmove(&v25->Buffer[(unsigned __int64)v27 >> 1], v26, 2 * v19);
  v28 = v25->Length + 2 * v19;
  v25->Length = v28;
  ExtensionLength = v5->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v25->Buffer[(unsigned __int64)v28 >> 1], v5->ExtensionBuffer, 2 * ExtensionLength);
    v25->Length += 2 * LOWORD(v5->ExtensionLength);
  }
  if ( !v20 )
    return 0;
  v44 = v5->NameLength;
  if ( v8 )
  {
    v45 = 0;
    for ( j = 0; v45 < v44; ++v45 )
    {
      v47 = v5->NameBuffer[v45];
      if ( v47 <= 0x7Fu || (v48 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v47 + 1)) )
        v48 = 1;
      j += v48;
      if ( j > 7 - v19 )
        break;
    }
  }
  else
  {
    LOBYTE(v45) = v44 - 1;
  }
  v5->NameLength = v45;
  if ( (_BYTE)v45 )
    return 0;
  else
    return -1073740761;
}
