/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18009AC70
 * Callers:
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18009AA40 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009BBE8 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009B7F0 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // eax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // edx
  int NewBlock; // eax
  unsigned int v15; // ecx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v3 = (a2 + 3) & 0xFFFFFFFC;
  v4 = 0;
  v5 = a2;
  if ( v3 >= a2 )
    v5 = (a2 + 3) & 0xFFFFFFFC;
  v6 = v3 < a2 ? 0x80070216 : 0;
  if ( v3 < a2 )
  {
    v16 = 367;
    goto LABEL_20;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 2));
    v9 = (**(__int64 (__fastcall ***)(__int64))v7)(v7);
    v7 = *((_QWORD *)this + 2);
    v4 = v9 - v8;
    if ( v7 )
    {
      if ( v4 >= v5 )
        return v6;
    }
  }
  v11 = 0x10000;
  if ( *((_DWORD *)this + 6) < 0x10000u )
    v11 = *((_DWORD *)this + 6);
  if ( v7 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) )
  {
    WPF::ProcessHeapImpl::Free(*((void **)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  v12 = v11 + v5;
  v13 = -1;
  if ( v11 + v5 >= v5 )
    v13 = v11 + v5;
  v6 = v12 < v5 ? 0x80070216 : 0;
  if ( v12 < v5 )
  {
    v16 = 441;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, v16);
    return v6;
  }
  NewBlock = CDataStreamWriter::AllocateNewBlock(this, v13);
  v6 = NewBlock;
  if ( NewBlock < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, NewBlock, 0x1BBu);
  return v6;
}
