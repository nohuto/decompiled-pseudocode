/*
 * XREFs of ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1803D3170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___ @ 0x1803D23A8 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f7.c)
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x1803D3230 (-Solidify@GhostDivider@@UEAAXXZ.c)
 */

__int64 __fastcall GhostDivider::Show(GhostDivider *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v13 = 0LL;
  AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___(v5, v4, v6, &v13);
  v9 = AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9;
  if ( AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9 < 0 )
  {
    v10 = 128LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9);
    goto LABEL_9;
  }
  AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(**((_QWORD **)a1 + 7) + 32LL))(*((_QWORD **)a1 + 7), v8, 4 * (a2 & 1u), v13);
  v9 = AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9;
  if ( AnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9 < 0 )
  {
    v10 = 131LL;
    goto LABEL_5;
  }
  if ( (a2 & 2) != 0 )
    GhostDivider::Solidify(a1);
  v9 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v9;
}
