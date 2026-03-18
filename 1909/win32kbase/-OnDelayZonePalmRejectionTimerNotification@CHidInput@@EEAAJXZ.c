/*
 * XREFs of ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017C990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0035C58 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C005766C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0057AD4 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C0180AC8 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnDelayZonePalmRejectionTimerNotification(CHidInput *this)
{
  DelayZonePalmRejection *Instance; // rax
  char v3; // [rsp+38h] [rbp+10h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v3, 1, 0);
  Instance = DelayZonePalmRejection::GetInstance();
  DelayZonePalmRejection::PalmRejectTimerProc(Instance);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v3);
  return 0LL;
}
