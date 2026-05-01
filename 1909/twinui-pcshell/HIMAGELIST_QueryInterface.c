/*
 * XREFs of HIMAGELIST_QueryInterface @ 0x180125B40
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803673FC (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180125D10 (_GetProcFromComCtl32.c)
 */

HRESULT __stdcall HIMAGELIST_QueryInterface(HIMAGELIST himl, const IID *const riid, void **ppv)
{
  __int64 (__fastcall *v3)(HIMAGELIST, GUID *, void **); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, GUID *, void **))qword_1805C0C20;
  if ( qword_1805C0C20 == -1 )
  {
    GetProcFromComCtl32(&qword_1805C0C20, "HIMAGELIST_QueryInterface");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, GUID *, void **))qword_1805C0C20;
  }
  if ( v3 )
    return v3(himl, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, ppv);
  else
    return -2147467259;
}
