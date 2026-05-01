/*
 * XREFs of ImageList_ReplaceIcon @ 0x180106C4C
 * Callers:
 *     CreateBitmapFromIcon @ 0x180347C9C (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180106D00 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1805988B8;
  if ( qword_1805988B8 == -1 )
  {
    GetProcFromComCtl32(&qword_1805988B8, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1805988B8;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
