/*
 * XREFs of ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x18018783C
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x180185CCC (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::CDrawListEntry(CDrawListEntry *this, const struct DrawListEntryParams *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rax

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 2);
  *((_OWORD *)this + 2) = _xmm;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = *(_DWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 16) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (_OWORD *)*((_QWORD *)a2 + 3);
  if ( v5 )
    *((_OWORD *)this + 2) = *v5;
  return this;
}
