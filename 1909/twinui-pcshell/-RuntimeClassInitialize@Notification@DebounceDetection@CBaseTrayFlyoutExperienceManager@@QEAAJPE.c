/*
 * XREFs of ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x18009A224
 * Callers:
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x180096AF4 (--$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *this,
        struct CBaseTrayFlyoutExperienceManager::DebounceDetection *a2)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(&v13);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    v8 = v13;
    v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL);
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)this + 6);
    Instance = v9(v8, &SID_ImmersiveRawInputProvider, &GUID_c1235996_b084_4af2_8663_28f19352097e, v10);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *, __int64, char *))(**((_QWORD **)this + 6) + 24LL))(
                   *((_QWORD *)this + 6),
                   this,
                   1LL,
                   (char *)this + 56);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        *((_QWORD *)this + 5) = a2;
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 541LL;
    }
    else
    {
      v7 = 539LL;
    }
  }
  else
  {
    v7 = 538LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
    (const char *)(unsigned int)Instance);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v6;
}
