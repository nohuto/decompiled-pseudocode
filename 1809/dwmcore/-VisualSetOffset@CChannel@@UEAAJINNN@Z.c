/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18009AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800584C0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18009AC70 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009AD64 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v8; // ebp
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  unsigned int v11; // ecx
  struct CCommandBatch **v12; // rdi
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v19; // ecx
  _DWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  double v21; // [rsp+38h] [rbp-40h]
  _QWORD v22[2]; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2
    || a2 >= *((_DWORD *)this + 7)
    || (v10 = (_DWORD *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v10) )
  {
    v10 = 0LL;
  }
  if ( !v10 || v10[2] )
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024890, 0x1B9u);
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(2147942406LL, retaddr);
  v12 = (struct CCommandBatch **)((char *)this + 160);
  v20[1] = a2;
  v13 = 0;
  v21 = a3;
  *(double *)v22 = a4;
  *(double *)&v22[1] = a5;
  v20[0] = 422;
  if ( !*v12 )
  {
    v14 = CCommandBatch::Create(v11, v12);
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v14, 0x11Au);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v13, 0xFFu);
  }
  else
  {
    v15 = CDataStreamWriter::EnsureSize(*v12, 0x24u);
    v13 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x159u);
    if ( v13 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v12);
      CDataStreamWriter::AddItemData(*v12, v20, 0x20u);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v13, 0x104u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v13, 0x9Au);
LABEL_15:
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v13, 0x78u);
  else
    CDataStreamWriter::EndItem(*v12);
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v13;
}
