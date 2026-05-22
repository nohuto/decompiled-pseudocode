/*
 * XREFs of ?CreateList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x18005BED0
 * Callers:
 *     ?Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerFeedback_Proxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18005F4FC (-Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerFeedback_Prox.c)
 * Callees:
 *     ??$CreateProxy_List@VBamoPenDeviceProxy@@@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAV?$ListProxy@VBamoPenDeviceProxy@@@1Lib@Bamo@Microsoft@@@Z @ 0x18000E4B0 (--$CreateProxy_List@VBamoPenDeviceProxy@@@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAV-$ListProx.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::CreateList_SimpleHapticsControllerFeedback_Proxy(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  int Proxy; // eax
  const char *v6; // r9
  int v7; // ebx
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
    this);
  Proxy = CreateProxy_List<BamoPenDeviceProxy>();
  v7 = Proxy;
  if ( Proxy >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1FB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)Proxy);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      59509LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v7);
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      59514LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      v6);
    __debugbreak();
  }
}
