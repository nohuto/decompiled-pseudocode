/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180012580
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  int v6; // ebx
  struct Microsoft::BamoImpl::ConnectionIndirector *v7; // rdx
  const char *v8; // r9
  signed __int32 v9; // ebx
  bool v10; // sf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 2);
  if ( !v5 )
  {
    v6 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v6 >= 0 )
    {
LABEL_6:
      if ( !v6 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 16LL))(this);
      return (unsigned int)v6;
    }
LABEL_14:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      a4);
    __debugbreak();
  }
  v7 = *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v5 + 24);
  if ( *(int *)(*((_QWORD *)v7 + 3) + 8LL) <= 0 )
  {
    v6 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x180012672LL);
    }
    goto LABEL_6;
  }
  Microsoft::BamoImpl::InternalLock::InternalLock(&v13, v7);
  v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
  v10 = v9 - 1 < 0;
  v6 = v9 - 1;
  if ( v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v8);
    goto LABEL_14;
  }
  if ( !v6 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v13);
  return (unsigned int)v6;
}
