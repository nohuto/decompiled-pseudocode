/*
 * XREFs of DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F639C (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F67C4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdDriverInfMatches(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  unsigned int *v6; // r12
  unsigned int v7; // r13d
  __int64 v8; // r15
  int InfoKey; // ebx
  unsigned int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  wchar_t *PoolWithTag; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // edi
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v22; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-14h] BYREF
  int v24; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-Ch]
  unsigned int v26; // [rsp+A0h] [rbp+48h] BYREF
  int v27; // [rsp+A4h] [rbp+4Ch]
  __int64 v28; // [rsp+A8h] [rbp+50h]
  __int64 v29; // [rsp+B0h] [rbp+58h]
  unsigned int v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v27 = HIDWORD(a1);
  v6 = a5;
  v7 = 0;
  v8 = a3;
  v23 = 0;
  v26 = 0;
  v22 = 0;
  v25 = 0;
  *a5 = 0;
  InfoKey = PnpCtxRegQueryInfoKey((unsigned int)&v23, a2, 0, 0, (__int64)&v23, (__int64)&v26, 0LL);
  if ( InfoKey >= 0 )
  {
    v10 = v23;
    v11 = v26 + 1;
    if ( v23 )
    {
      v12 = v26 + 1;
      if ( a6 )
      {
        v12 = v26 + 17;
        v11 = v26 + 17;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x42444450u);
      if ( PoolWithTag )
      {
        if ( v10 )
        {
          do
          {
            v26 = v11;
            if ( a6 )
            {
              LODWORD(a5) = 4;
              v15 = PnpCtxRegEnumValue(
                      v13,
                      v28,
                      v7,
                      (_DWORD)PoolWithTag,
                      (__int64)&v26,
                      (__int64)&v22,
                      (__int64)&v24,
                      (__int64)&a5);
              InfoKey = v15;
              if ( v15 < 0 )
                goto LABEL_38;
              if ( !v26 )
              {
LABEL_36:
                InfoKey = -1073741595;
                goto LABEL_26;
              }
              if ( v22 == 3 )
              {
                if ( (_DWORD)a5 != 4 )
                  goto LABEL_36;
              }
              else
              {
                v16 = 0LL;
                v24 = 0;
              }
              InfoKey = DrvDbBuildDeviceIdDriverInfMatch(v16, &v24, &PoolWithTag[v26], v11 - v26);
              if ( InfoKey < 0 )
                goto LABEL_26;
              v17 = -1LL;
              do
                ++v17;
              while ( PoolWithTag[v17] );
              v18 = v17 + 1;
            }
            else
            {
              v15 = PnpCtxRegEnumValue(v13, v28, v7, (_DWORD)PoolWithTag, (__int64)&v26, (__int64)&v22, 0LL, 0LL);
              InfoKey = v15;
              if ( v15 < 0 )
              {
LABEL_38:
                if ( v15 == -2147483622 )
                  InfoKey = 0;
                break;
              }
              v13 = v26;
              if ( !v26 )
              {
                InfoKey = -1073741595;
                break;
              }
              PoolWithTag[v26] = 0;
              v18 = v13 + 1;
            }
            if ( v8 )
            {
              v13 = v25;
              v19 = v18 + v25;
              if ( v18 + v25 < v30 )
              {
                RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v29 + 2LL * v25), v30 - v25, PoolWithTag, 0LL, 0LL, 0x900u);
                v25 = v19;
              }
              v8 = v29;
            }
            *v6 += v18;
            ++v7;
          }
          while ( v7 < v23 );
        }
        if ( InfoKey >= 0 )
        {
          if ( *v6 )
          {
            v20 = *v6 + 1;
            *v6 = v20;
            if ( v8 && v20 <= v30 )
              *(_WORD *)(v8 + 2LL * (v20 - 1)) = 0;
            else
              InfoKey = -1073741789;
          }
          else
          {
            InfoKey = -1073741275;
          }
        }
LABEL_26:
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)InfoKey;
}
