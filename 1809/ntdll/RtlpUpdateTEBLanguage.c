/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180080C90
 * Callers:
 *     RtlpInitializeUserList @ 0x18003A98C (RtlpInitializeUserList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003BAA0 (RtlSetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x18003BEF8 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18004CB74 (RtlpMuiRegFreeStringPool.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 *Heap; // rax
  unsigned __int64 *UserPrefLanguages; // rdi
  int v9; // esi
  unsigned __int64 v11; // rcx

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (unsigned __int64 *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (unsigned __int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40);
        RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return v3;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v11 = UserPrefLanguages[1];
  if ( v11 )
    RtlpMuiRegFreeStringPool(v11);
  UserPrefLanguages[1] = a2;
  return v3;
}
