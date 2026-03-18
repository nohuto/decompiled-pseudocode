/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x180041034
 * Callers:
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1800402B0 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x180040FA0 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 * Callees:
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x180040F70 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180041BE8 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180041C10 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(
        __int64 a1,
        CDataStreamWriter **a2,
        unsigned int a3,
        unsigned int *a4)
{
  int v8; // ebx
  int NewEntry; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  int *v13; // rdi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  _DWORD v21[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      goto LABEL_10;
    }
    v20 = 140;
LABEL_17:
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024890, v20, 0LL);
    goto LABEL_10;
  }
  v22 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v22);
  v8 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, NewEntry, 0x57u, 0LL);
    goto LABEL_10;
  }
  v11 = v22;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, v22) )
    v13 = (int *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8));
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v20 = 99;
    goto LABEL_17;
  }
  v14 = *v13;
  v21[0] = 45;
  v21[1] = v11;
  v21[2] = v14;
  v15 = CChannel::BeginCommand((CChannel *)a2, v21, 0xCu, 0);
  v8 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(a2[20]);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v8, 0x71u, 0LL);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v13[1] = 1;
    *a4 = v11;
  }
LABEL_10:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v8;
}
