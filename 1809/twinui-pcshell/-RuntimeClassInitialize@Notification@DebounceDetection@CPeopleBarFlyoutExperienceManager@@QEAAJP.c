/*
 * XREFs of ?RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1801640F8
 * Callers:
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1801615C8 (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *this,
        struct CPeopleBarFlyoutExperienceManager::DebounceDetection *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         0x404u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
    v4 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, char *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &SID_ImmersiveRawInputProvider,
           &GUID_c1235996_b084_4af2_8663_28f19352097e,
           (char *)this + 48);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *, __int64, char *))(**((_QWORD **)this + 6) + 24LL))(
             *((_QWORD *)this + 6),
             this,
             1LL,
             (char *)this + 56);
      v5 = v4;
      if ( v4 >= 0 )
      {
        *((_QWORD *)this + 5) = a2;
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 540LL;
    }
    else
    {
      v6 = 538LL;
    }
  }
  else
  {
    v6 = 537LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
