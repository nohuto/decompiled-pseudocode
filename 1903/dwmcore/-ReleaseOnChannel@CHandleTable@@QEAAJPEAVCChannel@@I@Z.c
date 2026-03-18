/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18003FA2C
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18003F960 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18003FE48 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180041CD8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800AEF40 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800AEFF0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18015B3FC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, CDataStreamWriter **a2, unsigned int a3)
{
  int v6; // ebx
  _DWORD *v7; // rdi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int Recorder; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp+Ch]

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a3 || a3 >= *((_DWORD *)this + 3) || (v7 = (_DWORD *)(a3 * *((_DWORD *)this + 2) + *((_QWORD *)this + 3)), !*v7) )
    v7 = 0LL;
  if ( !v7 || (v8 = v7[1]) == 0 )
  {
    v6 = -2147418113;
    MilUnexpectedError(-2147418113, L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147418113, 0x162u, 0LL);
    goto LABEL_16;
  }
  if ( *v7 )
  {
    if ( v8 != 1 )
    {
LABEL_15:
      v7[1] = v8 - 1;
      goto LABEL_16;
    }
    v18 = 46;
    v19 = a3;
    if ( a2[20] || (Recorder = CChannel::CreateRecorder((CChannel *)a2), v6 = Recorder, Recorder >= 0) )
    {
      v9 = CDataStreamWriter::EnsureItem(a2[20], 8u);
      v6 = v9;
      if ( v9 >= 0 )
      {
        CDataStreamWriter::BeginItem(a2[20]);
        CDataStreamWriter::AddItemData(a2[20], &v18, 8u);
LABEL_11:
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x77u, 0LL);
        else
          CDataStreamWriter::EndItem(a2[20]);
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v6, 0x16Fu, 0LL);
          goto LABEL_16;
        }
        v7[2] = *((_DWORD *)a2 + 3);
        *((_DWORD *)a2 + 3) = a3;
        v8 = v7[1];
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x106u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Recorder, 0x100u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v6, 0x99u, 0LL);
    goto LABEL_11;
  }
LABEL_16:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v6;
}
