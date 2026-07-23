/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18000AA60
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008E194 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlDowncaseUnicodeChar @ 0x1800EBAE0 (RtlDowncaseUnicodeChar.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  char v5; // r12
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v8; // dx
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r13
  wchar_t *v11; // rsi
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // di
  int v14; // edx
  _BOOL8 v15; // rbp
  wchar_t v16; // ax
  USHORT v17; // bx
  USHORT v18; // cx
  int v19; // r12d
  wchar_t v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // rbp
  signed __int64 v23; // r13
  WCHAR *v24; // r14
  int v25; // r12d
  WCHAR v26; // r8
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  int v29; // r12d
  WCHAR v30; // r15
  unsigned __int16 v31; // bp
  unsigned __int16 v32; // [rsp+20h] [rbp-A8h]
  int v33; // [rsp+24h] [rbp-A4h]
  USHORT *v34; // [rsp+28h] [rbp-A0h]
  _BOOL8 v35; // [rsp+30h] [rbp-98h]
  _WORD v36[32]; // [rsp+40h] [rbp-88h] BYREF

  v34 = NonInclusivePrefixLength;
  v5 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 || !NonInclusivePrefixLength )
    return -1073741811;
  result = 0;
  if ( StringToSearch )
  {
    if ( (StringToSearch->Length & 1) != 0
      || (MaximumLength = StringToSearch->MaximumLength, (MaximumLength & 1) != 0)
      || StringToSearch->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (StringToSearch->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    result = 0;
    if ( CharSet )
    {
      if ( (CharSet->Length & 1) != 0
        || (v8 = CharSet->MaximumLength, (v8 & 1) != 0)
        || CharSet->Length > v8
        || v8 == 0xFFFF
        || !CharSet->Buffer && (CharSet->Length || v8) )
      {
        result = -1073741811;
      }
    }
    if ( result >= 0 )
    {
      Length = StringToSearch->Length;
      Buffer = CharSet->Buffer;
      v11 = StringToSearch->Buffer;
      v12 = Length >> 1;
      v13 = CharSet->Length >> 1;
      v14 = v5 & 1;
      v32 = Length;
      v33 = v14;
      if ( (v5 & 1) != 0 )
        v11 = &v11[v12 - 1];
      v15 = !(v5 & 1);
      v35 = v15;
      if ( (v5 & 4) == 0 )
      {
        if ( v13 == 1 )
        {
          v16 = *Buffer;
          if ( (v5 & 2) != 0 )
          {
            if ( v12 )
            {
              do
              {
                if ( *v11 != v16 )
                  break;
                v11 = &v11[2 * v15 - 1];
                --v12;
              }
              while ( v12 );
              goto LABEL_27;
            }
          }
          else if ( v12 )
          {
            do
            {
              if ( *v11 == v16 )
                break;
              v11 = &v11[2 * v15 - 1];
              --v12;
            }
            while ( v12 );
            goto LABEL_27;
          }
        }
        else if ( v12 )
        {
          v19 = v5 & 2;
          while ( 1 )
          {
            v20 = *v11;
            v21 = 0;
            if ( v19 )
            {
              if ( v13 )
              {
                do
                {
                  if ( v20 == Buffer[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v13 );
              }
              if ( v21 == v13 )
                goto LABEL_47;
            }
            else
            {
              if ( v13 )
              {
                do
                {
                  if ( v20 == Buffer[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v13 );
              }
              if ( v21 != v13 )
                goto LABEL_47;
            }
            v11 = &v11[2 * v15 - 1];
            if ( !--v12 )
              goto LABEL_47;
          }
        }
        return -1073741275;
      }
      if ( v13 <= 0x20u )
      {
        if ( v13 )
        {
          v22 = v13;
          v23 = (char *)Buffer - (char *)v36;
          v24 = v36;
          do
          {
            *v24 = RtlDowncaseUnicodeChar(*(WCHAR *)((char *)v24 + v23));
            ++v24;
            --v22;
          }
          while ( v22 );
          v15 = !(v5 & 1);
        }
        if ( v12 )
        {
          v25 = v5 & 2;
          while ( 1 )
          {
            v26 = RtlDowncaseUnicodeChar(*v11);
            if ( v25 )
            {
              for ( i = 0; i < v13; ++i )
              {
                if ( v26 == v36[i] )
                  break;
              }
              if ( i == v13 )
                goto LABEL_76;
            }
            else
            {
              for ( j = 0; j < v13; ++j )
              {
                if ( v26 == v36[j] )
                  break;
              }
              if ( j != v13 )
                goto LABEL_76;
            }
            v11 = &v11[2 * v15 - 1];
            if ( !--v12 )
              goto LABEL_76;
          }
        }
        return -1073741275;
      }
      if ( v12 )
      {
        v29 = v5 & 2;
        while ( 1 )
        {
          v30 = RtlDowncaseUnicodeChar(*v11);
          v31 = 0;
          if ( v29 )
          {
            do
            {
              if ( v30 == RtlDowncaseUnicodeChar(Buffer[v31]) )
                break;
              ++v31;
            }
            while ( v31 < v13 );
            if ( v31 == v13 )
              goto LABEL_76;
          }
          else
          {
            do
            {
              if ( v30 == RtlDowncaseUnicodeChar(Buffer[v31]) )
                break;
              ++v31;
            }
            while ( v31 < v13 );
            if ( v31 != v13 )
            {
LABEL_76:
              NonInclusivePrefixLength = v34;
LABEL_47:
              Length = v32;
              v14 = v33;
LABEL_27:
              if ( v12 )
              {
                result = 0;
                v17 = 2 * v12 - 2;
                v18 = Length - v17;
                if ( !v14 )
                  v17 = v18;
                *NonInclusivePrefixLength = v17;
                return result;
              }
              return -1073741275;
            }
          }
          v11 = &v11[2 * v35 - 1];
          if ( !--v12 )
            goto LABEL_76;
        }
      }
      return -1073741275;
    }
  }
  return result;
}
