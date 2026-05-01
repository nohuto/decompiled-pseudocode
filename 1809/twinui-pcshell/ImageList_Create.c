/*
 * XREFs of ImageList_Create @ 0x1800E488C
 * Callers:
 *     CreateBitmapFromIcon @ 0x1802E72E4 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1800E49F4 (_GetProcFromComCtl32.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_18050E7F0;
  if ( qword_18050E7F0 == -1 )
  {
    GetProcFromComCtl32(&qword_18050E7F0, "ImageList_Create");
    result = (HIMAGELIST)qword_18050E7F0;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         33LL);
  return result;
}
