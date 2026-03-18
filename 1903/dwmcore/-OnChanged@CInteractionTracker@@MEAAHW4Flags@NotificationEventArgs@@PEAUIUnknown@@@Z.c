/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DAF40
 * Callers:
 *     <none>
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800EAFE0 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x1801D99C8 (-CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D9A44 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18021F36C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, int a2, struct IUnknown *a3)
{
  unsigned int v5; // edx
  __int64 i; // rax

  if ( a2 == 7 )
    goto LABEL_7;
  if ( a2 > 7 )
  {
    if ( a2 <= 9 )
    {
      if ( a3 )
      {
        v5 = 0;
        for ( i = a1 + 344; !*(_QWORD *)i || *(struct IUnknown **)(*(_QWORD *)i + 16LL) != a3; i += 8LL )
        {
          if ( ++v5 >= 2 )
          {
            if ( CInteractionTracker::CheckAndUnRegisterDefaultAnimations((CInteractionTracker *)a1, a3) )
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 416LL) |= 2u;
            return 1LL;
          }
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v5, 0);
        if ( *(_DWORD *)(a1 + 168) == 3 )
          CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
      }
    }
    else if ( a2 == 10 || a2 > 11 && a2 <= 13 )
    {
LABEL_7:
      InteractionSourceManager::OnManipulationChanged(a1 + 192);
    }
  }
  return 1LL;
}
