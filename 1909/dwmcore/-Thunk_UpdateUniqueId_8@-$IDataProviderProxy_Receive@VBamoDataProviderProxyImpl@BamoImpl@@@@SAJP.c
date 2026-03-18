/*
 * XREFs of ?Thunk_UpdateUniqueId_8@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800E79A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E3760 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_UpdateUniqueId_8(
        __int64 a1,
        _QWORD **a2)
{
  bool v2; // zf
  int v5; // eax
  __int64 v6; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 28) == 0;
  *(_QWORD *)(a1 + 32) = **a2;
  if ( !v2 )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v9,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 56LL))(a1 - 16);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EC6,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v5,
        v7);
      __debugbreak();
    }
    v6 = v9;
    if ( v9 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
      *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
