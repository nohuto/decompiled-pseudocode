/*
 * XREFs of ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180297110
 * Callers:
 *     <none>
 * Callees:
 *     ?BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z @ 0x18026A634 (-BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z.c)
 *     ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180295588 (--$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180297620 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::BoostPriority(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rsi
  bool v3; // al
  __int16 v4; // dx
  int v5; // ebp
  int v6; // ebx
  char v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 18) + 280LL);
  AcquireSRWLockExclusive(v2);
  v3 = (*((_DWORD *)this + 18) & 0x40) != 0;
  v8 = 1;
  v9 = v3;
  ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
    (int *)this + 31,
    (__int64)&v9,
    (__int64)&v8);
  v4 = *((_WORD *)this + 166);
  v5 = *((_DWORD *)this + 18) & 0x40;
  *((_DWORD *)this + 18) |= 0xC0u;
  if ( (v4 & 0xC0) != 0xC0 )
  {
    *((_WORD *)this + 166) = v4 | 0xC0;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)((char *)this - 24));
  }
  v6 = 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  LOBYTE(v6) = v5 != 0;
  ViewEventDispatcher::BoostShellPriority(*((RTL_SRWLOCK **)this + 18), v6);
  return 0LL;
}
