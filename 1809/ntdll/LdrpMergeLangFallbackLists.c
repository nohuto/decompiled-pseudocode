/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18003C708
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007A100 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080700 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003B7E8 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x18003C40C (LdrpCreateLangFallbackList.c)
 *     GetNameFromLangListNode @ 0x18003FAB4 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003FFA4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpLangFallbackListAppendNode @ 0x18004013C (LdrpLangFallbackListAppendNode.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008F224 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A2270 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A2BF0 (NtQueryInstallUILanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EE89C (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  unsigned __int64 *v17; // rbx
  int LangFallbackList; // ebx
  _WORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r13d
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  unsigned __int16 v26; // si
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 *v29; // r14
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  __int64 v33; // rcx
  unsigned int i; // esi
  __int64 v35; // rcx
  __int64 v36; // r9
  char v37; // [rsp+28h] [rbp-79h]
  char v38; // [rsp+28h] [rbp-79h]
  char v39; // [rsp+28h] [rbp-79h]
  char v40; // [rsp+38h] [rbp-69h]
  unsigned __int16 v41; // [rsp+3Ch] [rbp-65h] BYREF
  _WORD v42[2]; // [rsp+40h] [rbp-61h] BYREF
  __int16 v43; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 Heap; // [rsp+48h] [rbp-59h]
  __int16 v45; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 *v46; // [rsp+58h] [rbp-49h]
  int v47; // [rsp+60h] [rbp-41h]
  int v48; // [rsp+68h] [rbp-39h] BYREF
  __int64 v49; // [rsp+70h] [rbp-31h]
  unsigned int v50; // [rsp+78h] [rbp-29h]
  unsigned int v51; // [rsp+7Ch] [rbp-25h]
  unsigned __int64 v52; // [rsp+80h] [rbp-21h] BYREF
  int v53; // [rsp+88h] [rbp-19h]
  __int64 v54; // [rsp+90h] [rbp-11h] BYREF
  __int64 v55; // [rsp+98h] [rbp-9h]
  char v56; // [rsp+E8h] [rbp+47h]

  v56 = a1;
  v54 = 0LL;
  v55 = 0LL;
  v51 = 0;
  v47 = 0;
  v11 = 0LL;
  v42[0] = -1;
  v12 = 0LL;
  v45 = -1;
  v43 = -1;
  v52 = 0LL;
  v40 = 0;
  if ( !a3 || !*(_QWORD *)a3 || !a2 || *(_WORD *)(*(_QWORD *)a3 + 4LL) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v50 = v15;
  }
  else
  {
    v15 = 0;
    v50 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = a3;
  v46 = (unsigned __int64 *)a3;
  if ( !v13 && (v15 & 6) != 0 )
  {
    v40 = 1;
    v51 = HIWORD(v15);
    v46 = &v52;
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&v52, a2, 0x19u, 0);
    if ( LangFallbackList < 0 )
      goto LABEL_54;
    v17 = &v52;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 340LL);
  v20 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v21 = 170LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v19 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v19 )
      {
        v49 = v20;
        v33 = a2;
        v48 = 11141120;
        if ( *(_QWORD *)(a4 + 16) )
          v33 = *(_QWORD *)(a4 + 16);
        if ( (int)GetNameFromLangListNode(v33, v19, &v48) >= 0 )
        {
          LangFallbackList = LdrpLangFallbackListAppendNode((_DWORD)v17, a2, 0, (unsigned int)v42, v49);
          if ( LangFallbackList < 0 )
            goto LABEL_53;
        }
        v20 = Heap;
        v21 = 170LL;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v17) = (_DWORD)v46;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v22 = (int)v46;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v20 = Heap )
      {
        v19 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v19 )
        {
          v49 = v20;
          v35 = a2;
          v48 = 11141120;
          if ( *(_QWORD *)(a5 + 16) )
            v35 = *(_QWORD *)(a5 + 16);
          if ( (int)GetNameFromLangListNode(v35, v19, &v48) >= 0 )
          {
            LangFallbackList = LdrpLangFallbackListAppendNode(v22, a2, 0, (unsigned int)v42, v49);
            if ( LangFallbackList < 0 )
              goto LABEL_53;
          }
        }
        ++i;
      }
    }
  }
  v53 = v56 & 0x20;
  if ( (v56 & 0x20) != 0 && ((v23 = a6) != 0 && *(_WORD *)(a6 + 4) || (v23 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v16 = v23;
    if ( *(_BYTE *)(v23 + 8) )
    {
      v12 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = *(_QWORD *)(a2 + 48);
    }
    v24 = 0;
    if ( *(_WORD *)(v23 + 4) )
    {
      do
      {
        v19 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v24);
        if ( *v19 )
        {
          v49 = Heap;
          v48 = 11141120;
          if ( (int)GetNameFromLangListNode(a2, v19, &v48) >= 0 )
          {
            LOBYTE(v20) = 1;
            if ( (int)LdrpLangFallbackListAppendNode(v22, a2, v20, (unsigned int)v42, v49) >= 0 && (v56 & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(v16 + 24);
              if ( *(_WORD *)(v25 + 6LL * v24) == 2 )
              {
                v19 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v24 + 4));
                if ( (*(_BYTE *)v19 & 7) != 0
                  && ((*(_BYTE *)v19 & 6) == 0
                   || (int)LdrpMergeParentBaseLanguagesToList(v22, (_DWORD)v19, a2, v12, v37) >= 0) )
                {
                  ++v47;
                }
              }
            }
          }
        }
        ++v24;
      }
      while ( v24 < *(unsigned __int16 *)(v16 + 4) );
    }
  }
  v11 = Heap;
  LangFallbackList = 0;
  v41 = 0;
  v26 = 0;
  LODWORD(v54) = 11141120;
  v55 = Heap + 170;
  if ( *(_WORD *)(a2 + 4) )
  {
    v26 = *(_WORD *)(a2 + 4);
  }
  else
  {
    LangFallbackList = NtQueryInstallUILanguage(&v41, v19, v20, v21);
    if ( LangFallbackList >= 0 )
    {
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = v41;
      }
      v26 = v41;
    }
  }
  if ( LangFallbackList < 0 )
    goto LABEL_54;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v26, &v54) )
  {
    LangFallbackList = -1073741823;
    goto LABEL_54;
  }
  LOBYTE(v27) = 1;
  LangFallbackList = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v26, v27, &v43);
  if ( LangFallbackList >= 0 )
  {
    v28 = v55;
    if ( (v56 & 0x40) != 0 || a9 && v47 )
    {
      v29 = (__int64 *)v46;
    }
    else
    {
      v29 = (__int64 *)v46;
      LangFallbackList = LdrpLangFallbackListAppendNode((_DWORD)v46, a2, 0, (unsigned int)&v45, v55);
      if ( LangFallbackList >= 0 )
      {
        if ( v53 )
        {
          v30 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43);
          if ( (*v30 & 6) != 0 )
          {
            if ( !v16 || (LODWORD(v36) = v12, !v12) )
              v36 = *(_QWORD *)(a2 + 40);
            LangFallbackList = LdrpMergeParentBaseLanguagesToList((_DWORD)v29, (_DWORD)v30, a2, v36, v38);
            if ( LangFallbackList < 0 )
              goto LABEL_53;
          }
        }
      }
    }
    if ( v40 )
    {
      if ( v29 )
      {
        LangFallbackList = RtlpFilterandReplaceConsoleLanguages(*v29, a2, (v50 & 4) != 0, v51, a3);
        if ( LangFallbackList >= 0 && (v56 & 0x30) == 0x30 )
        {
          LangFallbackList = LdrpLangFallbackListAppendNode(a3, a2, 0, (unsigned int)&v45, v28);
          if ( LangFallbackList >= 0 )
          {
            v31 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43);
            if ( (*v31 & 6) != 0 )
            {
              if ( !v16 || !v12 )
                v12 = *(_QWORD *)(a2 + 40);
              LangFallbackList = LdrpMergeParentBaseLanguagesToList(a3, (_DWORD)v31, a2, v12, v39);
            }
          }
        }
      }
    }
LABEL_53:
    v11 = Heap;
  }
LABEL_54:
  if ( v52 )
    RtlpMuiRegFreeLanguageList(v52);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)LangFallbackList;
}
