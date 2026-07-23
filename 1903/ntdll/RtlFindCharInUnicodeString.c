/*
 * XREFs of RtlFindCharInUnicodeString @ 0x180028A80
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 * Callees:
 *     RtlDowncaseUnicodeChar_0 @ 0x180070AD4 (RtlDowncaseUnicodeChar_0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  unsigned __int16 v4; // bx
  PUSHORT v5; // rbp
  char v7; // si
  NTSTATUS result; // eax
  USHORT MaximumLength; // dx
  USHORT v10; // dx
  USHORT Length; // r13
  PWCH Buffer; // r14
  PWCH v13; // r11
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r10
  ULONG v16; // ecx
  __int64 v17; // r12
  WCHAR v18; // ax
  int v19; // esi
  __int16 v20; // r9
  int v21; // esi
  WCHAR v22; // dx
  unsigned __int16 v23; // cx
  __int64 v24; // rdi
  signed __int64 v25; // r14
  WCHAR *v26; // rbx
  int v27; // esi
  WCHAR v28; // r8
  unsigned __int16 v29; // r10
  __int64 v30; // r11
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  int v33; // esi
  WCHAR v34; // bp
  unsigned __int16 v35; // r10
  __int64 v36; // r11
  int v37; // [rsp+20h] [rbp-98h]
  USHORT v38; // [rsp+24h] [rbp-94h]
  _WORD v40[32]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v5 = NonInclusivePrefixLength;
  v7 = Flags;
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
        || (v10 = CharSet->MaximumLength, (v10 & 1) != 0)
        || CharSet->Length > v10
        || v10 == 0xFFFF
        || !CharSet->Buffer && (CharSet->Length || v10) )
      {
        result = -1073741811;
      }
    }
    if ( result >= 0 )
    {
      Length = StringToSearch->Length;
      Buffer = CharSet->Buffer;
      v13 = StringToSearch->Buffer;
      v14 = Length >> 1;
      v15 = CharSet->Length >> 1;
      v16 = Flags & 1;
      v38 = Length;
      v37 = v7 & 1;
      if ( (v7 & 1) != 0 )
        v13 = &v13[v14 - 1];
      v17 = v16 ^ 1LL;
      if ( (v7 & 4) == 0 )
      {
        if ( v15 == 1 )
        {
          v18 = *Buffer;
          v19 = v7 & 2;
          if ( v14 )
          {
            if ( v19 )
            {
              do
              {
                if ( *v13 != v18 )
                  break;
                v13 = &v13[2 * v17 - 1];
                --v14;
              }
              while ( v14 );
            }
            else
            {
              do
              {
                if ( *v13 == v18 )
                  break;
                v13 = &v13[2 * v17 - 1];
                --v14;
              }
              while ( v14 );
            }
            goto LABEL_27;
          }
        }
        else if ( v14 )
        {
          v21 = v7 & 2;
          while ( 1 )
          {
            v22 = *v13;
            v23 = 0;
            if ( v21 )
            {
              if ( v15 )
              {
                do
                {
                  if ( v22 == Buffer[v23] )
                    break;
                  ++v23;
                }
                while ( v23 < v15 );
              }
              if ( v23 == v15 )
                goto LABEL_47;
            }
            else
            {
              if ( v15 )
              {
                do
                {
                  if ( v22 == Buffer[v23] )
                    break;
                  ++v23;
                }
                while ( v23 < v15 );
              }
              if ( v23 != v15 )
                goto LABEL_47;
            }
            v13 = &v13[2 * v17 - 1];
            if ( !--v14 )
              goto LABEL_47;
          }
        }
        return -1073741275;
      }
      if ( v15 <= 0x20u )
      {
        if ( v15 )
        {
          v24 = v15;
          v25 = (char *)Buffer - (char *)v40;
          v26 = v40;
          do
          {
            *v26 = RtlDowncaseUnicodeChar_0(*(WCHAR *)((char *)v26 + v25));
            ++v26;
            --v24;
          }
          while ( v24 );
        }
        if ( v14 )
        {
          v27 = v7 & 2;
          while ( 1 )
          {
            v28 = RtlDowncaseUnicodeChar_0(*v13);
            if ( v27 )
            {
              for ( i = 0; i < v29; ++i )
              {
                if ( v28 == v40[i] )
                  break;
              }
              if ( i == v29 )
                goto LABEL_47;
            }
            else
            {
              for ( j = 0; j < v29; ++j )
              {
                if ( v28 == v40[j] )
                  break;
              }
              if ( j != v29 )
                goto LABEL_47;
            }
            v13 = (PWCH)(v30 + 4 * v17 - 2);
            if ( !--v14 )
              goto LABEL_47;
          }
        }
        return -1073741275;
      }
      if ( v14 )
      {
        v33 = v7 & 2;
        while ( 1 )
        {
          v34 = RtlDowncaseUnicodeChar_0(*v13);
          if ( v33 )
          {
            if ( v35 )
            {
              do
              {
                if ( v34 == RtlDowncaseUnicodeChar_0(Buffer[v4]) )
                  break;
                ++v4;
              }
              while ( v4 < v35 );
              Length = v38;
            }
            if ( v4 == v35 )
              goto LABEL_76;
          }
          else
          {
            if ( v35 )
            {
              do
              {
                if ( v34 == RtlDowncaseUnicodeChar_0(Buffer[v4]) )
                  break;
                ++v4;
              }
              while ( v4 < v35 );
              Length = v38;
            }
            if ( v4 != v35 )
            {
LABEL_76:
              v5 = NonInclusivePrefixLength;
LABEL_47:
              v16 = v37;
LABEL_27:
              if ( v14 )
              {
                v20 = 2 * v14 - 2;
                if ( !v16 )
                  v20 = Length - v20;
                *v5 = v20;
                return 0;
              }
              return -1073741275;
            }
          }
          v4 = 0;
          v13 = (PWCH)(v36 + 4 * v17 - 2);
          if ( !--v14 )
            goto LABEL_76;
        }
      }
      return -1073741275;
    }
  }
  return result;
}
