/*
 * XREFs of CmpCopyCompressedName @ 0x1405AF298
 * Callers:
 *     CmpMarkIndexDirty @ 0x1405AD40C (CmpMarkIndexDirty.c)
 *     CmpAddSubKeyToList @ 0x1405AECF4 (CmpAddSubKeyToList.c)
 *     CmpPopulateNodeInformation @ 0x1405AF14C (CmpPopulateNodeInformation.c)
 *     CmpInitializeValueNameString @ 0x1405AF46C (CmpInitializeValueNameString.c)
 *     CmpQueryKeyValueData @ 0x1405D1B30 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405D75E0 (CmpConstructNameFromKeyNodes.c)
 *     CmAddLogForAction @ 0x1406BCEDC (CmAddLogForAction.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1407F0C34 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x1407FD7EC (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x1409CEA0C (CmpGetNodeName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
