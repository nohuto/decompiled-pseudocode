/*
 * XREFs of RtlGenerate8dot3Name @ 0x1406C2410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     GetNextWchar @ 0x1406C27E8 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1406C28C0 (RtlComputeLfnChecksum.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PGENERATE_NAME_CONTEXT v4; // rbx
  BOOLEAN v5; // bp
  char v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int16 NextWchar; // ax
  unsigned __int16 v11; // ax
  UCHAR NameLength; // r8
  unsigned int v13; // edi
  unsigned __int16 v14; // ax
  unsigned int v15; // r9d
  unsigned int v16; // edi
  char v17; // bp
  __int64 v18; // rax
  char v19; // cl
  __int16 v20; // r8
  UCHAR v21; // cl
  PUNICODE_STRING v22; // r13
  _WORD *v23; // r14
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // cx
  ULONG ExtensionLength; // eax
  USHORT v28; // ax
  int v29; // r11d
  __int64 v30; // r8
  USHORT v31; // r9
  WCHAR *v32; // r10
  __int64 v33; // r8
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  USHORT v36; // ax
  USHORT v37; // r11
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  WCHAR v41; // ax
  UCHAR v42; // r8
  unsigned int v43; // edx
  unsigned int i; // r9d
  WCHAR v45; // cx
  int v46; // eax
  unsigned int v47; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v48; // [rsp+28h] [rbp-60h] BYREF
  PUNICODE_STRING v49; // [rsp+30h] [rbp-58h]
  _WORD v50[8]; // [rsp+38h] [rbp-50h] BYREF

  v49 = Name8dot3;
  v4 = Context;
  v5 = AllowExtendedCharacters;
  if ( !AllowExtendedCharacters || (v7 = 1, !(_BYTE)NlsMbOemCodePageTag) )
    v7 = 0;
  if ( !Context->NameLength )
  {
    v8 = -1;
    v47 = 0;
    if ( !Name->Length || (LOBYTE(Context) = 1, *Name->Buffer != 46) )
      LOBYTE(Context) = 0;
    v9 = 0;
    while ( 1 )
    {
      LOBYTE(Name8dot3) = v5;
      NextWchar = GetNextWchar(Name, &v47, Context, Name8dot3);
      if ( !NextWchar )
        break;
      LOBYTE(Context) = 0;
      if ( NextWchar == 46 )
        v8 = v47;
    }
    if ( v8 == Name->Length >> 1 )
      v8 = -1;
    v48 = v8;
    v47 = 0;
    for ( v4->NameLength = 0; ; ++v4->NameLength )
    {
      LOBYTE(Name8dot3) = v5;
      LOBYTE(Context) = 1;
      v11 = GetNextWchar(Name, &v47, Context, Name8dot3);
      *(_QWORD *)&AllowExtendedCharacters = v11;
      if ( !v11 )
        break;
      if ( v47 >= v8 )
        break;
      NameLength = v4->NameLength;
      if ( NameLength >= 6u )
        break;
      if ( v7 )
      {
        if ( v11 <= 0x7Fu || (v39 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * AllowExtendedCharacters + 1)) )
          v39 = 1;
        v9 += v39;
        if ( v9 > 6 )
          break;
      }
      v4->NameBuffer[NameLength] = AllowExtendedCharacters;
    }
    if ( !v7 )
      v9 = v4->NameLength;
    if ( v9 <= 2 )
    {
      v36 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters);
      v4->Checksum = v36;
      v37 = v36;
      LODWORD(Context) = 0;
      do
      {
        *(_QWORD *)&AllowExtendedCharacters = 48LL;
        if ( (v37 & 0xFu) > 9 )
          *(_WORD *)&AllowExtendedCharacters = 55;
        v38 = (unsigned int)Context + v4->NameLength;
        *(_WORD *)&AllowExtendedCharacters = (v37 & 0xF) + AllowExtendedCharacters;
        v37 >>= 4;
        Context = (PGENERATE_NAME_CONTEXT)(unsigned int)((_DWORD)Context + 1);
        v4->NameBuffer[v38] = AllowExtendedCharacters;
      }
      while ( (unsigned int)Context < 4 );
      v4->NameLength += 4;
      v4->CheckSumInserted = 1;
    }
    if ( v8 == -1 )
    {
      v4->ExtensionLength = 0;
    }
    else
    {
      v4->ExtensionBuffer[0] = 46;
      v13 = 1;
      for ( v4->ExtensionLength = 1; ; ++v4->ExtensionLength )
      {
        LOBYTE(Name8dot3) = v5;
        LOBYTE(Context) = 1;
        v14 = GetNextWchar(Name, &v48, Context, Name8dot3);
        *(_QWORD *)&AllowExtendedCharacters = v14;
        if ( !v14 )
          break;
        Context = (PGENERATE_NAME_CONTEXT)v4->ExtensionLength;
        if ( (unsigned int)Context >= 4 )
          goto LABEL_41;
        if ( v7 )
        {
          if ( v14 <= 0x7Fu || (v40 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * AllowExtendedCharacters + 1)) )
            v40 = 1;
          v13 += v40;
          if ( v13 > 4 )
          {
LABEL_41:
            if ( FsRtlSafeExtensions )
              v4->ExtensionBuffer[(_DWORD)Context - 1] = 126;
            break;
          }
        }
        v4->ExtensionBuffer[(_QWORD)Context] = AllowExtendedCharacters;
      }
    }
  }
  v15 = v4->LastIndexValue + 1;
  v4->LastIndexValue = v15;
  if ( v15 > 4 && !v4->CheckSumInserted )
  {
    if ( v7 )
    {
      v41 = v4->NameBuffer[0];
      if ( v41 <= 0x7Fu
        || (*(_QWORD *)&AllowExtendedCharacters = 1LL, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v41 + 1)) )
      {
        *(_QWORD *)&AllowExtendedCharacters = 0LL;
      }
    }
    v28 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters);
    v4->Checksum = v28;
    v30 = (unsigned int)(2 - v29);
    v31 = v28;
    if ( (unsigned int)v30 < 6 - v29 )
    {
      v32 = &v4->NameBuffer[v30];
      v33 = 4LL;
      do
      {
        v34 = 48;
        v35 = v31 & 0xF;
        if ( v35 > 9u )
          v34 = 55;
        v31 >>= 4;
        *v32++ = v35 + v34;
        --v33;
      }
      while ( v33 );
    }
    v4->LastIndexValue = 1;
    v4->NameLength = 6 - v29;
    v15 = 1;
    v4->CheckSumInserted = 1;
  }
  v16 = 1;
  v17 = 1;
  do
  {
    if ( !v15 )
      break;
    v18 = 8 - v16++;
    v19 = 0;
    v20 = v15 % 0xA + 48;
    v15 /= 0xAu;
    v50[v18] = v20;
    if ( v20 == 57 )
      v19 = v17;
    v17 = v19;
  }
  while ( v16 <= 7 );
  v21 = v4->NameLength;
  v22 = v49;
  v23 = &v50[8 - v16];
  *v23 = 126;
  if ( (unsigned __int8)(v21 - 1) > 0xBu )
  {
    v24 = 0;
  }
  else
  {
    memmove(v22->Buffer, v4->NameBuffer, 2LL * v21);
    v24 = 2 * v4->NameLength;
  }
  v22->Length = v24;
  memmove(&v22->Buffer[(unsigned __int64)v24 >> 1], v23, 2 * v16);
  v25 = v22->Length + 2 * v16;
  v22->Length = v25;
  ExtensionLength = v4->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v22->Buffer[(unsigned __int64)v25 >> 1], v4->ExtensionBuffer, 2 * ExtensionLength);
    v22->Length += 2 * LOWORD(v4->ExtensionLength);
  }
  if ( !v17 )
    return 0;
  v42 = v4->NameLength;
  if ( v7 )
  {
    v43 = 0;
    for ( i = 0; v43 < v42; ++v43 )
    {
      v45 = v4->NameBuffer[v43];
      if ( v45 <= 0x7Fu || (v46 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v45 + 1)) )
        v46 = 1;
      i += v46;
      if ( i > 7 - v16 )
        break;
    }
  }
  else
  {
    LOBYTE(v43) = v42 - 1;
  }
  v4->NameLength = v43;
  if ( (_BYTE)v43 )
    return 0;
  else
    return -1073740761;
}
