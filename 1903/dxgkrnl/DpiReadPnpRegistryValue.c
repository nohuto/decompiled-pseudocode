/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C0142644
 * Callers:
 *     DpiQueryAdapterRegistryInfo @ 0x1C00C45BC (DpiQueryAdapterRegistryInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0129540 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C016938C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016AC38 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C016BE6C (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiFdoHandleStartDevice @ 0x1C0179A60 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C017FCA8 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C0284DD0 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C028B4CC (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01427C0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *PoolWithTag; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  _QWORD *v14; // rax
  unsigned int v16; // ecx
  size_t v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v13;
      if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
      {
        v16 = PoolWithTag[2];
        v17 = a4;
        if ( a4 > v16 )
          v17 = v16;
        memmove(a3, PoolWithTag + 3, v17);
        v18 = (unsigned int)PoolWithTag[2];
        if ( a4 > (unsigned int)v18 )
          memset(&a3[v18], 0, a4 - (unsigned int)v18);
        LODWORD(a1) = 0;
      }
      else
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdEvent(0x80000000LL);
        v14[4] = (int)a5;
        v14[3] = a1;
        v14[5] = 0LL;
        v14[6] = 0LL;
        WdLogEvent5_WdEvent(v14);
      }
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
    LODWORD(a1) = -1073741801;
    *(_QWORD *)(v19 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
