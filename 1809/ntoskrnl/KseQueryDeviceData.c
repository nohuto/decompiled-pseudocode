/*
 * XREFs of KseQueryDeviceData @ 0x140720930
 * Callers:
 *     KseQueryDeviceFlags @ 0x140720810 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x1408CB560 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x1400F4D38 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x140178F7C (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x14029FC44 (KsepDebugPrint.c)
 *     KsepDbCacheQueryDevice @ 0x140720AB8 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140720B9C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x140720CDC (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x140720E50 (KsepCacheDeviceFree.c)
 *     KsepDbCacheQueryDeviceData @ 0x140720EAC (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x1407227F0 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x140847548 (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, int *a3, _DWORD *a4, void *a5)
{
  int v6; // edi
  int v9; // eax
  int RegistryDeviceData; // ebx
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rax
  void *v15; // [rsp+20h] [rbp-38h]
  int v16[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v16 = 0LL;
  v6 = (int)a3;
  if ( dword_14043C8B4 != 2 || (KseEngine & 2) != 0 )
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
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v16);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v12 = v6;
  v13 = *(_QWORD *)v16;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v16[0], a2, v12, (int)a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
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
