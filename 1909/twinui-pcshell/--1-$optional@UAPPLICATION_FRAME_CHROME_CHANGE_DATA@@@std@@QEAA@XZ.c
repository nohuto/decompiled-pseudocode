/*
 * XREFs of ??1?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEAA@XZ @ 0x18012D32C
 * Callers:
 *     __lambda_6c7f1af74cf45db94091666f28e782cd_::operator()_::_1_::dtor$5 @ 0x1800E8110 (__lambda_6c7f1af74cf45db94091666f28e782cd_--operator()_--_1_--dtor$5.c)
 *     _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::dtor$5 @ 0x18013CF71 (_CApplicationManager--_HandleUniversalFrameChangeRequest_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::~optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
  return result;
}
