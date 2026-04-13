/*
 * XREFs of ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x18001F5E0
 * Callers:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180023390 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@.c)
 *     ?AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ @ 0x1800233E0 (-AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 17);
  if ( (*((_BYTE *)this + 88) & 4) == 0 && (_DWORD)result == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return result;
}
