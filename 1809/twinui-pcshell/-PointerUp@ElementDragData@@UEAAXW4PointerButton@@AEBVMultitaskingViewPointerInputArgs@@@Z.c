/*
 * XREFs of ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180126EA4 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x18031E7D8 (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18031ED10 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031ED4C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18031EF98 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18031F304 (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 */

void __fastcall ElementDragData::PointerUp(__int64 a1, int a2, const struct MultitaskingViewPointerInputArgs *a3)
{
  float ExternalDragProgress; // xmm0_4
  unsigned int v7; // eax
  _BYTE v8[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9[3]; // [rsp+28h] [rbp-70h] BYREF
  LPVOID v10[10]; // [rsp+40h] [rbp-58h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 184),
    (wil::ActivityThreadWatcher *)v10);
  if ( *(_DWORD *)(a1 + 88) == a2 )
  {
    ElementDragData::DragOver((ElementDragData *)a1, a3);
    if ( *(_DWORD *)(a1 + 496) == 2 )
    {
      *(_DWORD *)(a1 + 88) = 0;
    }
    else
    {
      ExternalDragProgress = ElementDragData::GetExternalDragProgress((ElementDragData *)a1);
      DragAndDropArgs::DragAndDropArgs((__int64)v8, *(_DWORD *)(a1 + 176), *(_QWORD *)(a1 + 24), ExternalDragProgress);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const struct MultitaskingViewPointerInputArgs *))(**(_QWORD **)(a1 + 40) + 472LL))(
             *(_QWORD *)(a1 + 40),
             v8,
             a3);
      ElementDragData::FinishDrag(a1, v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
    }
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(v10);
}
