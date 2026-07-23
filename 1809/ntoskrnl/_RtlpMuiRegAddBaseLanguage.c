/*
 * XREFs of _RtlpMuiRegAddBaseLanguage @ 0x1409089EC
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140908FF8 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpLangNameInMultiSzString @ 0x14073F9B8 (RtlpLangNameInMultiSzString.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14073FDC0 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140760068 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140908318 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpMuiRegAddBaseLanguage(__int64 a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *a5)
{
  __int16 v5; // bx
  char v8; // r15
  wchar_t *v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // r9
  wchar_t *Buffer; // r8
  __int64 v13; // r9
  int v14; // r12d
  int v15; // r13d
  int LanguageSpec; // eax
  char v17; // di
  __int16 v18; // r12
  int v19; // ecx
  int v20; // eax
  __int16 v21; // r8
  wchar_t *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _WORD *v25; // rcx
  char v27; // [rsp+30h] [rbp-61h] BYREF
  char v28; // [rsp+31h] [rbp-60h]
  __int16 v29[2]; // [rsp+34h] [rbp-5Dh] BYREF
  char v30; // [rsp+38h] [rbp-59h] BYREF
  char v31; // [rsp+39h] [rbp-58h]
  int v32; // [rsp+3Ch] [rbp-55h] BYREF
  int v33; // [rsp+40h] [rbp-51h]
  wchar_t *Str2; // [rsp+48h] [rbp-49h]
  int inited; // [rsp+50h] [rbp-41h]
  signed int v36; // [rsp+54h] [rbp-3Dh]
  __int64 v37; // [rsp+58h] [rbp-39h]
  _WORD *v38; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  _WORD v40[2]; // [rsp+78h] [rbp-19h] BYREF
  __int16 v41; // [rsp+7Ch] [rbp-15h]
  __int16 v42; // [rsp+7Eh] [rbp-13h]
  __int16 v43; // [rsp+80h] [rbp-11h]
  _WORD v44[10]; // [rsp+84h] [rbp-Dh] BYREF

  v5 = 0;
  v36 = a3;
  v38 = a2;
  v37 = a1;
  v8 = 0;
  Str2 = a5;
  v27 = 0;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v9 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v9 || (v28 = 1, !*v9) )
      v28 = 0;
    v10 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    LOWORD(v32) = *(_WORD *)(a4 + 2 * v10 + 20);
    *(_WORD *)(a4 + 2 * v10 + 20) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v29[0] = 0;
    if ( v28 )
    {
      Buffer = DestinationString.Buffer;
      v9[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      inited = RtlpMuiRegInitAnyLanguage(a1, (__int64)v40, Buffer, 1026);
      v14 = inited;
      if ( inited < 0 )
        return (unsigned int)v14;
      v31 = 0;
      v40[0] ^= (LOBYTE(v40[0]) ^ (unsigned __int8)*v38) & 0x18;
      *(_WORD *)(a4 + 2 * v10 + 20) = v32;
      v15 = 0;
      if ( Str2 && *Str2 && RtlpLangNameInMultiSzString(v9, Str2) )
      {
        LanguageSpec = RtlpMuiRegGetLanguageSpec(v37, Str2, &v30, v13, (__int16 *)&v32);
        v17 = v30;
        if ( LanguageSpec < 0 )
        {
          v33 = (unsigned __int16)v32;
        }
        else
        {
          v15 = 1;
          v31 = 1;
          v33 = (unsigned __int16)v32;
          v44[0] = v32;
          v43 = v43 & 0xFFFC | v30 & 3;
        }
      }
      else
      {
        v33 = 0;
        v17 = 0;
      }
      if ( v9 )
      {
        v18 = v33;
        v19 = 2 * v15;
        v32 = 2 * v15;
        Str2 = &v44[v15];
        do
        {
          if ( !*v9 || v19 >= 8 )
            break;
          v20 = RtlpMuiRegGetLanguageSpec(v37, v9, &v27, v13, v29);
          v8 = v27;
          v5 = v29[0];
          if ( v20 < 0 || v31 && v17 == v27 && v18 == v29[0] )
          {
            v19 = v32;
          }
          else
          {
            ++v15;
            v19 = v32 + 2;
            v21 = ((v27 & 3) << v32) | v43 & ~(3 << v32);
            v32 += 2;
            v22 = Str2;
            v43 = v21;
            *Str2 = v29[0];
            Str2 = v22 + 1;
          }
          v23 = -1LL;
          do
            ++v23;
          while ( v9[v23] );
          v9 += v23 + 1;
        }
        while ( v9 );
        v14 = inited;
      }
      if ( v15 < 0 )
      {
        v5 = v41;
        if ( v41 )
        {
          v8 = 1;
LABEL_43:
          v24 = v36;
          v25 = v38;
          v38[4] = v38[4] & ~(3 << (2 * v36)) | ((v8 & 3) << (2 * v36));
          v25[v24 + 6] = v5;
          return (unsigned int)v14;
        }
        v5 = v42;
        if ( v42 > 0 )
        {
          v8 = 3;
          goto LABEL_43;
        }
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v14 = RtlpMuiRegGetLanguageSpec(a1, DestinationString.Buffer, &v27, v11, v29);
      if ( v14 < 0 )
        return (unsigned int)v14;
      v8 = v27;
      v5 = v29[0];
    }
    if ( !v28 )
      goto LABEL_43;
    v40[0] &= ~0x20u;
    v14 = RtlpMuiRegGetOrAddLangInfo((__int64 *)(v37 + 24), (__int64)v40, v29);
    if ( v14 >= 0 )
    {
      v5 = v29[0];
      v8 = 2;
      goto LABEL_43;
    }
    return (unsigned int)v14;
  }
  return 3221225485LL;
}
