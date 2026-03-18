/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009B7F0
 * Callers:
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180099C40 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18009AC70 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rax
  void *v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // rax
  CDataStreamWriter **v14; // rcx
  CDataStreamWriter *v15; // rax

  v4 = a2 + 36;
  v5 = HeapAlloc(WPF::g_processHeap, 0, a2 + 36LL);
  v6 = v5;
  v7 = v4;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    *((_DWORD *)v5 + 7) = 0;
    *v5 = &CDataStreamBlock::`vftable';
    *((_DWORD *)v5 + 6) = a2;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 6);
    v9 = -1;
    v10 = v8 + v4;
    if ( v8 + v4 >= v8 )
      v9 = v8 + v4;
    v11 = v10 < v8 ? 0x80070216 : 0;
    *((_DWORD *)this + 6) = v9;
    if ( v10 < v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0x1EFu);
    }
    else
    {
      v12 = *((_QWORD *)this + 2);
      if ( v12 )
      {
        v14 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        v15 = (CDataStreamWriter *)(v12 + 8);
        if ( *v14 != this )
          __fastfail(3u);
        *(_QWORD *)v15 = this;
        *((_QWORD *)v15 + 1) = v14;
        *v14 = v15;
        *((_QWORD *)this + 1) = v15;
      }
      *((_QWORD *)this + 2) = v6;
      v6 = 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x1ECu);
  }
  WPF::ProcessHeapImpl::Free(v6);
  return v11;
}
