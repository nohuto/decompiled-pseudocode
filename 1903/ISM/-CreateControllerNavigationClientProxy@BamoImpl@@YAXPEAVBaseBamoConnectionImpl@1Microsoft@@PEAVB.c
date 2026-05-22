/*
 * XREFs of ?CreateControllerNavigationClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18005B784
 * Callers:
 *     ?Materialize_BamoControllerNavigationClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18005E020 (-Materialize_BamoControllerNavigationClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJ.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateControllerNavigationClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180071118 (-CreateControllerNavigationClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoControlle.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateControllerNavigationClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  struct ISMBamos_AutoBamos::BamoPeer *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  struct BamoControllerNavigationClientProxy *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // [rsp+48h] [rbp+10h] BYREF
  struct BamoControllerNavigationClientProxy *v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
    this);
  v6 = CreateControllerNavigationClientProxy(v5, &v12);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      58992LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v6);
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 96));
    *((_DWORD *)v8 + 34) = GetCurrentThreadId();
  }
  v9 = v12;
  *(_QWORD *)a3 = v12;
  if ( !v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      58997LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      v7);
    __debugbreak();
  }
}
