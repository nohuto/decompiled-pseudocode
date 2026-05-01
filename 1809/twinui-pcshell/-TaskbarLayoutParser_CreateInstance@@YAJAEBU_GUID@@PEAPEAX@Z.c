/*
 * XREFs of ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18013EB10
 * Callers:
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18013A8E4 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutParser@@@Z @ 0x18013CBD8 (--$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayout.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutParser_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TaskbarLayoutParser *v8; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutParser,TaskbarLayoutParser,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 233LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(TaskbarLayoutParser *, GUID *, void **))v8)(
         v8,
         &GUID_30c84a96_2f07_4ff0_9553_30ce1f23ccb3,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 234LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v4;
}
