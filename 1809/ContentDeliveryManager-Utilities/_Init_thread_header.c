/*
 * XREFs of _Init_thread_header @ 0x1800C6FE8
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001670 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180020098 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180080A7C (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x18009D75C (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_180184BC0);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    SleepConditionVariableSRW(&ConditionVariable, &stru_180184BC0, 0xFFFFFFFF, 0);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  ReleaseSRWLockExclusive(&stru_180184BC0);
}
