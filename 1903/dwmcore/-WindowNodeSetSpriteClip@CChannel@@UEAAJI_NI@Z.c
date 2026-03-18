/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x180041450
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180041ACC (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180041CD8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180041DB4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800AEF40 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800AEFF0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(
        CChannel *this,
        unsigned __int32 a2,
        __int8 a3,
        unsigned __int32 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v9; // ebx
  _DWORD *v10; // rcx
  int *v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // ebx
  unsigned int v18; // ecx
  int v20; // eax
  __int64 v21; // r8
  int Recorder; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __m128i si128; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v9 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *((_DWORD *)this + 7) || (v11 = (int *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v11) )
    v11 = 0LL;
  if ( !v11 || v11[2] )
  {
    v9 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  else
  {
    v12 = *v11;
    if ( *v11 < 200 )
    {
      while ( v12 )
      {
        if ( v12 == 197 )
          goto LABEL_9;
        v10 = dword_1802D8760;
        v12 = dword_1802D8760[v12];
      }
    }
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024809, 0x1BAu, 0LL);
  }
LABEL_9:
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v9, retaddr, v13);
  if ( a4 )
  {
    v20 = CHandleTable::VerifyHandleTableEntry((char *)this + 16, a4, 62LL);
    if ( v20 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v20, retaddr, v21);
  }
  v14 = *((_QWORD *)this + 20) == 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i8[8] = a3;
  si128.m128i_i32[3] = a4;
  if ( v14 && (Recorder = CChannel::CreateRecorder(this), v17 = Recorder, Recorder < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, Recorder, 0x100u, 0LL);
  }
  else
  {
    v15 = CDataStreamWriter::EnsureSize(*((CDataStreamWriter **)this + 20), 0x14u);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x167u, 0LL);
    if ( v17 >= 0 )
    {
      CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 20));
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), &si128, 0x10u);
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0x106u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v17, 0x99u, 0LL);
LABEL_16:
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v17;
}
