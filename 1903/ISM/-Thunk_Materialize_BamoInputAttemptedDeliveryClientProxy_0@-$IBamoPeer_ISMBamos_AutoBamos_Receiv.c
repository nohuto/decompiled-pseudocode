/*
 * XREFs of ?Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800020C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1800021B4 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800058B0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  struct ISMBamos_AutoBamos::BamoPeer *v4; // rsi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct BamoInputAttemptedDeliveryClientProxy *v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = **a2;
  v4 = *(struct ISMBamos_AutoBamos::BamoPeer **)(a1 + 16);
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 24LL);
  v6 = 0LL;
  if ( !*((_DWORD *)v5 + 35) )
  {
    v6 = v5;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v5);
  }
  v7 = CreateInputAttemptedDeliveryClientProxy(v4, &v16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE724,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v7,
      v14);
    goto LABEL_12;
  }
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 96));
    *((_DWORD *)v6 + 34) = GetCurrentThreadId();
  }
  if ( !v16 )
  {
LABEL_12:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE729,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(struct BamoInputAttemptedDeliveryClientProxy *))(*(_QWORD *)v16 + 48LL))(v16);
  v10 = *(void (__fastcall ****)(_QWORD))(v9 + 16);
  *(_QWORD *)(v9 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v10 )
    (**v10)(v10);
  *(_DWORD *)(v9 + 24) = v3;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(
          v11,
          *(unsigned int *)(a1 + 36),
          v3,
          v9);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4359,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v12,
      v14);
    __debugbreak();
  }
  return 0LL;
}
