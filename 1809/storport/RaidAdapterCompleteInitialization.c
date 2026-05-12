/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C001E9EC
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     StorCreateScsiSymbolicLink @ 0x1C001E0D8 (StorCreateScsiSymbolicLink.c)
 *     RaInitializePower @ 0x1C001EBF4 (RaInitializePower.c)
 *     RaInitializeRaidResources @ 0x1C001EC34 (RaInitializeRaidResources.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaFreeRaidResources @ 0x1C004BFF8 (RaFreeRaidResources.c)
 *     RaidIsDmaInitialized @ 0x1C006E904 (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C006E91C (RaidInitializeDma.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  int ScsiSymbolicLink; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  const WCHAR *v14; // rdx
  LPCWSTR v15; // r10
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  char v19; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+68h] [rbp-11h]
  int v24; // [rsp+6Ch] [rbp-Dh]
  int *v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  char *v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+9Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp+27h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 418) == 1 )
    v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 184LL) & 0x80u) != 0 ? 224 : 184;
  result = RaInitializeRaidResources((PSLIST_HEADER)(a1 + 896), *(_BYTE *)(a1 + 4514), v1);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 968);
    *(_DWORD *)(a1 + 864) = v4;
    *(_DWORD *)(a1 + 860) = v4;
    if ( *(_BYTE *)(a1 + 4514) )
    {
      if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 720) )
      {
        ScsiSymbolicLink = RaidInitializeDma(v5, *(_QWORD *)(a1 + 32), a1 + 320);
        if ( ScsiSymbolicLink < 0 )
          goto LABEL_15;
      }
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 368);
    if ( v7 > *(_DWORD *)(v6 + 152) )
      *(_DWORD *)(v6 + 152) = v7;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40), (unsigned int *)(a1 + 56));
    if ( ScsiSymbolicLink < 0 )
    {
LABEL_15:
      RaFreeRaidResources((PSLIST_HEADER)(a1 + 896));
      return (unsigned int)ScsiSymbolicLink;
    }
    else
    {
      if ( (unsigned int)dword_1C0061058 > 5 )
      {
        if ( TlgKeywordOn(v9, 0x400000000000uLL) )
        {
          v13 = *(_DWORD *)(a1 + 56);
          v14 = *(const WCHAR **)(a1 + 4864);
          v24 = 0;
          v27 = 0;
          v20 = v13;
          v19 = *(_BYTE *)(a1 + 4420);
          v22 = a1 + 5256;
          v25 = &v20;
          v23 = 16;
          v26 = 4;
          TlgCreateWsz(&pDesc, v14);
          v31 = 0;
          v29 = &v19;
          v30 = 1;
          TlgCreateWsz(&v32, v15);
          TlgWrite(v16, &unk_1C0056E89, v17, v18, 7u, &pData);
        }
      }
      RaInitializePower(a1, v8, v11, v12);
      *(_DWORD *)(a1 + 288) = 0;
      *(_BYTE *)(a1 + 292) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 280) = 1;
      *(_DWORD *)(a1 + 284) = 1;
    }
  }
  return result;
}
