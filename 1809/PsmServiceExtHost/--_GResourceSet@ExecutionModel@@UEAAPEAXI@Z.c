/*
 * XREFs of ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180019980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180047C58 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::`scalar deleting destructor'(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 **v5; // rsi
  __int64 *v6; // rdi
  char *v7; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  v4 = *((_QWORD *)this + 229);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  v5 = (__int64 **)((char *)this + 160);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v9 = (__int64 *)v6[1];
    v10 = *v6;
    *v9 = *v6;
    *(_QWORD *)(v10 + 8) = v9;
    v11 = v6[2];
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    operator delete(v6);
  }
  *((_QWORD *)this + 22) = 0LL;
  v7 = (char *)*((_QWORD *)this + 4);
  if ( v7 != (char *)this + 48 )
    operator delete(v7);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
