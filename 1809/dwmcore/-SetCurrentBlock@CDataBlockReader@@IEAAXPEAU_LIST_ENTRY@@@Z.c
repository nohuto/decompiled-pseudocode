/*
 * XREFs of ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x18009C638
 * Callers:
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C48C (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C5C4 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDataBlockReader::SetCurrentBlock(CDataBlockReader *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rax

  v2 = a2 - 8;
  v4 = -a2;
  v5 = v2 & -(__int64)(v4 != 0);
  *((_QWORD *)this + 1) = v5;
  v6 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v4);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  *((_DWORD *)this + 8) = v6;
  *((_QWORD *)this + 2) = v7;
  *((_QWORD *)this + 3) = v7;
}
