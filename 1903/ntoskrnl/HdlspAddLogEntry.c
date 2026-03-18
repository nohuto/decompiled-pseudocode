/*
 * XREFs of HdlspAddLogEntry @ 0x14098BAE0
 * Callers:
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     wcscmp @ 0x1401A1F50 (wcscmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  void *v2; // r12
  __int64 v3; // rax
  SIZE_T v4; // rbx
  PVOID PoolWithTag; // rax
  PVOID v6; // r14
  KIRQL v7; // si
  PKSPIN_LOCK v8; // rdi
  __int16 v9; // bp
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // bp
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _OWORD SystemInformation[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL) < 0 )
      memset(SystemInformation, 0, sizeof(SystemInformation));
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x736C6448u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Src, v4);
    if ( (HeadlessGlobals[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v8 = HeadlessGlobals;
    v9 = *((_WORD *)HeadlessGlobals + 48);
    *((_DWORD *)HeadlessGlobals + 12) |= 4u;
    v10 = *((_WORD *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == v10 )
    {
      v12 = *(const wchar_t **)(56LL * v10 + v8[2] + 48);
      v13 = wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n");
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
      v2 = (void *)((unsigned __int64)v12 & -(__int64)(v13 != 0));
    }
    else if ( v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v14 = 56LL * v11;
    v15 = v8[2];
    *(_OWORD *)(v14 + v15) = SystemInformation[0];
    *(_OWORD *)(v14 + v15 + 16) = SystemInformation[1];
    *(_OWORD *)(v14 + v15 + 32) = SystemInformation[2];
    if ( v6 )
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = v6;
    else
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = L"Entry could not be rec"
                                                                                                   "orded due to lack of memory.\n";
    if ( v7 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v7);
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
