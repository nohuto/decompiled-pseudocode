/*
 * XREFs of ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x180024510
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x1800245C0 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall AnimationDataProvider::RuntimeClassInitialize(AnimationDataProvider *this)
{
  int v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  char *v5; // rbx
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v11);
  v2 = CoreUICreate(&v11);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v2,
      v9[0]);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v4);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    *(_QWORD *)v9 = 0LL;
    v5 = (char *)this + 16;
    v6 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 2);
    v9[2] = 1;
    if ( v6 )
    {
      *(_QWORD *)v5 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v6);
    }
    v7 = Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
           v11,
           v9,
           v3,
           (char *)this + 16);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x48,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
      __debugbreak();
    }
    *(_QWORD *)(*(_QWORD *)v5 + 152LL) = this;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v11);
  return 0LL;
}
