/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009BEA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009BBE8 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18009BF70 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18009BFEC (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18009C084 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009C178 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int Handles; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v11 = *((_DWORD *)a3 + 2);
  if ( !v11 )
    goto LABEL_2;
  if ( a5 != v11 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x4Fu);
    goto LABEL_11;
  }
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 56));
  v13 = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 56), a4, a5);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x57u);
  }
  else
  {
    Handles = CRenderData::GetHandles(this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Handles, 0x5Du);
    }
    else
    {
      v17 = CRenderData::CheckPrimitiveCount(this);
      v9 = v17;
      if ( v17 >= 0 )
      {
LABEL_2:
        (*(void (__fastcall **)(CRenderData *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x60u);
    }
  }
LABEL_3:
  if ( v9 < 0 )
LABEL_11:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
