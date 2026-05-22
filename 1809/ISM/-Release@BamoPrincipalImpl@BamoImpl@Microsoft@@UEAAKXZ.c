/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18001B570
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v5; // rdx
  int v6; // ebx
  const char *v7; // r9
  signed __int32 v8; // ebx
  bool v9; // sf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this + 2);
  if ( *(int *)(*((_QWORD *)v5 + 3) + 8LL) <= 0 )
  {
    v6 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v6 >= 0 )
    {
      if ( !v6 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 16LL))(this);
      return (unsigned int)v6;
    }
LABEL_11:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      a4);
    JUMPOUT(0x18001B62BLL);
  }
  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, v5);
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
  v9 = v8 - 1 < 0;
  v6 = v8 - 1;
  if ( v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v7);
    goto LABEL_11;
  }
  if ( !v6 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  return (unsigned int)v6;
}
