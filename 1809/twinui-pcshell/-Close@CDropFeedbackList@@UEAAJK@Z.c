/*
 * XREFs of ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x18036E060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x18036E9D0 (-_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z.c)
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180376FC8 (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 */

__int64 __fastcall CDropFeedbackList::Close(CDropFeedbackList *this, unsigned int a2)
{
  int Instance; // ebx
  struct IDropFeedbackItem *v6[3]; // [rsp+50h] [rbp-28h] BYREF

  memset(v6, 0, sizeof(v6));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v6);
  Instance = CDropFeedbackItem_CreateInstance(a2, 1LL, 0LL);
  if ( Instance >= 0 )
    Instance = CDropFeedbackList::_AddUpdate(this, v6[0]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v6);
  return (unsigned int)Instance;
}
