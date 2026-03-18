/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A598
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800625D0 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x180089A48 (-Initialize@CMit@@AEAAJXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18008A384 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A9BC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18007AD94 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18008A114 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x18008AA70 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008ACCC (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(const struct DWM_MMTASK **this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // edi
  const struct DWM_MMTASK *v4; // rsi
  const struct DWM_MMTASK *v9; // rax
  int Runtime; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  const struct DWM_MMTASK *v15; // rcx
  CMmcssTask *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = (CMmcssTask *)this;
  v3 = 0;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( !CMmcssTask::AreEqualMmTask(this[5], v4) )
  {
    if ( this[5] )
      CMmcssTask::Revert((CMmcssTask *)this);
    if ( !v4 )
    {
      v15 = this[5];
LABEL_18:
      WPF::ProcessHeapImpl::Free(v15);
      this[5] = 0LL;
      goto LABEL_5;
    }
    v9 = this[5];
    if ( !v9 )
    {
      Runtime = CMmcssTask::LoadRuntime((CMmcssTask *)this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Runtime, 0xBFu);
        goto LABEL_13;
      }
      v9 = (const struct DWM_MMTASK *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
      this[5] = v9;
      if ( !v9 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0xC8u);
LABEL_20:
        v15 = this[5];
        if ( !v15 )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          *((_DWORD *)v15 + 33) = 0;
          goto LABEL_5;
        }
        goto LABEL_18;
      }
    }
    *(_OWORD *)v9 = *(_OWORD *)v4;
    *((_OWORD *)v9 + 1) = *((_OWORD *)v4 + 1);
    *((_OWORD *)v9 + 2) = *((_OWORD *)v4 + 2);
    *((_OWORD *)v9 + 3) = *((_OWORD *)v4 + 3);
    *((_OWORD *)v9 + 4) = *((_OWORD *)v4 + 4);
    *((_OWORD *)v9 + 5) = *((_OWORD *)v4 + 5);
    *((_OWORD *)v9 + 6) = *((_OWORD *)v4 + 6);
    *((_OWORD *)v9 + 7) = *((_OWORD *)v4 + 7);
    *((_OWORD *)v9 + 8) = *((_OWORD *)v4 + 8);
    *((_QWORD *)this[5] + 17) = 0LL;
    if ( a3 )
    {
      v13 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)this, 0);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD4u);
    }
LABEL_13:
    if ( v3 >= 0 )
      goto LABEL_5;
    goto LABEL_20;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return 0LL;
}
