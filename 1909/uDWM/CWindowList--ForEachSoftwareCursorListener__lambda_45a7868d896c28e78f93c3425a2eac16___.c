/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_45a7868d896c28e78f93c3425a2eac16___ @ 0x18004CE7C
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012890 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_45a7868d896c28e78f93c3425a2eac16___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 8LL))(v5, *(_QWORD *)(**(_QWORD **)a2 + 400LL));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
