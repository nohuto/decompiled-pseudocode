/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1405F6840
 * Callers:
 *     NtQueryInformationAtom @ 0x1406AF1F0 (NtQueryInformationAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1400892A0 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x14019ADA0 (_snwprintf_s.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlpLockAtomTable @ 0x1405F647C (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405F6614 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  ULONG v11; // r14d
  ULONG v12; // esi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned int v15; // edi
  ULONG v16; // eax
  NTSTATUS v17; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+60h] [rbp-68h] BYREF

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v11 = *NameLength & 0xFFFFFFFE;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
    {
      v17 = 0;
      if ( RefCount )
        *RefCount = 1;
      if ( PinCount )
        *PinCount = 1;
      if ( AtomName )
      {
        v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
        if ( v12 >= v11 )
        {
          if ( v11 < 2 )
            v12 = 0;
          else
            v12 = v11 - 2;
        }
        if ( v12 )
        {
          memmove(AtomName, DstBuf, v12);
          AtomName[(unsigned __int64)v12 >> 1] = 0;
          *NameLength = v12;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
    else
    {
      v17 = -1073741811;
    }
    goto LABEL_37;
  }
  v17 = -1073741816;
  v13 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
  v14 = v13;
  if ( !v13 || *(_WORD *)(v13 + 10) != Atom || !RtlpLookupLowBox((__int64)AtomTable, v13, 0) )
    goto LABEL_37;
  v17 = 0;
  if ( RefCount )
    *RefCount = *(unsigned __int16 *)(v14 + 36);
  if ( PinCount )
    *PinCount = *(unsigned __int16 *)(v14 + 38);
  if ( !AtomName )
    goto LABEL_37;
  v15 = 2 * *(unsigned __int8 *)(v14 + 40);
  if ( EvaluateCurrentState((_DWORD **)&g_Feature_2683562299_61252281_FeatureDescriptorDetails) )
  {
    if ( v15 < v11 )
      goto LABEL_34;
    if ( v11 >= 2 )
    {
      v15 = v11 - 2;
      goto LABEL_34;
    }
  }
  else
  {
    v16 = *NameLength;
    if ( v15 < *NameLength )
      goto LABEL_34;
    if ( v16 >= 2 )
    {
      v15 = v16 - 2;
      goto LABEL_34;
    }
  }
  *NameLength = v15;
  v15 = 0;
LABEL_34:
  if ( v15 )
  {
    memmove(AtomName, (const void *)(v14 + 42), v15);
    AtomName[(unsigned __int64)v15 >> 1] = 0;
    *NameLength = v15;
  }
  else
  {
    v17 = -1073741789;
  }
LABEL_37:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v17;
}
