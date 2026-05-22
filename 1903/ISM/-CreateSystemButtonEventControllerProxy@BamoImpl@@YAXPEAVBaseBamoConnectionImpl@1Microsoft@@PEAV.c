/*
 * XREFs of ?CreateSystemButtonEventControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002E6AC
 * Callers:
 *     ?Materialize_BamoSystemButtonEventControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18002E990 (-Materialize_BamoSystemButtonEventControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAA.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18005AA20 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateSystemButtonEventControllerProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _QWORD *v5; // rbx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp+18h]

  v6 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v6,
    this);
  v5 = operator new(0x58uLL);
  v7 = v5;
  memset_0(v5, 0, 0x58uLL);
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *((_WORD *)v5 + 22) = 0;
  v5[2] = &BamoImpl::BamoSystemButtonEventControllerProxyImpl::`vftable';
  *v5 = &SystemButtonEventController::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &SystemButtonEventController::`vftable'{for `ISystemButtonEventControllerProxy'};
  v5[6] = 0LL;
  v5[7] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  v5[10] = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v6);
  *(_QWORD *)a3 = v5;
}
