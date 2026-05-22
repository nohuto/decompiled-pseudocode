/*
 * XREFs of ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800A1790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SipcEndpoint::UnmapBuffer(SipcEndpoint *this, void *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
  if ( (_DWORD)result == -2147024809 )
  {
    v5 = *((_QWORD *)this + 12);
    if ( v5 )
      return (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(v5 + 96) + 40LL))(*(_QWORD *)(v5 + 96), a2);
  }
  return result;
}
