/*
 * XREFs of LdrpConvertLangFallbackListToMultiSz @ 0x18003F6C8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007A110 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080710 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008BBE0 (RtlGetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x18003F8D8 (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x18007E868 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall LdrpConvertLangFallbackListToMultiSz(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int *a4,
        char a5,
        char a6,
        int *a7)
{
  _UNKNOWN **v7; // rax
  unsigned int v8; // ebx
  unsigned int *v9; // r14
  __int64 v12; // r9
  unsigned int v13; // ecx
  char v14; // bp
  unsigned int v15; // r8d
  int v16; // edx
  unsigned __int16 v17; // r13
  unsigned int v18; // r14d
  int v19; // edx
  int appended; // eax
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int16 v25; // [rsp+30h] [rbp-78h]
  char v26[4]; // [rsp+34h] [rbp-74h] BYREF
  int v27; // [rsp+38h] [rbp-70h]
  int v28; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v29; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-64h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  v7 = &retaddr;
  v8 = 0;
  v9 = a4;
  v29 = 0;
  v12 = a2;
  v13 = 0;
  v14 = 0;
  if ( !v9 )
    return 3221225485LL;
  if ( !a1 )
  {
    if ( a3 )
    {
      if ( *v9 < 2 )
        v8 = -1073741789;
      else
        *a3 = 0;
    }
    *v9 = 2;
    return v8;
  }
  v15 = *v9;
  v16 = 0;
  v30 = *v9;
  v17 = 0;
  v27 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_12;
  LOBYTE(v7) = a6;
  v28 = (int)v7;
  v18 = v15;
  do
  {
    if ( !(_BYTE)v7 )
    {
      v19 = a2;
      goto LABEL_7;
    }
    v23 = *(_QWORD *)(a1 + 24);
    if ( *(_WORD *)(v23 + 6LL * v17) == 2 )
    {
      v25 = *(_WORD *)(v23 + 6LL * v17 + 4);
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(*(_QWORD *)(v12 + 24), 2LL, v25, v26) >= 0 )
      {
        v19 = a2;
        if ( a5 < 0 )
        {
          v24 = (unsigned __int8)v28;
          if ( (*(_DWORD *)(28LL * (__int16)v25 + *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)) & 6) != 0 )
            v24 = 0;
          v28 = v24;
        }
LABEL_7:
        appended = RtlpMuiRegTryToAppendLanguageToMuiszFromLangList(
                     (a5 & 4) != 0,
                     v19,
                     *(_DWORD *)(a1 + 24) + 6 * (unsigned int)v17,
                     (unsigned int)&v29,
                     (__int64)a3,
                     v18);
        if ( appended >= 0 )
          goto LABEL_8;
        if ( appended == -1073741789 )
        {
          v14 = 1;
LABEL_8:
          v16 = ++v27;
LABEL_9:
          v12 = a2;
          goto LABEL_10;
        }
      }
      v16 = v27;
      goto LABEL_9;
    }
LABEL_10:
    LOBYTE(v7) = v28;
    ++v17;
  }
  while ( v17 < *(_WORD *)(a1 + 4) );
  v13 = v29;
  v9 = a4;
  v15 = v30;
LABEL_12:
  if ( a3 )
  {
    if ( v13 >= v15 )
      v14 = 1;
    else
      *((_WORD *)a3 + v13) = 0;
  }
  v21 = v13 + 1;
  if ( !v16 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v21 >= v15 )
        v14 = 1;
      else
        *((_WORD *)a3 + v21) = 0;
    }
    LODWORD(v21) = v21 + 1;
  }
  *v9 = v21;
  result = v14 != 0 ? 0xC0000023 : 0;
  if ( a7 )
    *a7 = v16;
  return result;
}
