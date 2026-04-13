/*
 * XREFs of ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x18001F470
 * Callers:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800231A0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@.c)
 *     ?AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ @ 0x1800231F0 (-AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this)
{
  signed __int32 v1; // r9d
  unsigned int v2; // r8d

  v1 = *((_DWORD *)this + 17);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 17, v1 + 1, v1) )
        break;
      v1 = *((_DWORD *)this + 17);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      v2 = v1 + 1;
  }
  if ( (*((_BYTE *)this + 88) & 4) == 0 && v2 == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v2;
}
