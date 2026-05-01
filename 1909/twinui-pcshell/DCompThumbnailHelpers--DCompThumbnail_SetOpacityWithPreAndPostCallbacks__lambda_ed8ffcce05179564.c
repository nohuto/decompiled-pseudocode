/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1803FBBD4
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FD2F8 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1803FBDA8 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce051.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        int a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 *v6; // rdi
  int v9; // edx
  int v10; // r9d
  unsigned int v11; // ebx
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v6 = a5;
  v13 = *a4;
  a5 = (__int64 *)*a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a5);
  v11 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
          a1,
          v9,
          a3,
          v10,
          (__int64)&v13,
          (__int64)&a5,
          a6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v6);
  return v11;
}
