/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___ @ 0x18004CDFC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 16LL))(
      v5,
      *(_QWORD *)(*(_QWORD *)*a2 + 400LL),
      a2[1]);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
