/*
 * XREFs of ?Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x180010C90
 * Callers:
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18001B030 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::Release(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      a4);
    JUMPOUT(0x180010CD8LL);
  }
  if ( !v4 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v4;
}
