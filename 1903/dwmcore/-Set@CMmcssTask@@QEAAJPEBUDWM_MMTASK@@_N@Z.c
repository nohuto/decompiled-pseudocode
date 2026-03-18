/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800D0964
 * Callers:
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800D07FC (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800D0AF4 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?CreateManipulationThread@CGlobalManipulationManager@@EEAAJXZ @ 0x1800DF5C0 (-CreateManipulationThread@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1800E047C (-Initialize@CMit@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800D0BA8 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D0BD4 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800D0C18 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800D0CD8 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(struct _RTL_CRITICAL_SECTION *this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // edi
  const struct DWM_MMTASK *v4; // rsi
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rax
  signed int Runtime; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  _DWORD *p_Type; // rcx
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = this;
  v3 = 0;
  v4 = 0LL;
  EnterCriticalSection(this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( !CMmcssTask::AreEqualMmTask(&this[1].DebugInfo->Type, (LPCWCH)v4) )
  {
    if ( this[1].DebugInfo )
      CMmcssTask::Revert((CMmcssTask *)this);
    if ( !v4 )
    {
      p_Type = &this[1].DebugInfo->Type;
      goto LABEL_23;
    }
    DebugInfo = this[1].DebugInfo;
    if ( !DebugInfo )
    {
      Runtime = CMmcssTask::LoadRuntime((CMmcssTask *)this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Runtime, 0xBCu, 0LL);
        goto LABEL_13;
      }
      DebugInfo = (struct _RTL_CRITICAL_SECTION_DEBUG *)operator new(0x90uLL);
      this[1].DebugInfo = DebugInfo;
      if ( !DebugInfo )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0xC0u, 0LL);
LABEL_19:
        p_Type = &this[1].DebugInfo->Type;
        if ( !p_Type )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          p_Type[33] = 0;
          goto LABEL_5;
        }
LABEL_23:
        operator delete(p_Type);
        this[1].DebugInfo = 0LL;
        goto LABEL_5;
      }
    }
    *(_OWORD *)&DebugInfo->Type = *(_OWORD *)v4;
    DebugInfo->ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v4 + 1);
    *(_OWORD *)&DebugInfo->EntryCount = *((_OWORD *)v4 + 2);
    *(_OWORD *)&DebugInfo[1].Type = *((_OWORD *)v4 + 3);
    DebugInfo[1].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v4 + 4);
    *(_OWORD *)&DebugInfo[1].EntryCount = *((_OWORD *)v4 + 5);
    *(_OWORD *)&DebugInfo[2].Type = *((_OWORD *)v4 + 6);
    DebugInfo[2].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v4 + 7);
    *(_OWORD *)&DebugInfo[2].EntryCount = *((_OWORD *)v4 + 8);
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
    if ( a3 )
    {
      v13 = CMmcssTask::Apply((CMmcssTask *)this, 0);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xCCu, 0LL);
    }
LABEL_13:
    if ( v3 >= 0 )
      goto LABEL_5;
    goto LABEL_19;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return 0LL;
}
