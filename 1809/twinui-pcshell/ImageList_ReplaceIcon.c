/*
 * XREFs of ImageList_ReplaceIcon @ 0x1800E4940
 * Callers:
 *     CreateBitmapFromIcon @ 0x1802E72E4 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1800E49F4 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18050E7E0;
  if ( qword_18050E7E0 == -1 )
  {
    GetProcFromComCtl32(&qword_18050E7E0, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18050E7E0;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
