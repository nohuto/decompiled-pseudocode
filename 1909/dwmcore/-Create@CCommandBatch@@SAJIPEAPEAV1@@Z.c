/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180057188
 * Callers:
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800566F0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180056DE8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180057240 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?RoundUpToAlignDWORD@@YAJPEAI@Z @ 0x180057300 (-RoundUpToAlignDWORD@@YAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18015593C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(unsigned int a1, struct CCommandBatch **a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  CDataStreamWriter *v5; // rbx
  _QWORD *v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  int NewBlock; // eax
  unsigned int v11; // ecx
  unsigned int v13; // edx
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  v3 = DefaultHeap::AllocClear(0x50uLL);
  v5 = (CDataStreamWriter *)v3;
  if ( v3 )
  {
    v3[1] = v3;
    *v3 = v3;
    v3[4] = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    *((_DWORD *)v3 + 11) = 0;
    v3[6] = 0LL;
    *((_DWORD *)v3 + 14) = 0;
    v6 = v3 + 2;
    v6[1] = v6;
    *v6 = v6;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v14 = 512;
    v7 = RoundUpToAlignDWORD(&v14);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x14Fu, 0LL);
    }
    else
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(v5, v14);
      v9 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, NewBlock, 0x150u, 0LL);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x27u, 0LL);
      CCommandBatch::`scalar deleting destructor'((struct _LIST_ENTRY *)v5, v13);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  return (unsigned int)v9;
}
