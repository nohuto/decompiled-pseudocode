/*
 * XREFs of ??$Initialize@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJAEBV?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18008D880
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1801A9394 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Initialize<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
        __int64 *a1,
        _QWORD *a2)
{
  int AgileReference; // edi
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  AgileReference = 0;
  if ( *a2 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    AgileReference = RoGetAgileReference(0LL, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, *a2, &v7);
    if ( AgileReference >= 0 )
    {
      v5 = *a1;
      *a1 = v7;
      v7 = v5;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return (unsigned int)AgileReference;
}
