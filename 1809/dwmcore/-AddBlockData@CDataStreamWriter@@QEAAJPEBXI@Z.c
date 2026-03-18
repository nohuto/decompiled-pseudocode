/*
 * XREFs of ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009BBE8
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009BEA0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18009AC70 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18009BC84 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::AddBlockData(CDataStreamWriter *this, const void *Src, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  void *v8; // rax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 4) || *((_DWORD *)this + 10) )
  {
    v6 = -2147418113;
    v11 = 290;
    v10 = -2147418113;
    goto LABEL_11;
  }
  v6 = 0;
  if ( a3 )
  {
    v7 = CDataStreamWriter::EnsureSize(this, a3);
    v6 = v7;
    if ( v7 < 0 )
    {
      v11 = 295;
    }
    else
    {
      v8 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      memcpy_0(v8, Src, a3);
      v7 = CDataStreamWriter::IncreaseWrittenByteCount(this, a3);
      v6 = v7;
      if ( v7 >= 0 )
        return v6;
      v11 = 299;
    }
    v10 = v7;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v10, v11);
  }
  return v6;
}
