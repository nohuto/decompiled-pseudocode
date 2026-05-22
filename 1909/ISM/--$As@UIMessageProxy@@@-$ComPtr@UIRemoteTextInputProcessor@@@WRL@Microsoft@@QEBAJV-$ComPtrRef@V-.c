/*
 * XREFs of ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteTextInputProcessor@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010922C
 * Callers:
 *     ?OnDisconnected@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180109340 (-OnDisconnected@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRemoteTextInputProcessor>::As<IMessageProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi

  v2 = *a1;
  v4 = *a2;
  v5 = **v2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5(v2, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, a2);
}
