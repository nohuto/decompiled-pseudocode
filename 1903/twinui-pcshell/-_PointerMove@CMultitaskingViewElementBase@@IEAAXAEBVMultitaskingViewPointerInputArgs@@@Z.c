/*
 * XREFs of ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180366258
 * Callers:
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803650F0 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180365350 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x180365520 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180366160 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x180366654 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007CB58 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18035C188 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180362678 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x180363EA4 (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x180363F74 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1803660A8 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1803661EC (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 */

void __fastcall CMultitaskingViewElementBase::_PointerMove(CMultitaskingViewElementBase *this, struct tagPOINT *a2)
{
  __int128 v4; // xmm1
  LONG x; // eax
  int v6; // r12d
  int v7; // r15d
  char v8; // al
  int v9; // ecx
  __int64 *v10; // rax
  struct IMultitaskingViewElement *v11; // r8
  ElementHelpers *v12; // rdi
  struct IMultitaskingViewElement *v13; // r8
  ElementHelpers *v14; // rbx
  ElementHelpers **v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  struct tagPOINT v19; // rbx
  int SystemMetrics; // edi
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // [rsp+20h] [rbp-99h] BYREF
  struct tagPOINT v24; // [rsp+28h] [rbp-91h] BYREF
  _DWORD v25[2]; // [rsp+30h] [rbp-89h] BYREF
  __int128 v26; // [rsp+38h] [rbp-81h]
  int v27; // [rsp+48h] [rbp-71h]
  ElementHelpers *v28[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v29; // [rsp+60h] [rbp-59h]
  LONG v30; // [rsp+70h] [rbp-49h]
  char v31[4]; // [rsp+80h] [rbp-39h] BYREF
  int v32; // [rsp+84h] [rbp-35h]
  __int128 v33; // [rsp+88h] [rbp-31h]
  int v34; // [rsp+98h] [rbp-21h]
  __int64 v35; // [rsp+A0h] [rbp-19h] BYREF
  ElementHelpers *v36; // [rsp+A8h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+D0h] [rbp+17h] BYREF

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v31,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  v4 = *(_OWORD *)&a2->x;
  x = a2[2].x;
  v6 = v32;
  v7 = v34;
  v25[0] = 0;
  *(_OWORD *)v28 = 0LL;
  v30 = x;
  v29 = v4;
  v26 = v33;
  v25[1] = v32;
  v27 = v34;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v28, &v35);
  v23 = (_QWORD *)*a2;
  v8 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, _QWORD **))(*(_QWORD *)this + 112LL))(this, &v23);
  v9 = v25[0];
  if ( v8 )
    v9 = 1;
  v23 = (_QWORD *)*a2;
  v25[0] = v9;
  v10 = CMultitaskingViewElementBase::_HitTestChildren(this, (__int64 *)&v24, (__int64 *)&v23);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v28[1], v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  v12 = v28[0];
  if ( v28[0] && !ElementHelpers::IsSameElement((struct IUnknown *)v28[0], (struct IUnknown *)v28[1], v11) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28[1]);
    v12 = v28[0];
  }
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v25);
  v14 = v36;
  if ( v36 && !ElementHelpers::IsSameElement((struct IUnknown *)v36, (struct IUnknown *)v28[1], v13) )
    (*(void (__fastcall **)(ElementHelpers *))(*(_QWORD *)v14 + 216LL))(v14);
  v23 = 0LL;
  v15 = &v28[1];
  if ( v12 )
    v15 = v28;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v23, (__int64 *)v15);
  v16 = v23;
  if ( v23 )
  {
    v17 = *v23;
    v18 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)&rc, (__int64 *)a2);
    (*(void (__fastcall **)(_QWORD *, __int64))(v17 + 200))(v16, v18);
  }
  else if ( v6 )
  {
    if ( v7 )
    {
      v19 = (struct tagPOINT)v33;
      *(_QWORD *)&rc.left = v33;
      rc.right = v33 + 1;
      rc.bottom = DWORD1(v33) + 1;
      SystemMetrics = GetSystemMetrics(69);
      v21 = GetSystemMetrics(68);
      InflateRect(&rc, v21, SystemMetrics);
      v24 = *a2;
      if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v24) )
      {
        v22 = *(_QWORD *)this;
        v24 = v19;
        (*(void (__fastcall **)(CMultitaskingViewElementBase *, struct tagPOINT *))(v22 + 640))(this, &v24);
        *(_OWORD *)((char *)this + 104) = 0LL;
        *((_DWORD *)this + 30) = 0;
      }
    }
  }
  (*(void (__fastcall **)(CMultitaskingViewElementBase *, struct tagPOINT *))(*(_QWORD *)this + 560LL))(this, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
}
