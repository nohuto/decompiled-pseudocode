/*
 * XREFs of ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x140001B10
 * Callers:
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400034E0 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140001B90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140001BD4 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessMemoryManager::RuntimeClassInitialize(
        CCrossProcessMemoryManager *this,
        const unsigned __int16 *a2)
{
  unsigned int v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  HLOCAL v7; // rdx
  HLOCAL v8; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HLOCAL hMem; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  hMem = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &hMem,
    0LL);
  v5 = CreateSecurityDescriptor(a2, v4, &hMem);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = hMem;
    hMem = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (char *)this + 40,
      v7);
    v8 = hMem;
    *((_QWORD *)this + 3) = *((_QWORD *)this + 5);
    if ( v8 )
      LocalFree(v8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
    (const char *)(unsigned int)v5,
    v10);
  if ( hMem )
    LocalFree(hMem);
  return v6;
}
