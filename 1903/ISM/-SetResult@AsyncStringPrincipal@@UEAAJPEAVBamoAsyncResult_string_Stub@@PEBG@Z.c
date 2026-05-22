/*
 * XREFs of ?SetResult@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@PEBG@Z @ 0x180123750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncStringPrincipal::SetResult(
        AsyncStringPrincipal *this,
        struct BamoAsyncResult_string_Stub *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rcx
  const unsigned __int16 *v5; // [rsp+30h] [rbp+8h] BYREF

  *((_BYTE *)this + 184) = 0;
  v3 = *((_QWORD *)this + 14);
  v5 = a3;
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v3 + 16LL))(v3, &v5);
  return 0LL;
}
