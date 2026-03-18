/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0043DC0
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0042C08 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0042E30 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0127760 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0012318 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(struct tagGRAPHICS_DEVICE *a1, __int16 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v16; // eax
  const WCHAR *v17; // rax
  __int64 v18; // rcx
  WCHAR *v19; // r14
  NTSTATUS v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD v23[4]; // [rsp+30h] [rbp-A9h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-99h] BYREF
  __int64 v25; // [rsp+78h] [rbp-61h]
  int v26; // [rsp+80h] [rbp-59h]
  const wchar_t *v27; // [rsp+88h] [rbp-51h]
  unsigned int *v28; // [rsp+90h] [rbp-49h]
  int v29; // [rsp+98h] [rbp-41h]
  _DWORD *v30; // [rsp+A0h] [rbp-39h]
  int v31; // [rsp+A8h] [rbp-31h]
  __int64 v32; // [rsp+B0h] [rbp-29h]
  int v33; // [rsp+B8h] [rbp-21h]
  _BYTE v34[40]; // [rsp+C0h] [rbp-19h] BYREF

  v4 = 0;
  v23[0] = 0;
  v9 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v9 + 24) = a1;
  WdLogEvent5_WdTrace(v9);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = v23;
  v27 = L"Attach.ToDesktop";
  QueryTable.DefaultLength = 4;
  v26 = 288;
  v29 = 67108868;
  v31 = 4;
  *a4 = 0;
  v30 = v23;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v25 = 0LL;
  v28 = a4;
  v32 = 0LL;
  v33 = 0;
  memset(v34, 0, sizeof(v34));
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL);
  v11 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v11);
  }
  else
  {
    v17 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
    v19 = (WCHAR *)v17;
    if ( v17 )
    {
      v20 = RtlQueryRegistryValues(0x40000000u, v17, &QueryTable, 0LL, 0LL);
      ZwClose(v19);
      if ( v20 < 0 )
      {
        v21 = WdLogNewEntry5_WdTrace(v12);
        WdLogEvent5_WdTrace(v21);
        *a4 = 0;
        *a3 = 0;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdTrace(v18);
      WdLogEvent5_WdTrace(v22);
    }
  }
  v13 = *((_DWORD *)a1 + 40);
  if ( a2 )
  {
    v16 = v13 & 0x2000000;
    v12 = 0xFFFFLL;
    if ( a2 == -1 )
    {
      LOBYTE(v4) = v16 != 0;
    }
    else if ( !v16 )
    {
      *a4 = *((_DWORD *)a1 + 65);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( (v13 & 0x6000000) != 0 )
LABEL_5:
    *a4 = v4;
LABEL_6:
  v14 = WdLogNewEntry5_WdTrace(v12);
  *(_QWORD *)(v14 + 24) = *a3;
  *(_QWORD *)(v14 + 32) = *a4;
  WdLogEvent5_WdTrace(v14);
  return 1LL;
}
