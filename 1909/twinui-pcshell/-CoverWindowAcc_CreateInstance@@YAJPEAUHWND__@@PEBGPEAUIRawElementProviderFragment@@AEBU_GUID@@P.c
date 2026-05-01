/*
 * XREFs of ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1803ED774
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803E8E50 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z @ 0x1803EDD64 (-RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Details@WRL@Microsoft@@YAJPEAPEAVCoverWindowAcc@@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Z @ 0x1803ED534 (--$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragmen.c)
 */

__int64 __fastcall CoverWindowAcc_CreateInstance(
        HWND a1,
        const unsigned __int16 *a2,
        struct IRawElementProviderFragment *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v11; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v12; // [rsp+48h] [rbp+10h] BYREF
  struct IRawElementProviderFragment *v13; // [rsp+50h] [rbp+18h] BYREF
  CoverWindowAcc *v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  v11 = a1;
  v5 = a5;
  v14 = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CoverWindowAcc,CoverWindowAcc,HWND__ * &,unsigned short const * &,IRawElementProviderFragment * &>(
         &v14,
         &v11,
         &v12,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 343LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (**(__int64 (__fastcall ***)(CoverWindowAcc *, GUID *, void **))v14)(
         v14,
         &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 344LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v7;
}
