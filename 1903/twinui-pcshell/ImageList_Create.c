/*
 * XREFs of ImageList_Create @ 0x180106B98
 * Callers:
 *     CreateBitmapFromIcon @ 0x180347C9C (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180106D00 (_GetProcFromComCtl32.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_1805988C8;
  if ( qword_1805988C8 == -1 )
  {
    GetProcFromComCtl32(&qword_1805988C8, "ImageList_Create");
    result = (HIMAGELIST)qword_1805988C8;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         33LL);
  return result;
}
