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
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, DWORD *a2, __int64 a3, __int64 *a4)
{
  int NameFromLangListNode; // ebx
  wchar_t *Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  wchar_t *v13; // r12
  __int16 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  _UNICODE_STRING v16; // [rsp+38h] [rbp-38h] BYREF
  _UNICODE_STRING v17; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+C0h] [rbp+50h] BYREF

  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  NameFromLangListNode = 0;
  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v17.Buffer = v9;
      *(_DWORD *)&v17.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode((__int64)a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v17);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v17.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, (__int64)a2, 0, v14, v17.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String.Buffer) )
      {
        v20 = 0;
        v16.Buffer = v9 + 170;
        *(_DWORD *)&v16.Length = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback((__int64)a2, Buffer, &v16, &v20);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !v16.Length || v20 )
            break;
          v13 = v16.Buffer;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, (__int64)a2, 0, v14, v16.Buffer);
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback((__int64)a2, v13, &v16, &v20);
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
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)NameFromLangListNode;
}
