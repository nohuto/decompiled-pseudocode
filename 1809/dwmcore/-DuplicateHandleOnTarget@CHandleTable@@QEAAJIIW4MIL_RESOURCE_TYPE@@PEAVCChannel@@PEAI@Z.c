/*
 * XREFs of ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180097038
 * Callers:
 *     ?DuplicateHandleOnTarget@CChannel@@UEAAJIIW4Enum@DwmResourceType@@PEAI@Z @ 0x18001FC60 (-DuplicateHandleOnTarget@CChannel@@UEAAJIIW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x180096F40 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009A330 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009A96C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CHandleTable::DuplicateHandleOnTarget(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        CChannel *a5,
        _DWORD *a6)
{
  CChannel *v9; // r14
  int NewEntry; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // edi
  unsigned int v14; // ecx
  struct CHandleTable::HANDLE_ENTRY *Entry; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  _DWORD *v18; // rax
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v21[6]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  v22 = a1;
  v20 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  v9 = a5;
  LODWORD(v22) = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((CChannel *)((char *)a5 + 16), a4, (unsigned int *)&v22);
  v12 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, NewEntry, 0x10Au);
  }
  else
  {
    v13 = v22;
    Entry = CHandleTable::GetEntry((CChannel *)((char *)v9 + 16), v22);
    if ( Entry )
    {
      v21[0] = 52;
      v21[1] = a2;
      v21[2] = a3;
      v21[3] = v13;
      v16 = CChannel::SendCommand(v9, v21, 0x10u);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x128u);
        memset_0(
          (void *)(*((_QWORD *)v9 + 5) + (unsigned int)(v13 * *((_DWORD *)v9 + 6))),
          0,
          *((unsigned int *)v9 + 6));
      }
      else
      {
        v18 = a6;
        *((_DWORD *)Entry + 1) = 1;
        *v18 = v13;
      }
    }
    else
    {
      v12 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024890, 0x113u);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return v12;
}
