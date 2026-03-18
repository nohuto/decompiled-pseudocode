/*
 * XREFs of ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18014583C
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180077F38 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180145594 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

void __fastcall CChannelTable::DestroyHandle(struct _RTL_CRITICAL_SECTION *this, unsigned int a2)
{
  int MasterTableEntry; // eax
  __int64 v5; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v6; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)this, a2, &v6);
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, MasterTableEntry, 0x4Fu);
  }
  else
  {
    CloseHandle(*((HANDLE *)v6 + 2));
    memset_0((char *)this->LockSemaphore + a2 * this->LockCount, 0, (unsigned int)this->LockCount);
    --LODWORD(this->SpinCount);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
}
