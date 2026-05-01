/*
 * XREFs of ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031ED4C
 * Callers:
 *     ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031F630 (-PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031F6A0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031FBE0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x18031E7D8 (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18031F304 (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18031F388 (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x18031FE6C (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 */

void __fastcall ElementDragData::DragOver(ElementDragData *this, const struct MultitaskingViewPointerInputArgs *a2)
{
  bool v2; // cc
  float ExternalDragProgress; // xmm0_4
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+5Ch] [rbp-14h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]

  v2 = *((_DWORD *)this + 124) < 2;
  *(_OWORD *)((char *)this + 92) = *(_OWORD *)a2;
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 4);
  if ( v2 )
  {
    ExternalDragProgress = ElementDragData::GetExternalDragProgress(this);
    DragAndDropArgs::DragAndDropArgs((__int64)&v14, *((_DWORD *)this + 44), *((_QWORD *)this + 3), ExternalDragProgress);
    (*(void (__fastcall **)(_QWORD, __int64 *, const struct MultitaskingViewPointerInputArgs *))(**((_QWORD **)this + 5)
                                                                                               + 456LL))(
      *((_QWORD *)this + 5),
      &v14,
      a2);
    v6 = *((_QWORD *)this + 6);
    v13 = v14;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v16);
  v7 = *(_QWORD *)a2;
  v8 = *(_QWORD *)a2;
  v12 = v7;
  if ( (int)v7 >= v18 )
    v8 = v18;
  if ( v16 <= v8 )
  {
    v9 = v12;
    if ( (int)v7 >= v18 )
      v9 = v18;
    LODWORD(v12) = v9;
  }
  else
  {
    LODWORD(v12) = v16;
  }
  v10 = v19;
  v11 = HIDWORD(v12);
  if ( SHIDWORD(v12) < v19 )
    v10 = HIDWORD(v12);
  if ( v17 <= v10 )
  {
    if ( SHIDWORD(v12) >= v19 )
      v11 = v19;
    HIDWORD(v12) = v11;
  }
  else
  {
    HIDWORD(v12) = v17;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    &v12,
    0LL,
    0LL);
  if ( *((_DWORD *)this + 124) == 1 && (*((_BYTE *)this + 176) & 2) != 0 && ElementDragData::IsExternalDrag(this) )
    ElementDragData::StartExternalDrag(this);
}
