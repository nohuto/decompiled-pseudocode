/*
 * XREFs of ?SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z @ 0x180189F4C
 * Callers:
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180189CFC (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E3760 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::SetBootstrapProxyCallout(
        Microsoft::Bamo::BaseBamoConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 24LL))(this);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v9, v4);
  v5 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *, struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 8LL))(
         this,
         a2);
  v6 = v9;
  v7 = v5;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  return v7;
}
