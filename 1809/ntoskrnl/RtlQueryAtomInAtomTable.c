/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1405F5840
 * Callers:
 *     NtQueryInformationAtom @ 0x1406ADF50 (NtQueryInformationAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1400892B0 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x14019AC60 (_snwprintf_s.c)
 *     EvaluateCurrentState @ 0x1401B3694 (EvaluateCurrentState.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     RtlpLockAtomTable @ 0x1405F547C (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405F5614 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  ULONG v11; // edi
  unsigned int v12; // esi
  ULONG v13; // eax
  PRTL_ATOM_TABLE v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  bool v17; // zf
  unsigned int v18; // edi
  ULONG v19; // eax
  NTSTATUS v20; // [rsp+34h] [rbp-84h]
  wchar_t DstBuf[16]; // [rsp+58h] [rbp-60h] BYREF

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v11 = *NameLength & 0xFFFFFFFE;
  if ( Atom >= 0xC000u )
  {
    v20 = -1073741816;
    v15 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    v16 = v15;
    if ( v15 )
    {
      v17 = *(_WORD *)(v15 + 10) == Atom;
      v14 = AtomTable;
      if ( v17 && RtlpLookupLowBox((__int64)AtomTable, v15, 0) )
      {
        v20 = 0;
        if ( RefCount )
          *RefCount = *(unsigned __int16 *)(v16 + 36);
        if ( PinCount )
          *PinCount = *(unsigned __int16 *)(v16 + 38);
        if ( AtomName )
        {
          v18 = 2 * *(unsigned __int8 *)(v16 + 40);
          v19 = *NameLength;
          if ( v18 >= *NameLength )
          {
            if ( v19 < 2 )
            {
              *NameLength = v18;
              v18 = 0;
            }
            else
            {
              v18 = v19 - 2;
            }
          }
          if ( v18 )
          {
            memmove(AtomName, (const void *)(v16 + 42), v18);
            AtomName[(unsigned __int64)v18 >> 1] = 0;
            *NameLength = v18;
          }
          else
          {
            v20 = -1073741789;
          }
        }
      }
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  if ( Atom )
  {
    v20 = 0;
    if ( RefCount )
      *RefCount = 1;
    if ( PinCount )
      *PinCount = 1;
    if ( AtomName )
    {
      v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
      if ( EvaluateCurrentState((_DWORD **)&g_Feature_1466904891_59803019_FeatureDescriptorDetails) )
      {
        if ( v12 < v11 )
          goto LABEL_19;
        if ( v11 >= 2 )
        {
          v12 = v11 - 2;
          goto LABEL_19;
        }
      }
      else
      {
        v13 = *NameLength;
        if ( v12 < *NameLength )
          goto LABEL_19;
        if ( v13 >= 2 )
        {
          v12 = v13 - 2;
          goto LABEL_19;
        }
      }
      v12 = 0;
LABEL_19:
      if ( v12 )
      {
        memmove(AtomName, DstBuf, v12);
        AtomName[(unsigned __int64)v12 >> 1] = 0;
        *NameLength = v12;
      }
      else
      {
        v20 = -1073741789;
      }
      goto LABEL_22;
    }
LABEL_38:
    v14 = AtomTable;
    goto LABEL_39;
  }
  v20 = -1073741811;
LABEL_22:
  v14 = AtomTable;
LABEL_39:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v14->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v14->PushLock);
  KeAbPostRelease((ULONG_PTR)&v14->PushLock);
  KeLeaveCriticalRegion();
  return v20;
}
