/*
 * XREFs of ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1801007E4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1800FFFF8 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??0EdgyProcessor@@QEAA@XZ @ 0x180100690 (--0EdgyProcessor@@QEAA@XZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180102A74 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessor::Create(EdgyConnection ***a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  EdgyProcessor *v4; // rax
  EdgyProcessor *v5; // rbx
  EdgyConnection **v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  EdgyConnection **v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a1 )
  {
    v4 = (EdgyProcessor *)RefCountedObject::operator new(0x80uLL);
    v5 = v4;
    v10 = (EdgyConnection **)v4;
    if ( v4 )
    {
      memset_0(v4, 0, 0x80uLL);
      v6 = (EdgyConnection **)EdgyProcessor::EdgyProcessor(v5);
    }
    else
    {
      v6 = 0LL;
    }
    v10 = v6;
    if ( v6 )
    {
      v7 = EdgyConnection::Initialize(v6[13]);
      v2 = v7;
      if ( v7 >= 0 )
      {
        EdgeGestureMetrics::Initialize();
        v2 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
          (const char *)(unsigned int)v7);
      }
      if ( v2 >= 0 )
      {
        v10 = 0LL;
        *a1 = v6;
        v2 = 0;
        goto LABEL_15;
      }
      v3 = 62LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 60LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 57LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
    (const char *)(unsigned int)v2);
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v2;
}
