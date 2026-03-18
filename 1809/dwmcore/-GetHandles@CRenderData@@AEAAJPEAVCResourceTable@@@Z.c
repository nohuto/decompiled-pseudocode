/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009C178
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009BEA0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C48C (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18009C4F8 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C5C4 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18009C694 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  int v4; // r12d
  struct _LIST_ENTRY *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  int FirstItemSafe; // eax
  unsigned int v13; // eax
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  _QWORD v18[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+50h] BYREF
  void *v21; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  v18[1] = 0LL;
  v19 = 0LL;
  v18[0] = v5;
  v8 = *((_DWORD *)this + 32);
  v9 = v8 + 1;
  v10 = v8 + 1 < v8 ? 0x80070216 : 0;
  if ( v8 + 1 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v10, 0xB5u);
  }
  else if ( v9 > *((_DWORD *)this + 31) )
  {
    v15 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 104, 8u, v7, &v19);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v15, 0xC0u);
  }
  else
  {
    v11 = *((_DWORD *)this + 32);
    *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v8) = v19;
    *((_DWORD *)this + 32) = v9;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    v17 = 20;
    v16 = v10;
    goto LABEL_91;
  }
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v18, &v20, &v21, (unsigned int *)&v19);
  v10 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v17 = 23;
LABEL_68:
    v16 = FirstItemSafe;
LABEL_91:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v16, v17);
    return v10;
  }
  if ( !FirstItemSafe )
  {
    while ( 1 )
    {
      if ( v20 <= 0x1D0 )
      {
        switch ( v20 )
        {
          case 0x1D0u:
            if ( (unsigned int)v19 < 0x18 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x6Fu);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 117;
              goto LABEL_68;
            }
            break;
          case 0x1CBu:
            if ( (unsigned int)v19 < 0xC )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x27u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 45;
              goto LABEL_68;
            }
            break;
          case 0x1CCu:
            if ( (unsigned int)v19 < 0xC )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x34u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 58;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 59;
              goto LABEL_68;
            }
            break;
          case 0x1CDu:
            if ( (unsigned int)v19 < 0x1C )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x42u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 72;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 73;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 74;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 75;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 76;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 77;
              goto LABEL_68;
            }
            break;
          case 0x1CEu:
            if ( (unsigned int)v19 < 0x18 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x54u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 90;
              goto LABEL_68;
            }
            break;
          case 0x1CFu:
            if ( (unsigned int)v19 < 0xC )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x61u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 103;
              goto LABEL_68;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 104;
              goto LABEL_68;
            }
            break;
          default:
LABEL_85:
            v10 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x21u);
            return v10;
        }
      }
      else
      {
        switch ( v20 )
        {
          case 0x1D1u:
            if ( (unsigned int)v19 < 0x24 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x7Cu);
              return v10;
            }
            break;
          case 0x1D2u:
            if ( (unsigned int)v19 < 0x24 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x83u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 137;
              goto LABEL_68;
            }
            break;
          case 0x1D3u:
            if ( (unsigned int)v19 < 8 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x90u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 150;
              goto LABEL_68;
            }
            break;
          case 0x1D4u:
            if ( (unsigned int)v19 < 4 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x9Du);
              return v10;
            }
            --v4;
            break;
          case 0x1D5u:
            if ( (unsigned int)v19 < 8 )
            {
              v10 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xA6u);
              return v10;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v10 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 172;
              goto LABEL_68;
            }
            ++v4;
            break;
          default:
            goto LABEL_85;
        }
      }
      FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v18, &v20, &v21, (unsigned int *)&v19);
      v10 = FirstItemSafe;
      if ( FirstItemSafe < 0 )
        break;
      if ( FirstItemSafe )
        goto LABEL_16;
    }
    v17 = 180;
    goto LABEL_68;
  }
LABEL_16:
  v13 = 0;
  if ( v10 != 1 )
    v13 = v10;
  v10 = v13;
  if ( v4 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xC2u);
  }
  return v10;
}
