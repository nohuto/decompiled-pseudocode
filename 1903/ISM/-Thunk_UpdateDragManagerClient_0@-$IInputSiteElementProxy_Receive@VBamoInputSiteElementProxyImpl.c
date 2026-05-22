/*
 * XREFs of ?Thunk_UpdateDragManagerClient_0@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180008AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027650 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateDragManagerClient_0(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  v6 = 0LL;
  v15 = 0LL;
  if ( (_DWORD)v3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**(_QWORD **)(v5 + 40) + 56LL))(
            *(_QWORD *)(v5 + 40),
            *(unsigned int *)(v4 + 36),
            v3,
            &v15);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29A,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v10,
        v13);
      __debugbreak();
    }
    v6 = v15;
  }
  v7 = (void (__fastcall ***)(_QWORD))(((unsigned __int64)v6 - 16) & -(__int64)(v6 != 0LL));
  v8 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6);
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v16,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 96LL))(a1 - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1595,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v11,
        v13);
    v12 = v16;
    if ( v16 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v16 + 96));
      *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
