/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800F86C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     GetNextWchar @ 0x1800F8560 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800F864C (RtlComputeLfnChecksum.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  UCHAR v4; // si
  char v8; // r12
  unsigned int v9; // ebp
  char v10; // r8
  __int16 NextWchar; // ax
  unsigned int v12; // edi
  bool v13; // zf
  WCHAR v14; // ax
  WCHAR v15; // cx
  int v16; // eax
  USHORT v17; // r11
  unsigned int i; // r8d
  __int16 v19; // dx
  __int64 v20; // rax
  WCHAR v21; // dx
  unsigned int v22; // esi
  ULONG j; // edi
  WCHAR v24; // ax
  WCHAR v25; // dx
  __int64 v26; // rcx
  int v27; // eax
  ULONG v28; // r9d
  USHORT v29; // ax
  int v30; // r11d
  USHORT v31; // r9
  __int64 v32; // r8
  WCHAR *v33; // r10
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  unsigned int v36; // edi
  char v37; // r15
  __int64 v38; // rax
  char v39; // cl
  __int16 v40; // r8
  PUNICODE_STRING v41; // rbp
  _WORD *v42; // r14
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // cx
  ULONG ExtensionLength; // eax
  UCHAR NameLength; // dl
  unsigned int v47; // ecx
  unsigned int k; // r8d
  int v49; // eax
  unsigned int v51; // [rsp+24h] [rbp-64h] BYREF
  PUNICODE_STRING v52; // [rsp+28h] [rbp-60h]
  unsigned int v53[6]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v52 = Name8dot3;
  if ( !AllowExtendedCharacters || (v8 = 1, !NlsMbOemCodePageTag) )
    v8 = 0;
  if ( !Context->NameLength )
  {
    v9 = -1;
    v51 = 0;
    if ( !Name->Length || (v10 = 1, *Name->Buffer != 46) )
      v10 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v51, v10, AllowExtendedCharacters);
      if ( !NextWchar )
        break;
      v10 = 0;
      if ( NextWchar == 46 )
        v9 = v51;
    }
    v12 = 0;
    v13 = v9 == Name->Length >> 1;
    v51 = 0;
    Context->NameLength = 0;
    if ( v13 )
      v9 = -1;
    v53[0] = v9;
    while ( 1 )
    {
      v14 = GetNextWchar(&Name->Length, &v51, 1, AllowExtendedCharacters);
      v15 = v14;
      if ( !v14 || v51 >= v9 || v4 >= 6u )
        break;
      if ( v8 )
      {
        if ( v14 <= 0x7Fu || (v13 = *(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v14 + 1) == 0, v16 = 2, v13) )
          v16 = 1;
        v12 += v16;
        if ( v12 > 6 )
          break;
      }
      Context->NameBuffer[v4] = v15;
      v4 = ++Context->NameLength;
    }
    if ( !v8 )
      v12 = v4;
    if ( v12 <= 2 )
    {
      v17 = RtlComputeLfnChecksum(&Name->Length);
      Context->Checksum = v17;
      for ( i = 0; i < 4; ++i )
      {
        v19 = 48;
        if ( (v17 & 0xFu) > 9 )
          v19 = 55;
        v20 = i + Context->NameLength;
        v21 = (v17 & 0xF) + v19;
        v17 >>= 4;
        Context->NameBuffer[v20] = v21;
      }
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v9 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v22 = 1;
      Context->ExtensionLength = 1;
      for ( j = 1; ; j = Context->ExtensionLength )
      {
        v24 = GetNextWchar(&Name->Length, v53, 1, AllowExtendedCharacters);
        v25 = v24;
        if ( !v24 )
          break;
        if ( j >= 4 )
          goto LABEL_41;
        if ( v8 )
        {
          if ( v24 <= 0x7Fu || (v26 = v24, v27 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v26 + 1)) )
            v27 = 1;
          v22 += v27;
          if ( v22 > 4 )
          {
LABEL_41:
            Context->NameBuffer[j + 9] = 126;
            break;
          }
        }
        Context->ExtensionBuffer[j] = v25;
        ++Context->ExtensionLength;
      }
    }
  }
  v28 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v28;
  if ( v28 > 4 && !Context->CheckSumInserted )
  {
    v29 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v29;
    v31 = v29;
    if ( 2 - v30 < (unsigned int)(6 - v30) )
    {
      v32 = 4LL;
      v33 = &Context->NameBuffer[2 - v30];
      do
      {
        v34 = 48;
        v35 = v31 & 0xF;
        if ( v35 > 9u )
          v34 = 55;
        v31 >>= 4;
        *v33++ = v35 + v34;
        --v32;
      }
      while ( v32 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v30;
    v28 = 1;
    Context->CheckSumInserted = 1;
  }
  v36 = 1;
  v37 = 1;
  do
  {
    if ( !v28 )
      break;
    v38 = 8 - v36++;
    v39 = 0;
    v40 = v28 % 0xA + 48;
    v28 /= 0xAu;
    *((_WORD *)&v53[2] + v38) = v40;
    if ( v40 == 57 )
      v39 = v37;
    v37 = v39;
  }
  while ( v36 <= 7 );
  v41 = v52;
  v42 = (_WORD *)&v53[2] + 8 - v36;
  *v42 = 126;
  if ( (unsigned __int8)(Context->NameLength - 1) > 0xBu )
  {
    v43 = 0;
  }
  else
  {
    memmove(v41->Buffer, Context->NameBuffer, 2LL * Context->NameLength);
    v43 = 2 * Context->NameLength;
  }
  v41->Length = v43;
  memmove(&v41->Buffer[(unsigned __int64)v43 >> 1], v42, 2 * v36);
  v44 = v41->Length + 2 * v36;
  v41->Length = v44;
  ExtensionLength = Context->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v41->Buffer[(unsigned __int64)v44 >> 1], Context->ExtensionBuffer, 2 * ExtensionLength);
    v41->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v37 )
    return 0;
  NameLength = Context->NameLength;
  if ( v8 )
  {
    v47 = 0;
    for ( k = 0; v47 < NameLength; ++v47 )
    {
      if ( Context->NameBuffer[v47] <= 0x7Fu
        || (v49 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * Context->NameBuffer[v47] + 1)) )
      {
        v49 = 1;
      }
      k += v49;
      if ( k > 7 - v36 )
        break;
    }
  }
  else
  {
    LOBYTE(v47) = NameLength - 1;
  }
  Context->NameLength = v47;
  if ( (_BYTE)v47 )
    return 0;
  else
    return -1073740761;
}
