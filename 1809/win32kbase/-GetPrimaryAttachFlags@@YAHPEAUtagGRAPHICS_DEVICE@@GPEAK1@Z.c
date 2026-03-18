/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C005586C
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00546B0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0101620 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned __int16 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax
  int v10; // eax
  unsigned __int16 v11; // bx
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v18; // eax
  const WCHAR *v19; // rax
  __int64 v20; // rcx
  WCHAR *v21; // r15
  NTSTATUS v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h]
  const wchar_t *v29; // [rsp+98h] [rbp-68h]
  unsigned int *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  _DWORD *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  _BYTE v36[40]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  v25[0] = 0;
  v9 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v9 + 24) = a1;
  WdLogEvent5_WdTrace(v9);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = v25;
  v29 = L"Attach.ToDesktop";
  QueryTable.DefaultLength = 4;
  v28 = 288;
  v31 = 67108868;
  v33 = 4;
  *a4 = 0;
  v32 = v25;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v27 = 0LL;
  v30 = a4;
  v34 = 0LL;
  v35 = 0;
  memset(v36, 0, sizeof(v36));
  v10 = *((_DWORD *)a1 + 40);
  if ( (v10 & 0x2000000) != 0 )
  {
    v11 = -1;
  }
  else if ( (v10 & 0x4000000) != 0 )
  {
    v11 = a2;
  }
  else
  {
    v11 = 0;
  }
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL,
                                                 v11);
  v13 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v13);
  }
  else
  {
    v19 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL, v11);
    v21 = (WCHAR *)v19;
    if ( v19 )
    {
      v22 = RtlQueryRegistryValues(0x40000000u, v19, &QueryTable, 0LL, 0LL);
      ZwClose(v21);
      if ( v22 < 0 )
      {
        v23 = WdLogNewEntry5_WdTrace(v14);
        WdLogEvent5_WdTrace(v23);
        *a4 = 0;
        *a3 = 0;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdTrace(v20);
      WdLogEvent5_WdTrace(v24);
    }
  }
  v15 = *((_DWORD *)a1 + 40);
  if ( a2 )
  {
    v18 = v15 & 0x2000000;
    v14 = 0xFFFFLL;
    if ( a2 == 0xFFFF )
    {
      LOBYTE(v4) = v18 != 0;
    }
    else if ( !v18 )
    {
      *a4 = *((_DWORD *)a1 + 65);
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( (v15 & 0x6000000) != 0 )
LABEL_8:
    *a4 = v4;
LABEL_9:
  v16 = WdLogNewEntry5_WdTrace(v14);
  *(_QWORD *)(v16 + 24) = *a3;
  *(_QWORD *)(v16 + 32) = *a4;
  WdLogEvent5_WdTrace(v16);
  return 1LL;
}
