/*
 * XREFs of ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180303B80
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007FCAC (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1802FB878 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1803036A4 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180305808 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x180305950 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::DragOver(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int128 v8; // xmm0
  __int64 (__fastcall *v9)(__int64 *, __int64 *); // rax
  char v10; // al
  int v11; // ecx
  __int64 *v12; // rax
  struct IMultitaskingViewElement *v13; // r8
  struct IUnknown *v14; // rcx
  struct IMultitaskingViewElement *v15; // r14
  unsigned int v16; // eax
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rax
  _BYTE v21[32]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v22; // [rsp+48h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h]
  int v24; // [rsp+60h] [rbp-11h]
  struct IMultitaskingViewElement *v25[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v26; // [rsp+78h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+77h] BYREF

  v27 = *((_DWORD *)a3 + 4);
  v4 = 0;
  v28 = *a3;
  v5 = *a1;
  *(_OWORD *)v25 = 0LL;
  v8 = *(_OWORD *)a3;
  v23 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 112);
  v22 = 0LL;
  v24 = 0;
  v26 = v8;
  v10 = v9(a1, &v28);
  v11 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( v10 )
    v11 = 2;
  LODWORD(v22) = v11;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v25, a1 + 16);
  v28 = *a3;
  v12 = (__int64 *)CMultitaskingViewElementBase::_HitTestChildren(a1, &v29, &v28);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v25[1], v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v14 = (struct IUnknown *)a1[17];
  v15 = v25[1];
  if ( v14 && !ElementHelpers::IsSameElement(v14, (struct IUnknown *)v25[1], v13) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[17] + 464LL))(a1[17]);
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*a1 + 616))(a1, a2, a3);
  if ( v15 )
  {
    v17 = v16 == -1;
    if ( v16 != -1 )
      goto LABEL_10;
    v18 = *(_QWORD *)v15;
    v19 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v21, a3);
    v16 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64, __int64))(v18 + 456))(v15, a2, v19);
  }
  v17 = v16 == -1;
LABEL_10:
  if ( !v17 )
    v4 = v16;
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)(a1 + 12), (__int64)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
  return v4;
}
