/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x14000E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, char a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CAPOProcessNode::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = v4[5];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    operator delete(v4);
  }
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CProcessNode::`vftable';
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
