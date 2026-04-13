/*
 * XREFs of ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x18005348C
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180052E24 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005354C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  wchar_t **v4; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = &off_180183660;
  while ( CompareStringOrdinal(a2, -1, *v4, -1, 1) != 2 )
  {
    v4 += 2;
    if ( v4 == (wchar_t **)&unk_180183760 )
      goto LABEL_6;
  }
  v7 = *((int *)v4 + 2);
  if ( (_DWORD)v7 == -1 )
  {
LABEL_6:
    v8 = -2147024809;
    v9 = 93LL;
    goto LABEL_9;
  }
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (char *)this + 24 * v7,
         a3,
         -1LL);
  if ( (v8 & 0x80000000) == 0 )
    return v8;
  v9 = 94LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)v8);
  return v8;
}
