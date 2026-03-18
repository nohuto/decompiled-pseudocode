/*
 * XREFs of ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x1800412D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180041ACC (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180041CD8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800AEF40 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800AEFF0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::WindowNodeSetAlphaMargins(CChannel *this, unsigned int a2, const struct _MARGINS *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // ebx
  _DWORD *v8; // rcx
  int *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  unsigned int v16; // ecx
  int Recorder; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  _DWORD v21[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v22; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v7 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *((_DWORD *)this + 7) || (v9 = (int *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v9) )
    v9 = 0LL;
  if ( !v9 || v9[2] )
  {
    v7 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  else
  {
    v10 = *v9;
    if ( *v9 < 200 )
    {
      while ( v10 )
      {
        if ( v10 == 197 )
          goto LABEL_9;
        v8 = dword_1802D8760;
        v10 = dword_1802D8760[v10];
      }
    }
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024809, 0x1BAu, 0LL);
  }
LABEL_9:
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v7, retaddr, v11);
  v12 = (__int128)*a3;
  v21[0] = 520;
  v22 = v12;
  v21[1] = a2;
  if ( *((_QWORD *)this + 20) || (Recorder = CChannel::CreateRecorder(this), v15 = Recorder, Recorder >= 0) )
  {
    v13 = CDataStreamWriter::EnsureSize(*((CDataStreamWriter **)this + 20), 0x1Cu);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x167u, 0LL);
    if ( v15 >= 0 )
    {
      CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 20));
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), v21, 0x18u);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x106u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, Recorder, 0x100u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v15, 0x99u, 0LL);
LABEL_15:
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v15;
}
