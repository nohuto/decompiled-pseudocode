/*
 * XREFs of Interrupter_FilterRemoveResourceRequirements @ 0x1C0066494
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C0063950 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001F318 (Interrupter_SetSecondaryInterrupterCount.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0065E58 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0065F9C (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_FilterMessageDescriptors @ 0x1C0066290 (Interrupter_FilterMessageDescriptors.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x1C0066524 (Interrupter_IoResList_GetMessageCountAndType.c)
 */

__int64 __fastcall Interrupter_FilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x200LL) != 0 )
  {
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
    return (unsigned int)Interrupter_FilterAllMSIResources(v4, a2);
  }
  else
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, &v9, &v8, &v7);
    v5 = 0;
    if ( v7 )
      Interrupter_DetermineSecondaryInterrupterCount(a1, v8);
    else
      Interrupter_SetSecondaryInterrupterCount(a1, 0);
    Interrupter_FilterMessageDescriptors(a1, a2, v9, *(_DWORD *)(a1 + 20) + 1);
  }
  return v5;
}
