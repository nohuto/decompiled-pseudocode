/*
 * XREFs of KseQueryDeviceData @ 0x14074D8E0
 * Callers:
 *     KseQueryDeviceFlags @ 0x14074D7C0 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x140908970 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x1401547BC (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x1402B6DB4 (KsepDebugPrint.c)
 *     KsepDbCacheInsertDevice @ 0x14074BE90 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x14074D6D8 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x14074DA68 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14074DB5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x14074DC9C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x14074DE20 (KsepCacheDeviceFree.c)
 *     KseResetDeviceCache @ 0x1408820C4 (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  int v9; // eax
  int RegistryDeviceData; // ebx
  _DWORD *v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  void *v15; // [rsp+20h] [rbp-38h]
  int v16[2]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v16 = 0LL;
  if ( dword_140468164 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *a3;
  *a3 = 0;
  if ( (v9 & 0x20000000) == 0 )
  {
    HIDWORD(v15) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData(SourceString);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache();
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, (int)a3, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v16);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v12 = a3;
  v13 = *(_QWORD *)v16;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(*(__int64 *)v16, a2, v12, a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString, v13) < 0 )
    KsepCacheDeviceFree(v13);
LABEL_14:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v14]) = 0;
    LODWORD(KsepHistoryMessages[v14]) = 591858;
    if ( (KsepDebugFlag & 1) != 0 )
    {
      LODWORD(v15) = RegistryDeviceData;
      KsepDebugPrint(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v15);
    }
    LODWORD(v15) = RegistryDeviceData;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v15);
  }
  return (unsigned int)RegistryDeviceData;
}
