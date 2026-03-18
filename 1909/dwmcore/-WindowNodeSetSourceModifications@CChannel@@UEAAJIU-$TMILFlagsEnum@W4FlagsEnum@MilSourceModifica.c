/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK_N@Z @ 0x180056260
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180056BDC (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180056DE8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B7B10 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B7BC0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v11; // esi
  _DWORD *v12; // rcx
  int *v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // ebx
  unsigned int v20; // ecx
  int Recorder; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+3Ch] [rbp-2Ch]
  int v28; // [rsp+40h] [rbp-28h]
  int v29; // [rsp+44h] [rbp-24h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *((_DWORD *)this + 7) || (v13 = (int *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v13) )
    v13 = 0LL;
  if ( !v13 || v13[2] )
  {
    v11 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  else
  {
    v14 = *v13;
    if ( *v13 < 200 )
    {
      while ( v14 )
      {
        if ( v14 == 197 )
          goto LABEL_9;
        v12 = dword_1802D6870;
        v14 = dword_1802D6870[v14];
      }
    }
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, -2147024809, 0x1BAu, 0LL);
  }
LABEL_9:
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v11, retaddr, v15);
  v25 = 529LL;
  v16 = *((_QWORD *)this + 20) == 0LL;
  v28 = a5;
  v29 = a6;
  HIDWORD(v25) = a2;
  v26 = a3;
  v27 = a4;
  if ( v16 && (Recorder = CChannel::CreateRecorder(this), v19 = Recorder, Recorder < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, Recorder, 0x100u, 0LL);
  }
  else
  {
    v17 = CDataStreamWriter::EnsureSize(*((CDataStreamWriter **)this + 20), 0x1Cu);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x167u, 0LL);
    if ( v19 >= 0 )
    {
      CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 20));
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), &v25, 0x18u);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0x106u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v19, 0x99u, 0LL);
LABEL_15:
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v19;
}
