/*
 * XREFs of ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800D0F30
 * Callers:
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C48C (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18009C5C4 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?GetFirstItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1801E21D4 (-GetFirstItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDataStreamReader::GetNextItemSafe(
        CDataStreamReader *this,
        unsigned int *a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int *v4; // r11
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 result; // rax

  v4 = (unsigned int *)*((_QWORD *)this + 1);
  v5 = *(_QWORD *)this + *((unsigned int *)this + 4) - (_QWORD)v4;
  if ( v5 )
  {
    if ( v5 < 8 )
      return 2147500037LL;
    v6 = *v4;
    if ( (unsigned int)v6 < 8 || (v6 & 3) != 0 || v6 > v5 )
    {
      return 2147500037LL;
    }
    else
    {
      *a2 = v4[1];
      *a4 = v6 - 4;
      *((_QWORD *)this + 1) = (char *)v4 + (unsigned int)v6;
      result = 0LL;
      *a3 = v4 + 1;
    }
  }
  else
  {
    result = 1LL;
    *a3 = 0LL;
    *a4 = 0;
  }
  return result;
}
