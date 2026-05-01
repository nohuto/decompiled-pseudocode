/*
 * XREFs of ImageList_Destroy @ 0x180125C0C
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803673FC (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x180125D10 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1805C0C30;
  if ( qword_1805C0C30 == -1 )
  {
    GetProcFromComCtl32(&qword_1805C0C30, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1805C0C30;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
