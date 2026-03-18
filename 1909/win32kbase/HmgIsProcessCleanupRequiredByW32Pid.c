/*
 * XREFs of HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00BB240
 * Callers:
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0022080 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00BB228 (HmgIsProcessCleanupRequired.c)
 */

__int64 __fastcall HmgIsProcessCleanupRequiredByW32Pid(int a1)
{
  unsigned int IsProcessCleanupRequired; // ebx
  struct _W32PROCESS *W32ProcessFromId; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  IsProcessCleanupRequired = 1;
  if ( a1 )
  {
    if ( a1 != -2147483630 )
    {
      W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
      IsProcessCleanupRequired = HmgIsProcessCleanupRequired((__int64)W32ProcessFromId);
      if ( Object )
        ObfDereferenceObject(Object);
    }
  }
  return IsProcessCleanupRequired;
}
