/*
 * XREFs of ImageList_ReplaceIcon @ 0x180125C5C
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803673FC (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180125D10 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1805C0C28;
  if ( qword_1805C0C28 == -1 )
  {
    GetProcFromComCtl32(&qword_1805C0C28, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1805C0C28;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
