/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1406DA4E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406DA3B8 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140786E30 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x140787B00 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x140908BF0 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsIsProcessAppContainer @ 0x1406DA6CC (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090E220 (ExpFirmwareAccessAppContainerCheck.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v12)(_DWORD *); // r14
  __int64 v13; // rcx
  __int64 *v14; // rax
  int v15; // eax
  _DWORD *PoolWithQuotaTag; // rax
  int v19; // [rsp+30h] [rbp-88h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  int *v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+6Ch] [rbp-4Ch]

  v7 = 0;
  v8 = 0LL;
  v20 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_14;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( !a2 )
    goto LABEL_3;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
  v8 = PoolWithQuotaTag;
  v20 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v7 = -1073741670;
    goto LABEL_14;
  }
  memmove(PoolWithQuotaTag, Src, a3);
  v9 = v8;
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
    || *v8 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
  {
LABEL_3:
    v9[3] = v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
    v12 = 0LL;
    v13 = ExpFirmwareTableProviderListHead - 24;
    if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
    {
      while ( *(_DWORD *)v13 != *v9 )
      {
        v14 = *(__int64 **)(v13 + 24);
        v13 = (__int64)(v14 - 3);
        if ( &ExpFirmwareTableProviderListHead == v14 )
          goto LABEL_8;
      }
      v12 = *(__int64 (__fastcall **)(_DWORD *))(v13 + 8);
    }
LABEL_8:
    if ( v12 )
      v7 = v12(v9);
    ExReleaseResourceLite(&ExpFirmwareTableResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v12 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v15 = v8[3];
      }
      else
      {
        v15 = v9[3];
      }
      *a4 = v15 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( stru_140426DB8.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426DB8, 0x200000000000uLL) )
    {
      v19 = *v8;
      v22 = &v19;
      v23 = 4;
      v24 = 0;
      TlgWrite(&stru_140426DB8, &unk_140394562, 0LL, 0LL, 3u, &pData);
    }
  }
LABEL_14:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
