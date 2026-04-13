/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwil_StagingConfig@@P6AXPEAU1@@Z$1?wil_FreeStagingConfig@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006C5BC
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage_::_1_::dtor$1 @ 0x1800CC6B8 (_Windows--Services--TargetedContent--Internal--UnsubscribeFromFeatureReportingUsage_--_1_--dtor$.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil_StagingConfig *,void (*)(wil_StagingConfig *),&void wil_FreeStagingConfig(wil_StagingConfig *),wistd::integral_constant<unsigned __int64,0>,wil_StagingConfig *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil_StagingConfig *,void (*)(wil_StagingConfig *),&void wil_FreeStagingConfig(wil_StagingConfig *),wistd::integral_constant<unsigned __int64,0>,wil_StagingConfig *,0,std::nullptr_t>>>(
        __int64 *a1)
{
  __int64 v1; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v3; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_DWORD *)(v1 + 80) )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)(v1 + 56));
      *(_QWORD *)(v1 + 56) = 0LL;
      *(_QWORD *)(v1 + 24) = 0LL;
    }
    v3 = GetProcessHeap();
    HeapFree(v3, 0, (LPVOID)v1);
  }
}
