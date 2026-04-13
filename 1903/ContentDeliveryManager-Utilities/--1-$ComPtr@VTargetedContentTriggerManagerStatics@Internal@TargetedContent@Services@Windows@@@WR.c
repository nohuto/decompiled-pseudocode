/*
 * XREFs of ??1?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800224C4
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$4 @ 0x1800CFD2F (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800CFD2F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::~ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  signed __int32 v3; // eax
  int v4; // ebx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 68), 0xFFFFFFFF);
    v4 = *(_DWORD *)(v2 + 88);
    result = (unsigned int)(v3 - 1);
    if ( (_DWORD)result )
    {
      if ( (v4 & 4) == 0 && (_DWORD)result == 1 )
        goto LABEL_8;
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      if ( (v4 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_8:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return result;
}
