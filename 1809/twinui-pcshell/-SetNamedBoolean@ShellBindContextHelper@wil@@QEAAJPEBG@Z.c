/*
 * XREFs of ?SetNamedBoolean@ShellBindContextHelper@wil@@QEAAJPEBG@Z @ 0x1803B75B4
 * Callers:
 *     _anonymous_namespace_::GetTargetItem @ 0x1803B72EC (_anonymous_namespace_--GetTargetItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E7E7C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVDummyUnknown@details@wil@@AEBU_GUID@@$$QEA$$T@Z @ 0x1803B71FC (--$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPE.c)
 */

__int64 __fastcall wil::ShellBindContextHelper::SetNamedBoolean(
        wil::ShellBindContextHelper *this,
        const unsigned __int16 *a2)
{
  signed int v3; // ebx
  volatile int *v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v5);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::DummyUnknown,wil::details::DummyUnknown,_GUID const &,std::nullptr_t>(
         &v5,
         (__int128 *)&GUID_NULL,
         &v6);
  if ( v3 >= 0 )
  {
    v3 = *(_QWORD *)this == 0LL ? 0x8007000E : 0;
    if ( *(_QWORD *)this )
      v3 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, volatile int *))(**(_QWORD **)this + 72LL))(
             *(_QWORD *)this,
             L"Don't Resolve Link",
             v5);
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v5);
  return (unsigned int)v3;
}
