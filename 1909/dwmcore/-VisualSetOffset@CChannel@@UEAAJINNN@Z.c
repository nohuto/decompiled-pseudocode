/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800566F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180056BDC (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180057188 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B7B10 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B7BC0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v8; // esi
  _DWORD *v9; // rcx
  int *v10; // rdx
  int v11; // eax
  __int64 v12; // r8
  int v13; // esi
  unsigned int v14; // ecx
  _DWORD *v15; // rdx
  __int64 v16; // r8
  float v17; // xmm0_4
  CDataStreamWriter **v18; // rdi
  float v19; // xmm1_4
  PSLIST_ENTRY v20; // rax
  unsigned int v21; // ecx
  struct _SLIST_ENTRY *Next; // rdx
  PSLIST_ENTRY v23; // rcx
  struct _SLIST_ENTRY **v24; // r8
  PSLIST_ENTRY v25; // r9
  struct _SLIST_ENTRY **v26; // r10
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // ebx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  _DWORD v36[8]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( a2
    && a2 < *((_DWORD *)this + 7)
    && (v10 = (int *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), (v11 = *v10) != 0)
    && v10
    && !v10[2] )
  {
    if ( v11 < 200 && v11 )
    {
      v9 = dword_1802D6870;
      while ( v11 != 189 )
      {
        v11 = dword_1802D6870[v11];
        if ( !v11 )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, -2147024809, 0x1BAu, 0LL);
    }
  }
  else
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v8, retaddr, v12);
  v13 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2
    || a2 >= *((_DWORD *)this + 7)
    || (v15 = (_DWORD *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v15)
    || !v15
    || v15[2] )
  {
    v13 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v13 < 0 )
    ModuleFailFastForHRESULT(2147942406LL, retaddr, v16);
  v36[0] = 494;
  v17 = a3;
  v36[1] = a2;
  v18 = (CDataStreamWriter **)((char *)this + 160);
  *(float *)&v36[2] = v17;
  v19 = a4;
  *(float *)&v36[4] = a5;
  *(float *)&v36[3] = v19;
  if ( !*((_QWORD *)this + 20) )
  {
    v20 = InterlockedPopEntrySList((PSLIST_HEADER)(*((_QWORD *)this + 6) + 192LL));
    if ( v20 )
    {
      Next = v20[-4].Next;
      v23 = v20 - 4;
      if ( Next != &v20[-4] )
      {
        v24 = (struct _SLIST_ENTRY **)*((_QWORD *)&v23->Next + 1);
        if ( *(&Next->Next + 1) != v23
          || *v24 != v23
          || (*v24 = Next,
              v25 = v23 + 1,
              *((_QWORD *)&Next->Next + 1) = v24,
              v26 = (struct _SLIST_ENTRY **)*((_QWORD *)&v23[1].Next + 1),
              *(&v23[1].Next->Next + 1) != &v23[1])
          || *v26 != v25
          || *(&Next->Next->Next + 1) != Next
          || *v24 != Next )
        {
          __fastfail(3u);
        }
        *v26 = Next;
        *((_QWORD *)&v23[1].Next + 1) = *((_QWORD *)&Next->Next + 1);
        **((_QWORD **)&Next->Next + 1) = v25;
        *((_QWORD *)&Next->Next + 1) = v26;
      }
      *((_QWORD *)&v23->Next + 1) = v23;
      v23->Next = v23;
      v23[2].Next = 0LL;
      *((_QWORD *)&v23[2].Next + 1) = 0LL;
      v23[3].Next = 0LL;
      *((_DWORD *)&v23[3].Next + 2) = 0;
      *v18 = (CDataStreamWriter *)v23;
    }
    else
    {
      v27 = CCommandBatch::Create(v21, (struct CCommandBatch **)this + 20);
      v29 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x20Bu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v29, 0x11Cu, 0LL);
      }
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v29, 0x100u, 0LL);
        goto LABEL_50;
      }
    }
  }
  v30 = CDataStreamWriter::EnsureSize(*v18, 0x18u);
  v29 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x167u, 0LL);
  if ( v29 >= 0 )
  {
    CDataStreamWriter::BeginItem(*v18);
    CDataStreamWriter::AddItemData(*v18, v36, 0x14u);
    goto LABEL_33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v29, 0x106u, 0LL);
LABEL_50:
  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v29, 0x99u, 0LL);
LABEL_33:
  if ( v29 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v29, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(*v18);
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v29;
}
