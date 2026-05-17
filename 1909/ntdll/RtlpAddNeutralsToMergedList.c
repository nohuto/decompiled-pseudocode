/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180013124
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlGetNeutralFallback @ 0x180013008 (RtlGetNeutralFallback.c)
 *     GetNameFromLangListNode @ 0x180015F28 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x180016590 (LdrpLangFallbackListAppendNode.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180073650 (RtlpGetSystemDefaultUILanguage.c)
 *     _wcsicmp @ 0x18008E870 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r14d
  int NameFromLangListNode; // ebx
  __int64 Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *v11; // r12
  const WCHAR *v13; // r12
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+40h] [rbp-30h]
  _DWORD v18[2]; // [rsp+48h] [rbp-28h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-20h]
  _DWORD v20[2]; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  char v23; // [rsp+C0h] [rbp+50h] BYREF

  v18[1] = 0;
  v4 = (int)a4;
  v20[1] = 0;
  v16 = 0LL;
  v17 = 0LL;
  NameFromLangListNode = 0;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 510LL);
  v9 = (wchar_t *)Heap;
  if ( !Heap )
    return 3221225495LL;
  v20[0] = 11141120;
  String2 = (wchar_t *)(Heap + 170);
  if ( (int)RtlpGetSystemDefaultUILanguage(&v15, a2) >= 0 && (unsigned __int8)RtlLCIDToCultureName(v15, v20) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      String1 = v9;
      v18[0] = 11141120;
      NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a3 + 24) + 6LL * i, v18);
      if ( NameFromLangListNode < 0 )
        break;
      v11 = String1;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)v14, (__int64)String1);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(v11, String2) )
      {
        v23 = 0;
        v17 = v9 + 170;
        LODWORD(v16) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, v11, (__int64)&v16, &v23);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v23 )
            break;
          v13 = v17;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)v14, (__int64)v17);
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v13, (__int64)&v16, &v23);
        }
        while ( NameFromLangListNode >= 0 );
        if ( NameFromLangListNode < 0 )
          break;
      }
    }
  }
  else
  {
    NameFromLangListNode = -1073741823;
  }
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
  return (unsigned int)NameFromLangListNode;
}
