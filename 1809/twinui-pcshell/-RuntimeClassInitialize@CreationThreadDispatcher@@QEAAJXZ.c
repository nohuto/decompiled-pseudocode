/*
 * XREFs of ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x18018231C
 * Callers:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18017C094 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180063BE4 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgileRef@01@@Z @ 0x18017BC78 (--$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgile.c)
 *     ??$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncCallbackDispatcher@@@Z @ 0x18017C11C (--$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@.c)
 */

__int64 __fastcall CreationThreadDispatcher::RuntimeClassInitialize(CreationThreadDispatcher *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  char *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<NonAgileDispatcher,IAsyncCallbackDispatcher,>(&v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 63LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v5 = v9;
  v10 = (char *)this + 48;
  v6 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v10);
  v2 = Microsoft::WRL::AsAgile<IAsyncCallbackDispatcher>(v5, v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 64LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v3;
}
