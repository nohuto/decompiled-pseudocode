/*
 * XREFs of ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075074
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180074BC0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x180074D70 (-GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180074E40 (-GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x180422CB0 (-DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z.c)
 *     ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x180422D20 (-ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z.c)
 *     ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x180422D90 (-UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::_GetStdMarshaler(RTL_SRWLOCK *this, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  RTL_SRWLOCK *v6; // r14
  PVOID Ptr; // rbx
  HRESULT StdMarshal; // edi
  IUnknown *v10; // rbx
  DWORD v11; // eax
  LPUNKNOWN pUnkOuter; // [rsp+48h] [rbp+10h] BYREF

  pUnkOuter = a2;
  *a3 = 0LL;
  v3 = this + 3;
  AcquireSRWLockShared(this + 3);
  v6 = this + 4;
  Ptr = this[4].Ptr;
  ReleaseSRWLockShared(v3);
  StdMarshal = Ptr == 0LL ? 0x80004005 : 0;
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v3);
    if ( v6->Ptr )
    {
      StdMarshal = 0;
    }
    else
    {
      pUnkOuter = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
      StdMarshal = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, LPUNKNOWN *))this->Ptr)(
                     this,
                     &GUID_00000000_0000_0000_c000_000000000046,
                     &pUnkOuter);
      if ( StdMarshal >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&this[4]);
        v10 = pUnkOuter;
        v11 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 9))(this);
        StdMarshal = CoGetStdMarshalEx(v10, v11, (LPUNKNOWN *)&this[4]);
        if ( StdMarshal >= 0 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 12))(this);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
    }
    ReleaseSRWLockExclusive(v3);
  }
  if ( StdMarshal >= 0 )
    return (unsigned int)(**(unsigned __int64 (__fastcall ***)(PVOID, GUID *, void **))v6->Ptr)(
                           v6->Ptr,
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  return (unsigned int)StdMarshal;
}
