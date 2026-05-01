/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18025303C
 * Callers:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180252A08 (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$ComPtr@UIWindowM.c)
 *     ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1802532B0 (-OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(
        __int64 *a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 + 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  v3 = a1[2];
  result = *(unsigned int *)(v3 + 8);
  if ( *(_DWORD *)a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL))(
                 v5,
                 *(unsigned int *)a1,
                 &GUID_b9ba35ce_308d_480c_886d_cb3d4ffc0b6c,
                 v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        53LL,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      ++*(_DWORD *)a1;
      v3 = a1[2];
      result = *(unsigned int *)a1;
    }
    while ( (unsigned int)result < *(_DWORD *)(v3 + 8) );
  }
  return result;
}
