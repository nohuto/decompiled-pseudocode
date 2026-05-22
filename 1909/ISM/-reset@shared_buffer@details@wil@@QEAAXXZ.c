/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180052910
 * Callers:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18004E9DC (--1ResultException@wil@@UEAA@XZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180051A0C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x1800526C4 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18005276C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BB84 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0524 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0594 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflecto_ea_1800E0594.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801516A0 (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180151710 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180151780 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProvider_ea_180151780.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::shared_buffer::reset(LPVOID *this)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *this);
    }
    *this = 0LL;
    this[1] = 0LL;
  }
}
