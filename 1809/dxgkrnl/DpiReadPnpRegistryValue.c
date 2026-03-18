/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C0134C54
 * Callers:
 *     DpiQueryAdapterRegistryInfo @ 0x1C00B3554 (DpiQueryAdapterRegistryInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B98C8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0145F18 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiFdoHandleStartDevice @ 0x1C0151AF0 (DpiFdoHandleStartDevice.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0151F38 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0153678 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C024F468 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C02553CC (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0134DC0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rcx
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Length = a4 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v14 = PoolWithTag[2];
        v15 = a4;
        if ( a4 > v14 )
          v15 = v14;
        memmove(a3, PoolWithTag + 3, v15);
        v16 = (unsigned int)PoolWithTag[2];
        if ( a4 > (unsigned int)v16 )
          memset(&a3[v16], 0, a4 - (unsigned int)v16);
        LODWORD(a1) = 0;
      }
      else
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(0x80000000LL, v11);
        v12[4] = (int)a5;
        v12[3] = a1;
        v12[5] = 0LL;
        v12[6] = 0LL;
        WdLogEvent5_WdEvent(v12);
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v8);
    LODWORD(a1) = -1073741801;
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
