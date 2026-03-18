/*
 * XREFs of ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800A2118
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800A1FF0 (--1CRenderData@@MEAA@XZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800A2048 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1800A2194 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CRenderData::DestroyRenderData(CRenderData *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx

  if ( *((_DWORD *)this + 36) )
  {
    v2 = 0LL;
    v3 = *((unsigned int *)this + 36);
    do
    {
      v4 = *((_QWORD *)this + 15);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v2 + v4));
      *(_QWORD *)(v2 + v4) = 0LL;
      v2 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 36) = 0;
  CDataStreamWriter::Reset((struct _LIST_ENTRY *)((char *)this + 56));
  *((_BYTE *)this + 152) = 1;
}
