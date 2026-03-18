/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1405EBE50
 * Callers:
 *     NtQueryInformationAtom @ 0x1406CF4E0 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14001D074 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1401A54D0 (_snwprintf_s.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC0E0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  struct _KTHREAD *CurrentThread; // rax
  _EX_PUSH_LOCK *p_PushLock; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // esi
  ULONG v14; // eax
  unsigned int v15; // r14d
  ULONG v16; // eax
  char v17; // bl
  NTSTATUS v19; // [rsp+30h] [rbp-98h]
  wchar_t DstBuf[16]; // [rsp+60h] [rbp-68h] BYREF

  if ( !AtomTable || AtomTable->Signature != 1836020801 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_PushLock = &AtomTable->PushLock;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AtomTable->PushLock, 0LL);
  if ( Atom >= 0xC000u )
  {
    v19 = -1073741816;
    v11 = RtlpAtomMapAtomToHandleEntry(AtomTable, Atom & 0x3FFF);
    v12 = v11;
    if ( !v11 || *(_WORD *)(v11 + 10) != Atom || !RtlpLookupLowBox((__int64)AtomTable, v11, 0) )
      goto LABEL_33;
    v19 = 0;
    if ( RefCount )
      *RefCount = *(unsigned __int16 *)(v12 + 36);
    if ( PinCount )
      *PinCount = *(unsigned __int16 *)(v12 + 38);
    if ( !AtomName )
      goto LABEL_33;
    v13 = 2 * *(unsigned __int8 *)(v12 + 40);
    v14 = *NameLength;
    if ( v13 >= *NameLength )
    {
      if ( v14 < 2 )
      {
        *NameLength = v13;
LABEL_32:
        v19 = -1073741789;
        goto LABEL_33;
      }
      v13 = v14 - 2;
    }
    if ( v13 )
    {
      memmove(AtomName, (const void *)(v12 + 42), v13);
      AtomName[(unsigned __int64)v13 >> 1] = 0;
      *NameLength = v13;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( !Atom )
  {
    v19 = -1073741811;
    goto LABEL_33;
  }
  v19 = 0;
  if ( RefCount )
    *RefCount = 1;
  if ( PinCount )
    *PinCount = 1;
  if ( !AtomName )
    goto LABEL_33;
  v15 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
  v16 = *NameLength;
  if ( v15 >= *NameLength )
  {
    if ( v16 < 2 )
      goto LABEL_30;
    v15 = v16 - 2;
  }
  if ( !v15 )
  {
LABEL_30:
    v19 = -1073741789;
    goto LABEL_33;
  }
  memmove(AtomName, DstBuf, v15);
  AtomName[(unsigned __int64)v15 >> 1] = 0;
  *NameLength = v15;
LABEL_33:
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)p_PushLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_PushLock);
  KeAbPostRelease((ULONG_PTR)p_PushLock);
  KeLeaveCriticalRegion();
  return v19;
}
