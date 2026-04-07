/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_0ed26c2d60f45c7a306e72635e386859___ @ 0x18004AF18
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004AE40 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_0ed26c2d60f45c7a306e72635e386859___(
        __int64 a1,
        __int64 **a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // r8
  void (__fastcall **v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(a1 + 608) + 8 * i);
    v6 = **a2;
    v7 = *v5;
    v8 = *(_QWORD *)(v6 + 400);
    if ( (*(_BYTE *)(v6 + 608) & 1) != 0 )
      (*v7)(v5, v8);
    else
      v7[1](v5, v8);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
}
