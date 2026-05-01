/*
 * XREFs of ??4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z @ 0x18008D970
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1801AA410 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall CMarshaledInterface::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  v4 = 0LL;
  if ( &v8 != a2 )
  {
    v5 = *a2;
    *a2 = 0LL;
    v4 = v5;
  }
  v6 = *a1;
  *a1 = v4;
  v8 = v6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return a1;
}
