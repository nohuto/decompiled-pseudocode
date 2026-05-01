/*
 * XREFs of ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000DE20
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18000C750 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18000E070 (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v5; // rdi
  _QWORD *Ptr; // rbx
  __int64 v7; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h]

  v12 = a2;
  *a3 = 0LL;
  v5 = this + 54;
  AcquireSRWLockShared(this + 54);
  v13 = v5;
  Ptr = this[58].Ptr;
  while ( 1 )
  {
    Ptr = (_QWORD *)*Ptr;
    if ( Ptr == this[58].Ptr )
      break;
    v7 = Ptr[2];
    if ( *(_QWORD *)(v7 + 8) == v12 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v7 + 16), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        &v12,
        &StringRawBuffer);
      v8 = *(struct Windows::Foundation::Collections::IPropertySet **)(Ptr[2] + 32LL);
      if ( v8 )
      {
        *a3 = v8;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v8 + 8LL))(v8);
      }
      else
      {
        *a3 = 0LL;
      }
    }
  }
  if ( !a3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x780,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      -2);
    __debugbreak();
    JUMPOUT(0x1800C8275LL);
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
