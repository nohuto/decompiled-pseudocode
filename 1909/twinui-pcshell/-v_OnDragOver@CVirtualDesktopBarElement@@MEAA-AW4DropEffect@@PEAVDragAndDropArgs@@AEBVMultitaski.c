/*
 * XREFs of ?v_OnDragOver@CVirtualDesktopBarElement@@MEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180390420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopBarElement::v_OnDragOver(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _DWORD *v7; // rax
  int v8; // edx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 752);
  v5 = *a3;
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 120LL))(a1, &v11);
  v10 = v5;
  v8 = v5 + *v7;
  HIDWORD(v10) = v7[1] + HIDWORD(v5);
  LODWORD(v10) = v8;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 112LL))(v4, &v10) )
    *a2 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 736) + 32LL))(
                       *(_QWORD *)(a1 + 736),
                       &v10);
  return 0xFFFFFFFFLL;
}
