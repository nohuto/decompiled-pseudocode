/*
 * XREFs of WPP_RECORDER_SF_LqZ @ 0x1C0015150
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisMValidatePMWakeReason @ 0x1C0073AD0 (ndisMValidatePMWakeReason.c)
 *     ndisWdfNotifyDevicePower @ 0x1C00A7114 (ndisWdfNotifyDevicePower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A72F8 (ndisWdfNotifySystemPower.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BC184 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01300A0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rbx
  bool v12; // zf
  __int64 v14; // rdx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rax
  int v17; // [rsp+20h] [rbp-68h]

  v8 = L"NULL";
  v9 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a8 )
      v14 = *a8;
    else
      v14 = 8LL;
    if ( a8 && *a8 )
      v15 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v15 = L"NULL";
    v16 = a8;
    if ( !a8 )
      v16 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 8LL, v16, 2LL, v15, v14, 0LL);
  }
  v12 = v9 == 0LL;
  if ( v9 )
  {
    if ( *v9 )
      v8 = (const wchar_t *)*((_QWORD *)v9 + 1);
    v12 = v9 == 0LL;
  }
  if ( v12 )
    v9 = L"\b";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, 9LL, a5, v17, &a6, 4LL, &a7, 8LL, v9, 2LL, v8);
}
