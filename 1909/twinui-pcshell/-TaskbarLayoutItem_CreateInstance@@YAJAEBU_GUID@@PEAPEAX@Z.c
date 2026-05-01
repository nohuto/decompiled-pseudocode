/*
 * XREFs of ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180189CC4
 * Callers:
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x180188650 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008F3A4 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutItem@@QEAA@XZ @ 0x1801897B4 (--0TaskbarLayoutItem@@QEAA@XZ.c)
 */

__int64 __fastcall TaskbarLayoutItem_CreateInstance(const struct _GUID *a1, void **a2)
{
  TaskbarLayoutItem *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  TaskbarLayoutItem *v7; // rax
  TaskbarLayoutItem *v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TaskbarLayoutItem *v12; // [rsp+30h] [rbp+8h] BYREF
  TaskbarLayoutItem *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v12 = 0LL;
  v3 = (TaskbarLayoutItem *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v13);
    v4 = -2147024882;
    v5 = 109LL;
    v6 = 2147942414LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)v6);
    goto LABEL_8;
  }
  v7 = TaskbarLayoutItem::TaskbarLayoutItem(v3);
  v13 = v7;
  v8 = v7;
  if ( v7 )
    (*(void (__fastcall **)(TaskbarLayoutItem *))(*(_QWORD *)v7 + 8LL))(v7);
  v12 = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v9 = (**(__int64 (__fastcall ***)(TaskbarLayoutItem *, GUID *, void **))v12)(
         v12,
         &GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f,
         a2);
  v4 = v9;
  if ( v9 < 0 )
  {
    v6 = (unsigned int)v9;
    v5 = 110LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v4;
}
