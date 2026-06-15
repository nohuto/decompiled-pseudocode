/*
 * XREFs of ??1?$CComPtr@VCApplication@@@ATL@@QEAA@XZ @ 0x180009160
 * Callers:
 *     _CApplicationManager::SendBackgroundStreamStateChangedNotifiction_::_1_::dtor$1 @ 0x18003834F (_CApplicationManager--SendBackgroundStreamStateChangedNotifiction_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<CApplication>::~CComPtr<CApplication>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
    }
  }
  return result;
}
