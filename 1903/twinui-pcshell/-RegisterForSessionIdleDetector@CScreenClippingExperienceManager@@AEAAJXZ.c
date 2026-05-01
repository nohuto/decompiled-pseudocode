/*
 * XREFs of ?RegisterForSessionIdleDetector@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1980
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801B1CDC (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::RegisterForSessionIdleDetector(
        CScreenClippingExperienceManager *this)
{
  __int64 v1; // rdi
  _QWORD *v2; // r14
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, _QWORD *); // rbx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 38);
  v2 = (_QWORD *)((char *)this + 312);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, _QWORD *))(*(_QWORD *)v1 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  v5 = v4(v1, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, v2);
  if ( v5 < 0 )
  {
    v6 = 1104LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 32LL))(
         *v2,
         (char *)this + 40,
         (char *)this + 320);
  if ( v5 < 0 )
  {
    v6 = 1106LL;
    goto LABEL_3;
  }
  return 0LL;
}
