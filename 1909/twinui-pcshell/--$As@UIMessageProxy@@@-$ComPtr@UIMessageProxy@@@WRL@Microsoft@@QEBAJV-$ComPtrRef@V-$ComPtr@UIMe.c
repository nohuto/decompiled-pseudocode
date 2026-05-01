/*
 * XREFs of ??$As@UIMessageProxy@@@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180423690
 * Callers:
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804238C0 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180423C40 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMessageProxy>::As<IMessageProxy>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
           a2);
}
