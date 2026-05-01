/*
 * XREFs of ?UpdateEngagementFlags@ViewWrapperBase@@UEAAJW4ViewEngagementFlags@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x180245400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::UpdateEngagementFlags(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdx

  v4 = *(_QWORD *)(a1 + 184);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 520LL) + 88LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL),
      v4,
      a2,
      a3);
  return 0LL;
}
