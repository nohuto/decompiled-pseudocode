/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180010F1C
 * Callers:
 *     ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180010EE0 (--_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z @ 0x180015F00 (--_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x1800177B0 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 *     ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x18003D460 (--_EMPCManagerConnection@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x18009C2F0 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 *     ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x1800DB930 (--_GMPCManagerClientConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  const char *v2; // r9
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    v6 = _InterlockedDecrement(v5 + 2);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v2);
      JUMPOUT(0x180010FF6LL);
    }
    if ( !v6 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
