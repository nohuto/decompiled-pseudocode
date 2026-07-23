/*
 * XREFs of PiPnpRtlGetFilteredDeviceList @ 0x1406D3204
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1406D361C (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetCmObjectListFromCache @ 0x140701DE0 (PiDmGetCmObjectListFromCache.c)
 */

__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  int v1; // ebx
  wchar_t *PoolWithTag; // rsi
  __int64 v4; // rsi
  NTSTATUS inited; // ebx
  const WCHAR *v8; // rdx
  __int64 v9; // r9
  char v10; // al
  NTSTATUS CmObjectListFromCache; // eax
  wchar_t *v12; // rcx
  ULONG v13; // edx
  __int64 v14; // r9
  const wchar_t *v15; // rax
  int v16; // ebx
  wchar_t *v17; // rax
  __int64 v18; // r9
  size_t *pcchRemaining; // [rsp+20h] [rbp-49h]
  int pcchRemaininga; // [rsp+20h] [rbp-49h]
  int pcchRemainingb; // [rsp+20h] [rbp-49h]
  int dwFlags; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsa; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsb; // [rsp+28h] [rbp-41h]
  __int64 v25; // [rsp+30h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v27[4]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v28[6]; // [rsp+70h] [rbp+7h] BYREF
  size_t v29; // [rsp+D0h] [rbp+67h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = 0LL;
  if ( (v1 & 0x7C) != 0 )
  {
    inited = -1073741802;
LABEL_26:
    if ( PoolWithTag )
    {
      v13 = 1198550608;
      v12 = PoolWithTag;
      goto LABEL_13;
    }
  }
  else
  {
    if ( (v1 & 1) != 0 )
    {
      v15 = *(const wchar_t **)(a1 + 16);
      if ( v15 )
      {
        v16 = 0;
        while ( *v15 )
        {
          if ( *v15 == 92 )
            break;
          if ( (unsigned int)++v16 > 2 )
            break;
          v17 = wcschr(v15, 0x5Cu);
          if ( v17 )
          {
            v15 = v17 + 1;
            if ( v15 )
              continue;
          }
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, *(NTSTRSAFE_PCWSTR *)(a1 + 16), &ppszDestEnd, &v29, 0x800u);
          if ( inited >= 0 )
          {
            if ( v29 < 2 )
            {
              inited = -1073741811;
            }
            else
            {
              *(_DWORD *)ppszDestEnd = 92;
              inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
              if ( inited >= 0 )
              {
                memset(v27, 0, sizeof(v27));
                v18 = *(_QWORD *)(a1 + 48);
                v27[0] = &DestinationString;
                LOBYTE(v27[1]) = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
                v27[2] = *(_QWORD *)(a1 + 32);
                v27[3] = *(_QWORD *)(a1 + 40);
                inited = PiDmGetCmObjectListFromCache(
                           1,
                           (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                           (unsigned int)v27,
                           v18,
                           *(_DWORD *)(a1 + 56),
                           *(_QWORD *)(a1 + 64));
              }
            }
          }
          goto LABEL_26;
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( (v1 & 2) == 0 )
    {
      if ( (v1 & 0x80u) == 0 )
      {
        memset(v27, 0, sizeof(v27));
        v14 = *(_QWORD *)(a1 + 48);
        v27[2] = *(_QWORD *)(a1 + 32);
        v27[3] = *(_QWORD *)(a1 + 40);
        dwFlagsb = *(_QWORD *)(a1 + 64);
        pcchRemainingb = *(_DWORD *)(a1 + 56);
        v27[0] = 0LL;
        LOBYTE(v27[1]) = BYTE1(v1) & 1;
        return (unsigned int)PiDmGetCmObjectListFromCache(
                               1,
                               (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                               (unsigned int)v27,
                               v14,
                               pcchRemainingb,
                               dwFlagsb);
      }
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        memset(v27, 0, sizeof(v27));
        v27[2] = *(_QWORD *)(a1 + 32);
        v27[3] = *(_QWORD *)(a1 + 40);
        v25 = *(_QWORD *)(a1 + 64);
        dwFlags = *(_DWORD *)(a1 + 56);
        pcchRemaining = *(size_t **)(a1 + 48);
        v27[0] = 0LL;
        LOBYTE(v27[1]) = BYTE1(v1) & 1;
        return (unsigned int)PiDmGetCmObjectConstraintListFromCache(
                               5,
                               v4,
                               (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                               (unsigned int)v27,
                               (__int64)pcchRemaining,
                               dwFlags,
                               v25);
      }
      return (unsigned int)-1073741811;
    }
    v8 = *(const WCHAR **)(a1 + 16);
    if ( !v8 )
      return (unsigned int)-1073741811;
    inited = RtlInitUnicodeStringEx(&DestinationString, v8);
    if ( inited >= 0 )
    {
      memset(v28, 0, sizeof(v28));
      v9 = *(_QWORD *)(a1 + 48);
      v28[0] = &DestinationString;
      v10 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
      v28[2] = 0LL;
      LOBYTE(v28[1]) = v10;
      v28[4] = *(_QWORD *)(a1 + 32);
      v28[5] = *(_QWORD *)(a1 + 40);
      dwFlagsa = *(_QWORD *)(a1 + 64);
      pcchRemaininga = *(_DWORD *)(a1 + 56);
      LODWORD(v28[3]) = 0;
      CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                                1,
                                (unsigned int)PiPnpRtlServiceFilterCallback,
                                (unsigned int)v28,
                                v9,
                                pcchRemaininga,
                                dwFlagsa);
      v12 = (wchar_t *)v28[2];
      inited = CmObjectListFromCache;
      if ( v28[2] )
      {
        v13 = 0;
LABEL_13:
        ExFreePoolWithTag(v12, v13);
      }
    }
  }
  return (unsigned int)inited;
}
