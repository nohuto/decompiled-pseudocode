/*
 * XREFs of ImageList_Create @ 0x180125BA8
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803673FC (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180125D10 (_GetProcFromComCtl32.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_1805C0C38;
  if ( qword_1805C0C38 == -1 )
  {
    GetProcFromComCtl32(&qword_1805C0C38, "ImageList_Create");
    result = (HIMAGELIST)qword_1805C0C38;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         33LL);
  return result;
}
