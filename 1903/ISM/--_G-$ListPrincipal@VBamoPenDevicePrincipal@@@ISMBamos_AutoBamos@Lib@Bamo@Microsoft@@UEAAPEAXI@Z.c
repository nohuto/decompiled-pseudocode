/*
 * XREFs of ??_G?$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1801278D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002ACD0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::`scalar deleting destructor'(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bp
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx

  v4 = a2;
  v6 = (__int64 *)a1[7];
  if ( v6 )
  {
    v7 = (__int64 *)a1[8];
    if ( v6 != v7 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6++);
      while ( v6 != v7 );
      v6 = (__int64 *)a1[7];
    }
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((a1[9] - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[7] = 0LL;
    a1[8] = 0LL;
    a1[9] = 0LL;
  }
  v8 = (Microsoft::BamoImpl::BamoImplObject *)a1[4];
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
