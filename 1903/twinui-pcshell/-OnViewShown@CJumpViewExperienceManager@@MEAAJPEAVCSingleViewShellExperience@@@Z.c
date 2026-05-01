/*
 * XREFs of ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@456@@Z @ 0x18019A42C (--$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@-$.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x18019A500 (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@She.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18019B2F4 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x18019B9E8 (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18019E5B0 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x18019E9B4 (-TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewShown(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  HSTRING v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  volatile signed __int64 *v8; // [rsp+20h] [rbp-168h] BYREF
  HSTRING v9; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v10[320]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  JumpViewProvider::ShowJumpViewActivity::TransferToCurrentThread((char *)this + 448, v10);
  v3 = (HSTRING)*((_QWORD *)this + 35);
  v8 = 0LL;
  v9 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
         &v8,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<Windows::Internal::ComposableShell::TreeNodeBase *,Windows::Internal::ComposableShell::NodeChangedEventArgs *>(
           (__int64)this + 8,
           (__int64)this - 64,
           (__int64)v8);
    v5 = v4;
    if ( v4 >= 0 )
    {
      CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout((CJumpViewExperienceManager *)((char *)this - 64));
      wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 462LL;
  }
  else
  {
    v6 = 461LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v10);
  return v5;
}
