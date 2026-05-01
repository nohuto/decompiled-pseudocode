/*
 * XREFs of ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180383EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803837D0 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x180385AAC (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::Drop(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx
  _BYTE v11[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+4Ch] [rbp-34h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  _OWORD v17[2]; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+78h] [rbp-8h]
  int v19; // [rsp+7Ch] [rbp-4h]

  (*(void (__fastcall **)(_QWORD *))(*a1 + 456LL))(a1);
  v6 = (__int64 *)a1[17];
  if ( !v6
    || (v7 = *v6,
        v8 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v11, a3),
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v7 + 472))(v6, a2, v8),
        v9 == -1) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 632LL))(a1, a2, a3);
  }
  v16 = 0;
  v19 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 0;
  v12 = 0LL;
  memset(v17, 0, sizeof(v17));
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)(a1 + 12), (__int64)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  return v9;
}
