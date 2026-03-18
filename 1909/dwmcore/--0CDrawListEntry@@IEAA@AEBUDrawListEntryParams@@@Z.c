/*
 * XREFs of ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x1801BAE04
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801B8F40 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::CDrawListEntry(CDrawListEntry *this, const struct DrawListEntryParams *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // xmm0_8

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 2);
  *((_OWORD *)this + 2) = _xmm;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = *(_DWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 17) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (_OWORD *)*((_QWORD *)a2 + 3);
  if ( v5 )
    *((_OWORD *)this + 2) = *v5;
  v6 = (__int64 *)*((_QWORD *)a2 + 4);
  if ( v6 )
  {
    v7 = *v6;
    *((_DWORD *)this + 33) |= 0x400u;
    *((_QWORD *)this + 6) = v7;
  }
  return this;
}
