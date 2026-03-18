/*
 * XREFs of ?GetDirtyRegion@CGenericInk@@UEAAJPEAPEBVCRegion@@@Z @ 0x180215820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::GetDirtyRegion(CGenericInk *this, const struct CRegion **a2)
{
  *a2 = (const struct CRegion *)(((unsigned __int64)this + 176) & -(__int64)(**((_DWORD **)this + 22) != 0));
  return 0LL;
}
