/*
 * XREFs of ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x180385AAC
 * Callers:
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180383D00 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180383EF0 (-Drop@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingVie.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803849B0 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180384A60 (-PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180384C50 (-PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInput.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180385B18 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A2A20 (-v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?v_PreHover@CVirtualDesktopContainerElement@@MEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A2A80 (-v_PreHover@CVirtualDesktopContainerElement@@MEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::_MapArgumentsToChild(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _DWORD *v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3[1];
  v5 = *a3;
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 120LL))(a1, &v10);
  *(_QWORD *)(a2 + 8) = v4;
  HIDWORD(v9) = v7[1] + HIDWORD(v5);
  LODWORD(v9) = v5 + *v7;
  *(_QWORD *)a2 = v9;
  *(_DWORD *)(a2 + 16) = *((_DWORD *)a3 + 4);
  return a2;
}
