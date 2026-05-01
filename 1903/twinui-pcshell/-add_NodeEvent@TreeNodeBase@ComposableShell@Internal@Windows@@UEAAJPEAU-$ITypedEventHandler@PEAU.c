/*
 * XREFs of ?add_NodeEvent@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180216900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1801422DC (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180209778 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUI.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::add_NodeEvent(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3,
        const char *a4)
{
  __int64 v6; // rsi
  int v7; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1 + 64;
  if ( a2 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>>(
           a2,
           (__int64 *)&v10);
    if ( v7 >= 0 )
    {
      if ( v10 )
        v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               v6,
               v10,
               *(void **)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v7 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    v7 = -2147024809;
  }
  try
  {
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        276LL,
        (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
        (const char *)(unsigned int)v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x117,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           a4);
  }
  return result;
}
