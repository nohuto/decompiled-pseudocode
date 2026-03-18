/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801AF190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowReceiver::NotifyOnChanged(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( a3 == a1[12] )
    result = Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1 + 13);
  v7 = a1[7];
  if ( v7 && !CCommonRegistryData::m_fDisableProjectedShadows )
  {
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 11 )
        a2 = 6;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, 5LL, 0LL);
      v7 = a1[7];
    }
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2, a3);
  }
  return result;
}
