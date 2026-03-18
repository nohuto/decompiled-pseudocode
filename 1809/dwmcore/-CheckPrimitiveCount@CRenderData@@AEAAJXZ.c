/*
 * XREFs of ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18009C084
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009BEA0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C48C (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C5C4 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18009C694 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderData::CheckPrimitiveCount(CRenderData *this)
{
  unsigned int v2; // edi
  int FirstItemSafe; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-58h]
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+10h] BYREF
  void *v11; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v8[1] = 0LL;
  v8[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v8, &v9, &v11, &v10);
  v5 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v7 = 345;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, FirstItemSafe, v7);
  }
  else
  {
    if ( !FirstItemSafe )
    {
      while ( 1 )
      {
        if ( v2 > 1 )
          goto LABEL_15;
        if ( v9 == 460 )
          break;
        if ( v9 == 459 )
          goto LABEL_17;
        if ( v9 <= 0x1CD )
          goto LABEL_18;
        if ( v9 <= 0x1D0 )
          break;
        if ( v9 == 465 )
        {
LABEL_17:
          ++v2;
        }
        else
        {
          if ( v9 <= 0x1D3 )
            break;
          if ( v9 > 0x1D5 )
          {
LABEL_18:
            v5 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x160u);
            return v5;
          }
        }
LABEL_13:
        FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v8, &v9, &v11, &v10);
        v5 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v7 = 376;
          goto LABEL_21;
        }
        if ( FirstItemSafe )
          goto LABEL_15;
      }
      v2 = 2;
      goto LABEL_13;
    }
LABEL_15:
    v5 = 0;
    *((_BYTE *)this + 136) = v2 <= 1;
  }
  return v5;
}
