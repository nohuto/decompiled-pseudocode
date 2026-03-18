/*
 * XREFs of PiPnpRtlGetFilteredDeviceList @ 0x1406F08E4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE38 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1406F0D2C (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetCmObjectListFromCache @ 0x14071C2BC (PiDmGetCmObjectListFromCache.c)
 */

__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  wchar_t *PoolWithTag; // rsi
  int v3; // eax
  __int64 v4; // rdx
  bool v5; // cf
  char v6; // al
  NTSTATUS inited; // ebx
  const WCHAR *v10; // rdx
  __int64 v11; // r9
  char v12; // al
  NTSTATUS CmObjectListFromCache; // eax
  wchar_t *v14; // rcx
  ULONG v15; // edx
  __int64 v16; // r9
  char v17; // al
  const wchar_t *v18; // rax
  int v19; // ebx
  wchar_t *v20; // rax
  __int64 v21; // r9
  char v22; // al
  size_t *pcchRemaining; // [rsp+20h] [rbp-49h]
  int pcchRemaininga; // [rsp+20h] [rbp-49h]
  int pcchRemainingb; // [rsp+20h] [rbp-49h]
  int pcchRemainingc; // [rsp+20h] [rbp-49h]
  int dwFlags; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsa; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsb; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsc; // [rsp+28h] [rbp-41h]
  __int64 v31; // [rsp+30h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v33[4]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v34[6]; // [rsp+70h] [rbp+7h] BYREF
  size_t v35; // [rsp+D0h] [rbp+67h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+D8h] [rbp+6Fh] BYREF

  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  *(_QWORD *)&DestinationString.Length = 0LL;
  PoolWithTag = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = *(_DWORD *)(a1 + 24);
  if ( (v3 & 0x7C) != 0 )
  {
    inited = -1073741802;
LABEL_30:
    if ( PoolWithTag )
    {
      v15 = 1198550608;
      v14 = PoolWithTag;
      goto LABEL_15;
    }
  }
  else
  {
    if ( (v3 & 1) != 0 )
    {
      v18 = *(const wchar_t **)(a1 + 16);
      if ( v18 )
      {
        v19 = 0;
        while ( *v18 )
        {
          if ( *v18 == 92 )
            break;
          if ( (unsigned int)++v19 > 2 )
            break;
          v20 = wcschr(v18, 0x5Cu);
          if ( v20 )
          {
            v18 = v20 + 1;
            if ( v18 )
              continue;
          }
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, *(NTSTRSAFE_PCWSTR *)(a1 + 16), &ppszDestEnd, &v35, 0x800u);
          if ( inited >= 0 )
          {
            if ( v35 < 2 )
            {
              inited = -1073741811;
            }
            else
            {
              *(_DWORD *)ppszDestEnd = 92;
              inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
              if ( inited >= 0 )
              {
                v21 = *(_QWORD *)(a1 + 48);
                v33[0] = &DestinationString;
                v22 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
                *(_DWORD *)((char *)&v33[1] + 1) = 0;
                LOBYTE(v33[1]) = v22;
                v33[2] = *(_QWORD *)(a1 + 32);
                v33[3] = *(_QWORD *)(a1 + 40);
                dwFlagsc = *(_QWORD *)(a1 + 64);
                pcchRemainingc = *(_DWORD *)(a1 + 56);
                *(_WORD *)((char *)&v33[1] + 5) = 0;
                HIBYTE(v33[1]) = 0;
                inited = PiDmGetCmObjectListFromCache(
                           1,
                           (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                           (unsigned int)v33,
                           v21,
                           pcchRemainingc,
                           dwFlagsc);
              }
            }
          }
          goto LABEL_30;
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( (v3 & 2) == 0 )
    {
      if ( (v3 & 0x80u) == 0 )
      {
        v16 = *(_QWORD *)(a1 + 48);
        v5 = (*(_DWORD *)(a1 + 24) & 0x100) != 0;
        *(_DWORD *)((char *)&v33[1] + 1) = 0;
        v17 = v33[1];
        if ( v5 )
          v17 = 1;
        *(_WORD *)((char *)&v33[1] + 5) = 0;
        LOBYTE(v33[1]) = v17;
        v33[2] = *(_QWORD *)(a1 + 32);
        v33[3] = *(_QWORD *)(a1 + 40);
        dwFlagsb = *(_QWORD *)(a1 + 64);
        pcchRemainingb = *(_DWORD *)(a1 + 56);
        HIBYTE(v33[1]) = 0;
        return (unsigned int)PiDmGetCmObjectListFromCache(
                               1,
                               (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                               (unsigned int)v33,
                               v16,
                               pcchRemainingb,
                               dwFlagsb);
      }
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        v5 = (*(_DWORD *)(a1 + 24) & 0x100) != 0;
        *(_DWORD *)((char *)&v33[1] + 1) = 0;
        v6 = v33[1];
        if ( v5 )
          v6 = 1;
        *(_WORD *)((char *)&v33[1] + 5) = 0;
        LOBYTE(v33[1]) = v6;
        v33[2] = *(_QWORD *)(a1 + 32);
        v33[3] = *(_QWORD *)(a1 + 40);
        v31 = *(_QWORD *)(a1 + 64);
        dwFlags = *(_DWORD *)(a1 + 56);
        pcchRemaining = *(size_t **)(a1 + 48);
        HIBYTE(v33[1]) = 0;
        return (unsigned int)PiDmGetCmObjectConstraintListFromCache(
                               5,
                               v4,
                               (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                               (unsigned int)v33,
                               (__int64)pcchRemaining,
                               dwFlags,
                               v31);
      }
      return (unsigned int)-1073741811;
    }
    v10 = *(const WCHAR **)(a1 + 16);
    if ( !v10 )
      return (unsigned int)-1073741811;
    inited = RtlInitUnicodeStringEx(&DestinationString, v10);
    if ( inited >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v34[0] = &DestinationString;
      v12 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
      *(_DWORD *)((char *)&v34[1] + 1) = 0;
      LOBYTE(v34[1]) = v12;
      v34[4] = *(_QWORD *)(a1 + 32);
      v34[5] = *(_QWORD *)(a1 + 40);
      dwFlagsa = *(_QWORD *)(a1 + 64);
      pcchRemaininga = *(_DWORD *)(a1 + 56);
      *(_WORD *)((char *)&v34[1] + 5) = 0;
      HIBYTE(v34[1]) = 0;
      v34[3] = 0LL;
      v34[2] = 0LL;
      CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                                1,
                                (unsigned int)PiPnpRtlServiceFilterCallback,
                                (unsigned int)v34,
                                v11,
                                pcchRemaininga,
                                dwFlagsa);
      v14 = (wchar_t *)v34[2];
      inited = CmObjectListFromCache;
      if ( v34[2] )
      {
        v15 = 0;
LABEL_15:
        ExFreePoolWithTag(v14, v15);
      }
    }
  }
  return (unsigned int)inited;
}
