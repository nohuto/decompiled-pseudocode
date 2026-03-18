/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800A2048
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800A1780 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x1800A1940 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800A1A34 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800A2118 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1800A2194 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  signed int v13; // eax
  __int64 v14; // rcx
  signed int Handles; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v11 = *((_DWORD *)a3 + 2);
  if ( !v11 )
    goto LABEL_2;
  if ( a5 != v11 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x88980403, 0x55u, 0LL);
    goto LABEL_11;
  }
  CDataStreamWriter::Reset((struct _LIST_ENTRY *)((char *)this + 56));
  v13 = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 56), a4, a5);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x5Du, 0LL);
  }
  else
  {
    Handles = CRenderData::GetHandles(this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Handles, 0x63u, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x66u, 0LL);
    }
  }
LABEL_3:
  if ( v9 < 0 )
LABEL_11:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
