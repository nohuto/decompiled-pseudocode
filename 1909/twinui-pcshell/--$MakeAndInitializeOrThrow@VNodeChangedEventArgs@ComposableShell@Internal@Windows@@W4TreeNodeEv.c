/*
 * XREFs of ??$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@wil@@YA?AV?$ComPtr@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAW4TreeNodeEventType@ComposableShell@Internal@Windows@@AEAPEAUITreeNode@567@@Z @ 0x180229910
 * Callers:
 *     ?AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z @ 0x18022D630 (-AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z.c)
 *     ?RemoveChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJI@Z @ 0x180231B30 (-RemoveChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@V1234@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@Details@WRL@Microsoft@@YAJPEAPEAVNodeChangedEventArgs@ComposableShell@Internal@Windows@@$$QEAW4TreeNodeEventType@456@AEAPEAUITreeNode@456@@Z @ 0x180229538 (--$MakeAndInitialize@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@V1234@W4TreeNodeEve.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::NodeChangedEventArgs,enum Windows::Internal::ComposableShell::TreeNodeEventType,Windows::Internal::ComposableShell::ITreeNode * &>(
        __int64 *a1,
        int *a2,
        __int64 *a3)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::NodeChangedEventArgs,Windows::Internal::ComposableShell::NodeChangedEventArgs,enum Windows::Internal::ComposableShell::TreeNodeEventType,Windows::Internal::ComposableShell::ITreeNode * &>(
         a1,
         a2,
         a3);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      27LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  return a1;
}
