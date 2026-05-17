/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x1800423A4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetNeutralFallback @ 0x18003BDDC (RtlGetNeutralFallback.c)
 *     GetNameFromLangListNode @ 0x18003FAB4 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x18004013C (LdrpLangFallbackListAppendNode.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046030 (RtlpGetSystemDefaultUILanguage.c)
 *     _wcsicmp @ 0x1800918E0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int NameFromLangListNode; // ebx
  __int64 Heap; // rax
  unsigned __int64 v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  const WCHAR *v13; // r12
  __int16 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+40h] [rbp-30h]
  UNICODE_STRING v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  char v22; // [rsp+C0h] [rbp+50h] BYREF

  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  v19 = 0LL;
  String2 = 0LL;
  NameFromLangListNode = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 510LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  LODWORD(v19) = 11141120;
  String2 = (wchar_t *)(Heap + 170);
  if ( (int)RtlpGetSystemDefaultUILanguage(&v15, a2) >= 0 && RtlLCIDToCultureName(v15, (__int64)&v19) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v18.Buffer = (wchar_t *)v9;
      *(_DWORD *)&v18.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v18);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v18.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, a2, 0, v14, v18.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String2) )
      {
        v22 = 0;
        v17 = (const WCHAR *)(v9 + 340);
        LODWORD(v16) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, (__int64)&v16, &v22);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v22 )
            break;
          v13 = v17;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, a2, 0, v14, v17);
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v13, (__int64)&v16, &v22);
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
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)NameFromLangListNode;
}
