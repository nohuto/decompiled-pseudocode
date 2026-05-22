/*
 * XREFs of ?CreateMPCConstantManagerClientCallbacksProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18007DA7C
 * Callers:
 *     ?Materialize_BamoMPCConstantManagerClientCallbacksProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18007E63C (-Materialize_BamoMPCConstantManagerClientCallbacksProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@Ba.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateMPCConstantManagerClientCallbacksProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _QWORD *v5; // rdi
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+50h] [rbp+18h]

  v7 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    this);
  v5 = operator new(0x30uLL);
  v8 = v5;
  memset_0(v5, 0, 0x30uLL);
  *v5 = &BamoMPCConstantManagerClientCallbacksProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &BamoMPCConstantManagerClientCallbacksProxy::`vftable'{for `IMPCConstantManagerClientCallbacksProxy'};
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *((_WORD *)v5 + 22) = 0;
  v5[2] = &BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::`vftable';
  v6 = v7;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 96));
    *((_DWORD *)v6 + 34) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v5;
}
