/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180057240
 * Callers:
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180054F88 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180056BDC (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180057188 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  unsigned int v9; // ecx
  CDataStreamWriter *v10; // rcx
  CDataStreamWriter **v12; // rdx

  v2 = *((_DWORD *)this + 10);
  v4 = a2;
  v5 = v2 + a2;
  if ( v2 + a2 < v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x20Cu, 0LL);
  }
  else
  {
    v6 = 0;
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 0, v4 + 28);
    if ( v8 )
    {
      v8[5] = 0;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      v8[4] = v4;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v10 = (CDataStreamWriter *)*((_QWORD *)this + 4);
      if ( v10 )
      {
        v12 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        if ( *v12 != this )
          __fastfail(3u);
        *(_QWORD *)v10 = this;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        *((_QWORD *)this + 1) = v10;
      }
      *((_QWORD *)this + 4) = v8;
      *((_DWORD *)this + 10) = v5;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x210u, 0LL);
    }
  }
  return v6;
}
