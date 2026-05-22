/*
 * XREFs of ?SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z @ 0x1800E9E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncHRESULTPrincipal::SetOutcome(
        AsyncHRESULTPrincipal *this,
        struct BamoAsyncHRESULTStub *a2,
        int a3)
{
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp+18h] BYREF

  *((_BYTE *)this + 120) = 0;
  v3 = *((_QWORD *)this + 14);
  v5 = a3;
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 16LL))(v3, &v5);
  return 0LL;
}
