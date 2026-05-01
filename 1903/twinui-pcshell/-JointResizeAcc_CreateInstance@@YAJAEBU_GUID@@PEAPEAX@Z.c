/*
 * XREFs of ?JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D1C98
 * Callers:
 *     ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x1803D0DA4 (-RuntimeClassInitialize@JointResize@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1803D18D4 (--$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z.c)
 */

__int64 __fastcall JointResizeAcc_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  JointResizeAcc *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<JointResizeAcc,JointResizeAcc,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 250LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(JointResizeAcc *, GUID *, void **))v8)(
         v8,
         &GUID_487f09a7_6896_4cfb_839e_955a7e60713a,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 251LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v4;
}
