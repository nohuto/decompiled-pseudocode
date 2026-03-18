/*
 * XREFs of ?GetFirstItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1801E21D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDataStreamReader::GetFirstItemSafe(
        CDataStreamReader *this,
        unsigned int *a2,
        void **a3,
        unsigned int *a4)
{
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  return CDataStreamReader::GetNextItemSafe(this, a2, a3, a4);
}
