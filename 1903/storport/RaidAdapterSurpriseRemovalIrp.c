/*
 * XREFs of RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     RaForwardIrp @ 0x1C00122C4 (RaForwardIrp.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C003367C (RaidAdapterDisableDeviceInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x1C00337B8 (RaidAdapterDisableRpmbInterface.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C003405C (RaidAdapterMarkChildrenMissing.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C0037278 (RaidReleaseAdapterRemoveLockAndWait.c)
 *     RaidAdapterReleaseResources @ 0x1C0073254 (RaidAdapterReleaseResources.c)
 */

NTSTATUS __fastcall RaidAdapterSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // r15d
  char v3; // si
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  char v8; // r8
  char v9; // al
  const WCHAR *v10; // rdx
  int v11; // r11d
  int v12; // esi
  LPCWSTR v13; // r10
  int v14; // r11d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  UINT32 cData; // [rsp+20h] [rbp-A9h]
  char v19; // [rsp+30h] [rbp-99h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+31h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-59h]
  int v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+7Ch] [rbp-4Dh]
  char *v24; // [rsp+80h] [rbp-49h]
  int v25; // [rsp+88h] [rbp-41h]
  int v26; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-39h] BYREF
  char *v28; // [rsp+A0h] [rbp-29h]
  int v29; // [rsp+A8h] [rbp-21h]
  int v30; // [rsp+ACh] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+B0h] [rbp-19h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+C0h] [rbp-9h]
  int v33; // [rsp+C8h] [rbp-1h]
  int v34; // [rsp+CCh] [rbp+3h]
  char *v35; // [rsp+D0h] [rbp+7h]
  int v36; // [rsp+D8h] [rbp+Fh]
  int v37; // [rsp+DCh] [rbp+13h]
  char *v38; // [rsp+E0h] [rbp+17h]
  int v39; // [rsp+E8h] [rbp+1Fh]
  int v40; // [rsp+ECh] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = 0;
  *(_DWORD *)(a1 + 88) = 5;
  if ( (unsigned int)(v2 - 5) > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableRpmbInterface(a1);
    if ( (unsigned int)RaidIsAdapterControlSupported(a1, 16) )
    {
      v5 = RaCallMiniportAdapterControl(a1 + 296);
      v3 = 1;
    }
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterMarkChildrenMissing(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v8);
  }
  if ( StorEtwLoggingEnabled )
  {
    *(_OWORD *)((char *)&hProvider.ProviderMetadataPtr + 7) = 0uLL;
    IoGetActivityIdIrp(a2, (char *)&hProvider.ProviderMetadataPtr + 7);
    if ( (byte_1C0061742 & 0x20) != 0 )
    {
      cData = a2->IoStatus.Status;
      McTemplateK0pd(
        (struct _MCGEN_TRACE_CONTEXT *)a1,
        &EventPnpRequestComplete,
        (const GUID *)((char *)&hProvider.ProviderMetadataPtr + 7),
        a2,
        cData);
    }
  }
  if ( (unsigned int)dword_1C0061058 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v9 = *(_BYTE *)(a1 + 4356);
    v10 = *(const WCHAR **)(a1 + 4800);
    v23 = 0;
    v26 = 0;
    v19 = v9;
    v21 = a1 + 5128;
    v24 = (char *)&hProvider.LevelPlus1 + 3;
    *(unsigned int *)((char *)&hProvider.LevelPlus1 + 3) = v4;
    LOBYTE(hProvider.LevelPlus1) = v2;
    BYTE1(hProvider.LevelPlus1) = v3;
    *(unsigned int *)((char *)&hProvider.LevelPlus1 + 7) = v5;
    v22 = 16;
    v25 = 4;
    TlgCreateWsz(&pDesc, v10);
    v30 = 0;
    v28 = &v19;
    v12 = v11 - 3;
    v29 = v11 - 3;
    TlgCreateWsz(&v31, v13);
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v35 = (char *)&hProvider.LevelPlus1 + 1;
    v38 = (char *)&hProvider.LevelPlus1 + 7;
    p_hProvider = &hProvider;
    v33 = v12;
    v36 = v12;
    v39 = v14;
    TlgWrite(&hProvider, &unk_1C0055B78, v15, v16, 0xAu, (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.KeywordAll + 7));
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
