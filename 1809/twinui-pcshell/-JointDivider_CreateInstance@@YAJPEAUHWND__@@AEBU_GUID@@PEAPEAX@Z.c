/*
 * XREFs of ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180364224
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x180354DE8 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x180354CF4 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChrome@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChrome@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803639F8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_1803639F8.c)
 *     ??0JointDivider@@QEAA@XZ @ 0x180363A98 (--0JointDivider@@QEAA@XZ.c)
 */

__int64 __fastcall JointDivider_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  JointDivider *v5; // rax
  JointDivider *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // r10
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  JointDivider *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v15);
  v15 = 0LL;
  v5 = (JointDivider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v10 = -2147024882;
    v12 = 351LL;
    v11 = 2147942414LL;
    goto LABEL_5;
  }
  v6 = JointDivider::JointDivider(v5);
  v16 = v6;
  *((_QWORD *)v6 + 11) = a1;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
    (__int64)v6,
    v7);
  v15 = v8;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v16);
  v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChrome>>(
         v15,
         &GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f,
         a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 352LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)v11);
  }
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v15);
  return v10;
}
