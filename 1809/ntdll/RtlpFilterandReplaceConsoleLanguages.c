/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x18003B7E8
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003AB74 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x18003C40C (LdrpCreateLangFallbackList.c)
 *     GetNameFromLangListNode @ 0x18003FAB4 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x18004013C (LdrpLangFallbackListAppendNode.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5)
{
  int NameFromLangListNode; // ebx
  unsigned int v10; // edi
  wchar_t *v11; // rbx
  int appended; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // r15d
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[4]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t *String2; // [rsp+40h] [rbp-C0h]
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[176]; // [rsp+60h] [rbp-A0h] BYREF

  BaseAddress = 0LL;
  memset(v22, 0, 0xAAuLL);
  v16 = 0;
  v18 = 0LL;
  String2 = 0LL;
  *(_QWORD *)&v21.Length = 0LL;
  v21.Buffer = 0LL;
  if ( !a1 || !a2 || !a5 || !*(_QWORD *)a5 )
    return 3221225485LL;
  NameFromLangListNode = LdrpCreateLangFallbackList(&BaseAddress, a2, 25LL, 0LL);
  if ( NameFromLangListNode >= 0 )
  {
    v10 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_13:
      v13 = BaseAddress;
      v14 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        do
        {
          LODWORD(v18) = 11141120;
          String2 = (wchar_t *)v22;
          NameFromLangListNode = GetNameFromLangListNode(a2, v13[3] + 6LL * v14, &v18);
          if ( NameFromLangListNode < 0 )
            break;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, (unsigned int)v17, (__int64)String2);
          ++v14;
        }
        while ( v14 < *((unsigned __int16 *)v13 + 2) );
      }
      goto LABEL_14;
    }
    while ( 1 )
    {
      LODWORD(v18) = 11141120;
      String2 = (wchar_t *)v22;
      NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a1 + 24) + 6LL * v10, &v18);
      if ( NameFromLangListNode < 0 )
        break;
      v11 = String2;
      v21.Buffer = 0LL;
      *(_DWORD *)&v21.Length = 0;
      if ( (int)RtlpConsoleFallbackNameFromLocaleName(String2, a3, &v16, &v21, a2, a4) >= 0 && v16 )
        appended = LdrpLangFallbackListAppendNode(
                     (unsigned int)&BaseAddress,
                     a2,
                     0,
                     (unsigned int)v17,
                     (__int64)v21.Buffer);
      else
        appended = LdrpLangFallbackListAppendNode(a5, a2, 0, (unsigned int)v17, (__int64)v11);
      NameFromLangListNode = appended;
      if ( appended < 0 )
        break;
      if ( ++v10 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  v13 = BaseAddress;
LABEL_14:
  if ( v13 )
    RtlpMuiRegFreeLanguageList(v13);
  if ( NameFromLangListNode < 0 )
  {
    if ( *(_QWORD *)a5 )
      *(_WORD *)(*(_QWORD *)a5 + 4LL) = 0;
  }
  return (unsigned int)NameFromLangListNode;
}
