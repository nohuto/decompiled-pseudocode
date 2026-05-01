/*
 * XREFs of ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015AD40
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18015B8C0 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x18015CA30 (-RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceE.c)
 * Callees:
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18000B684 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18015929C (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnDisplayContextChanged(
        CToastCenterExperienceManager *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int UserDisplayContext; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 1;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v7,
                         a2);
  if ( UserDisplayContext < 0 )
  {
    v4 = 1339LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  UserDisplayContext = CToastCenterExperienceManager::ChangeDisplayContext((__int64)this, v7);
  if ( UserDisplayContext < 0 )
  {
    v4 = 1340LL;
    goto LABEL_3;
  }
  return 0LL;
}
