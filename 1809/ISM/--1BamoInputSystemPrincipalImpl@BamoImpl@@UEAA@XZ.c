/*
 * XREFs of ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18001B720
 * Callers:
 *     ??_GInputSystem@@UEAAPEAXI@Z @ 0x18001B6D0 (--_GInputSystem@@UEAAPEAXI@Z.c)
 *     ??1BamoInputSystemPrincipal@@MEAA@XZ @ 0x18001B710 (--1BamoInputSystemPrincipal@@MEAA@XZ.c)
 *     ??_EBamoInputSystemPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18001C150 (--_EBamoInputSystemPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_QWORD *)this + 13);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 9);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *((_QWORD *)this + 6);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = *((_QWORD *)this + 5);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v14 )
  {
    v15 = _InterlockedDecrement(v14 + 2);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x18001B846LL);
    }
    if ( !v15 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
