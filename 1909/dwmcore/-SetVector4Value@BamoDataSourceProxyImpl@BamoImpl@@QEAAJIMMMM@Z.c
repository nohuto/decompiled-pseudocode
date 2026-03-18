/*
 * XREFs of ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18024FC3C
 * Callers:
 *     ?Thunk_SetVector4Value_32@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18024FFF0 (-Thunk_SetVector4Value_32@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E3760 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetVector4Value(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v10,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL));
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, a2);
  v7 = v10;
  v8 = v6;
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  return v8;
}
