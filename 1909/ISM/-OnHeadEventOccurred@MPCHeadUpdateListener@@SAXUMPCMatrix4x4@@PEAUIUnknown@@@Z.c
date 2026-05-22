/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z @ 0x1800979C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x180064F08 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18009772C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(
        _OWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64))
{
  __int64 v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64); // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  void *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  MPCHeadUpdateListener::GetInstance();
  v5 = (struct _RTL_CRITICAL_SECTION *)(v4 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 152));
  v13 = v5;
  MPCHeadUpdateListener::GetInstance();
  *(_OWORD *)(v6 + 88) = *a1;
  *(_OWORD *)(v6 + 104) = a1[1];
  *(_OWORD *)(v6 + 120) = a1[2];
  *(_OWORD *)(v6 + 136) = a1[3];
  if ( a2 )
  {
    v7 = **a2;
    v8 = v6 + 80;
    RefPtr<IRemoteTextInputState>::Release((__int64 *)(v6 + 80));
    v9 = v7(a2, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        78LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    RefPtr<IRemoteTextInputState>::Release((__int64 *)(v6 + 80));
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v13);
  MPCHeadUpdateListener::GetInstance();
  wil::details::SetEvent(*(wil::details **)(*(_QWORD *)(v10 + 72) + 120LL), v11);
}
