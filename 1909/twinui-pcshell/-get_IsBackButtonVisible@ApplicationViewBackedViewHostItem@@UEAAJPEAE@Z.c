/*
 * XREFs of ?get_IsBackButtonVisible@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x18023CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017B8F8 (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_IsBackButtonVisible(
        ApplicationViewBackedViewHostItem *this,
        bool *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v7 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>((_QWORD *)this + 26, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7) != 0;
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
