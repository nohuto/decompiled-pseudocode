/*
 * XREFs of ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x18006DD74
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006DA3C (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RoVariant::Accessor::GetSize(RoVariant::Accessor *this, struct Windows::Foundation::Size *a2)
{
  int v3; // ecx
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  *(_QWORD *)a2 = 0LL;
  v3 = *((_DWORD *)this + 2);
  if ( v3 == 7 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
  result = 2147650720LL;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return result;
}
