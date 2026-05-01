/*
 * XREFs of ImageList_Destroy @ 0x180106BFC
 * Callers:
 *     CreateBitmapFromIcon @ 0x180347C9C (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x180106D00 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1805988C0;
  if ( qword_1805988C0 == -1 )
  {
    GetProcFromComCtl32(&qword_1805988C0, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1805988C0;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
