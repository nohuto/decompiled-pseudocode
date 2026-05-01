/*
 * XREFs of ??$CopyLocal@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008D84C
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1801A9394 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::CopyLocal<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::CopyLocal(
           a1,
           v4,
           a2);
}
