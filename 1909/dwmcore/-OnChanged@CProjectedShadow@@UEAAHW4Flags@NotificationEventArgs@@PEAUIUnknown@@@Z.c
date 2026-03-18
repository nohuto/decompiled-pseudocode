/*
 * XREFs of ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F0940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C0B08 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadow::OnChanged(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( a3 && (!(_DWORD)a2 || (unsigned int)(a2 - 5) <= 1) )
  {
    CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(a1 + 30), a2, a3);
    if ( (_QWORD *)a3 == a1 || a3 == a1[8] )
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1 + 36);
  }
  return 0LL;
}
