/*
 * XREFs of ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18000A450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180009D70 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002596C (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RegisterStreamPreStart(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        struct IAudioStreamPreStartContext **a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // edi
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  CWindowsPolicyManager::Lock((__int64)this, &lpCriticalSection);
  *a3 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  v5[3] = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamPreStartContext>::`vftable';
  if ( v8 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
  *((_BYTE *)v6 + 16) = 0;
  *(_QWORD *)v6 = &CAastPreStartContext::`vftable';
  v6[5] = 0;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 7LL;
  *((_WORD *)v6 + 12) = 0;
  v7 = CAastPreStartContext::RuntimeClassInitialize((CAastPreStartContext *)v6, a2);
  v9 = v6;
  v10 = *(_QWORD *)v6;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_DWORD *, GUID *, struct IAudioStreamPreStartContext **))v10)(
           v6,
           &GUID_52004e04_018e_41fc_a946_f5027192635b,
           a3);
    v9 = v6;
    v10 = *(_QWORD *)v6;
  }
  (*(void (__fastcall **)(_DWORD *))(v10 + 16))(v9);
  if ( v7 < 0 )
    goto LABEL_8;
  v7 = 0;
LABEL_10:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
