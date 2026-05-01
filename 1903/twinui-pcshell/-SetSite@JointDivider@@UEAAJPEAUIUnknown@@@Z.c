/*
 * XREFs of ?SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z @ 0x1803CA3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18004E49C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall JointDivider::SetSite(JointDivider *this, struct IUnknown *a2)
{
  if ( !a2 && *((_QWORD *)this + 2) )
  {
    DestroyWindow(*((HWND *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}
