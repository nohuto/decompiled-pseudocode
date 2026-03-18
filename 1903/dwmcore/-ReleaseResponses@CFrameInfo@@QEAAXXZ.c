/*
 * XREFs of ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800A4BC0
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800A4B20 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18018D120 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameInfo::ReleaseResponses(CFrameInfo *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 292); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 143) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  *((_DWORD *)this + 292) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1144, 8LL);
}
