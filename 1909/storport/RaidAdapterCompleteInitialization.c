/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C001AC2C
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     RaInitializePower @ 0x1C001AE34 (RaInitializePower.c)
 *     StorCreateScsiSymbolicLink @ 0x1C001B32C (StorCreateScsiSymbolicLink.c)
 *     RaInitializeRaidResources @ 0x1C001BCB8 (RaInitializeRaidResources.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     RaFreeRaidResources @ 0x1C004AA04 (RaFreeRaidResources.c)
 *     RaidIsDmaInitialized @ 0x1C006F210 (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C006F228 (RaidInitializeDma.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  const struct _TlgProvider_t *v8; // rcx
  int ScsiSymbolicLink; // edi
  int v10; // eax
  const WCHAR *v11; // rdx
  LPCWSTR v12; // r10
  TraceLoggingHProvider v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  char v16; // [rsp+30h] [rbp-49h] BYREF
  int v17; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-19h]
  int v20; // [rsp+68h] [rbp-11h]
  int v21; // [rsp+6Ch] [rbp-Dh]
  int *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  char *v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+9Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp+27h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 402) == 1 )
    v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 528) + 184LL) & 0x80u) != 0 ? 224 : 184;
  result = RaInitializeRaidResources((PSLIST_HEADER)(a1 + 832), *(_BYTE *)(a1 + 4450), v1);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 904);
    *(_DWORD *)(a1 + 800) = v4;
    *(_DWORD *)(a1 + 796) = v4;
    if ( *(_BYTE *)(a1 + 4450) )
    {
      if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 696) )
      {
        ScsiSymbolicLink = RaidInitializeDma(v5, *(_QWORD *)(a1 + 32), a1 + 304);
        if ( ScsiSymbolicLink < 0 )
          goto LABEL_15;
      }
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 352);
    if ( v7 > *(_DWORD *)(v6 + 152) )
      *(_DWORD *)(v6 + 152) = v7;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40));
    if ( ScsiSymbolicLink < 0 )
    {
LABEL_15:
      RaFreeRaidResources((PSLIST_HEADER)(a1 + 832));
      return (unsigned int)ScsiSymbolicLink;
    }
    else
    {
      if ( (unsigned int)dword_1C0062058 > 5 )
      {
        if ( TlgKeywordOn(v8, 0x400000000000uLL) )
        {
          v10 = *(_DWORD *)(a1 + 56);
          v11 = *(const WCHAR **)(a1 + 4800);
          v21 = 0;
          v24 = 0;
          v17 = v10;
          v16 = *(_BYTE *)(a1 + 4356);
          v19 = a1 + 5128;
          v22 = &v17;
          v20 = 16;
          v23 = 4;
          TlgCreateWsz(&pDesc, v11);
          v28 = 0;
          v26 = &v16;
          v27 = 1;
          TlgCreateWsz(&v29, v12);
          TlgWrite(v13, &unk_1C0056A19, v14, v15, 7u, &pData);
        }
      }
      RaInitializePower(a1);
      *(_DWORD *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 276) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 264) = 1;
      *(_DWORD *)(a1 + 268) = 1;
    }
  }
  return result;
}
