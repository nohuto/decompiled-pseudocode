/*
 * XREFs of ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F441C
 * Callers:
 *     ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x1803E182C (-InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803E5714 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x1803EF4F8 (-InitDropFeedback@JointResize@@AEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1803F3FC0 (--$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DR.c)
 */

__int64 __fastcall CDropFeedback_CreateInstance(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+18h] BYREF
  CDropFeedback *v13; // [rsp+48h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a1;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CDropFeedback,CDropFeedback,IUnknown * &,LAYOUT_ENVIRONMENT_DETAILS const &,enum DROP_FEEDBACK_INIT_FLAGS &>(
         &v13,
         &v11,
         a2,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 949LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (**(__int64 (__fastcall ***)(CDropFeedback *, GUID *, __int64))v13)(
         v13,
         &GUID_19d44858_0fc9_4b74_9696_eca07ae8c37a,
         a5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 950LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v7;
}
