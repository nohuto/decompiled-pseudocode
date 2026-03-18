/*
 * XREFs of ?SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z @ 0x180251280
 * Callers:
 *     ?Thunk_SetVector2Value_21@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1802516F0 (-Thunk_SetVector2Value_21@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E2E30 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetVector2Value(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v10,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL));
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16, a2);
  v7 = v10;
  v8 = v6;
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  return v8;
}
