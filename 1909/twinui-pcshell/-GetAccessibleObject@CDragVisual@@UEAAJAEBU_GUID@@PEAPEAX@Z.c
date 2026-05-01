/*
 * XREFs of ?GetAccessibleObject@CDragVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F6F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisual::GetAccessibleObject(CDragVisual *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // rcx

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 9);
  if ( v3 )
    return (**v3)(v3, a2, a3);
  else
    return 2147943568LL;
}
