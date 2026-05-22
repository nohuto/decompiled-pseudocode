/*
 * XREFs of ?SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z @ 0x1800E9670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncPVPrincipal::SetError(
        AsyncPVPrincipal *this,
        struct BamoAsyncResult_PROPVARIANT_Stub *a2,
        int a3)
{
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp+18h] BYREF

  *((_BYTE *)this + 184) = 0;
  v3 = *((_QWORD *)this + 22);
  v5 = a3;
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 16LL))(v3, &v5);
  return 0LL;
}
