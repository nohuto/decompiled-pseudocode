/*
 * XREFs of ImageList_Destroy @ 0x1800E48F0
 * Callers:
 *     CreateBitmapFromIcon @ 0x1802E72E4 (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1800E49F4 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18050E7E8;
  if ( qword_18050E7E8 == -1 )
  {
    GetProcFromComCtl32(&qword_18050E7E8, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18050E7E8;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
