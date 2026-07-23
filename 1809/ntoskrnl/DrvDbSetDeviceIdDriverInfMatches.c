/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x140903824
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140903BA4 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406F7860 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  const wchar_t *v3; // rsi
  int inited; // ebx
  unsigned int v6; // r13d
  const wchar_t *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  wchar_t *PoolWithTag; // r14
  unsigned int v13; // r12d
  int v14; // eax
  const wchar_t *v15; // rdi
  size_t v16; // r13
  wchar_t v17; // ax
  __int64 v18; // rax
  ULONG v19; // r8d
  _BYTE *v20; // r9
  ULONG v21; // eax
  __int64 v22; // rax
  unsigned int v23; // edi
  unsigned int v24; // esi
  int v25; // eax
  int v27; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-24h]
  _BYTE v29[4]; // [rsp+48h] [rbp-20h] BYREF
  int InfoKey; // [rsp+4Ch] [rbp-1Ch]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int MaxCount; // [rsp+B0h] [rbp+48h] BYREF
  int MaxCount_4; // [rsp+B4h] [rbp+4Ch]
  HANDLE KeyHandle; // [rsp+B8h] [rbp+50h]
  const wchar_t *v35; // [rsp+C0h] [rbp+58h]
  unsigned int v36; // [rsp+C8h] [rbp+60h] BYREF

  v35 = a3;
  KeyHandle = a2;
  MaxCount_4 = HIDWORD(a1);
  v3 = a3;
  v36 = 0;
  MaxCount = 0;
  v27 = 0;
  InfoKey = PnpCtxRegQueryInfoKey(a1, (int)a2, 0, 0, (__int64)&v36, (__int64)&MaxCount, 0LL);
  inited = InfoKey;
  if ( InfoKey >= 0 )
  {
    v6 = MaxCount + 1;
    v28 = MaxCount + 1;
    if ( v3 )
    {
      v7 = v3;
      if ( *v3 )
      {
        do
        {
          v8 = wcschr(v7, 0x5Cu);
          if ( v8 )
          {
            v9 = v8 - v7;
          }
          else
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
          }
          v10 = v9 + 1;
          if ( v10 > v6 )
            v6 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v7 += v11 + 1;
        }
        while ( *v7 );
        inited = InfoKey;
        v28 = v6;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v6, 0x42444450u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v13 = 0;
      if ( v36 )
      {
        while ( 1 )
        {
          MaxCount = v6;
          v14 = PnpCtxRegEnumValue(
                  0LL,
                  (__int64)KeyHandle,
                  v13,
                  (__int64)PoolWithTag,
                  (__int64)&MaxCount,
                  (__int64)&v27,
                  0LL,
                  0LL);
          inited = v14;
          if ( v14 < 0 )
            break;
          if ( v27 == 3 || !v27 )
          {
            v15 = v3;
            if ( *v3 )
            {
              v16 = MaxCount;
              do
              {
                if ( !wcsncmp(v15, PoolWithTag, v16) )
                {
                  v17 = v15[v16];
                  if ( v17 == 92 || !v17 )
                    break;
                }
                v18 = -1LL;
                do
                  ++v18;
                while ( v15[v18] );
                v15 += v18 + 1;
              }
              while ( *v15 );
              v3 = v35;
              v6 = v28;
            }
            if ( !*v15 )
            {
              inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
              if ( inited >= 0 )
                inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
              if ( inited == -1073741772 )
              {
                inited = 0;
              }
              else if ( inited < 0 )
              {
                goto LABEL_66;
              }
            }
          }
          if ( ++v13 >= v36 )
            goto LABEL_39;
        }
        if ( v14 == -2147483622 )
          inited = 0;
      }
LABEL_39:
      if ( inited >= 0 )
      {
        while ( *v3 )
        {
          inited = DrvDbSplitDeviceIdDriverInfMatch(v3, PoolWithTag, v6, (__int64)v29);
          if ( inited < 0 )
            break;
          if ( v29[0] )
          {
            v19 = 3;
            v20 = v29;
            v21 = 4;
          }
          else
          {
            v19 = 0;
            v20 = 0LL;
            v21 = 0;
          }
          inited = RegRtlSetValue(KeyHandle, PoolWithTag, v19, v20, v21);
          if ( inited < 0 )
            break;
          v22 = -1LL;
          do
            ++v22;
          while ( v3[v22] );
          v3 += v22 + 1;
        }
      }
    }
    else
    {
      v23 = v36;
      if ( !v36 )
        return 0;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v6, 0x42444450u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          MaxCount = v6;
          inited = PnpCtxRegEnumValue(0LL, (__int64)a2, v24, (__int64)PoolWithTag, (__int64)&MaxCount, 0LL, 0LL, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
          if ( inited >= 0 )
            inited = ZwDeleteValueKey(a2, &DestinationString);
          if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
          {
            v25 = 0;
            if ( inited != -1073741772 )
              v25 = inited;
            ++v24;
            inited = v25;
            if ( v24 < v23 )
              continue;
          }
          goto LABEL_66;
        }
        if ( inited == -2147483622 )
          inited = 0;
      }
    }
LABEL_66:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)inited;
}
