/*
 * XREFs of ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180054E20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180054F88 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180056DE8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180056EC4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B7B10 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B7BC0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::WindowNodeSetDxClip(CChannel *this, unsigned int a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v7; // ebx
  _DWORD *v8; // rcx
  int *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  unsigned int v15; // ecx
  int Recorder; // eax
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // ecx
  _DWORD v22[10]; // [rsp+30h] [rbp-28h] BYREF
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
        v8 = dword_1802D6870;
        v10 = dword_1802D6870[v10];
      }
    }
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024809, 0x1BAu, 0LL);
  }
LABEL_9:
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v7, retaddr, v11);
  if ( a3 )
  {
    v19 = CHandleTable::VerifyHandleTableEntry((char *)this + 16, a3, 62LL);
    if ( v19 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v19, retaddr, v20);
  }
  v22[0] = 524;
  v22[1] = a2;
  v22[2] = a3;
  if ( *((_QWORD *)this + 20) || (Recorder = CChannel::CreateRecorder(this), v14 = Recorder, Recorder >= 0) )
  {
    v12 = CDataStreamWriter::EnsureItem(*((CDataStreamWriter **)this + 20), 0xCu);
    v14 = v12;
    if ( v12 >= 0 )
    {
      CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 20));
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), v22, 0xCu);
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x106u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, Recorder, 0x100u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v14, 0x99u, 0LL);
LABEL_14:
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v14;
}
