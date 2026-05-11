/*
 * XREFs of USBParseMixerUnit @ 0x1C002B980
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00113C0 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C00276D0 (BusApiBuildFunctionUnit.c)
 *     USBHwAllocateAndBag @ 0x1C0028A9C (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002B518 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002B5BC (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C002B660 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002B7C0 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  unsigned __int8 *v5; // r15
  __int64 v6; // rdi
  int UnitString; // ebx
  unsigned __int16 v8; // ax
  int v9; // ecx
  int v10; // r8d
  unsigned int i; // edx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r14d
  unsigned int v15; // esi
  unsigned int v16; // r12d
  __int64 v17; // r13
  int v18; // eax
  unsigned int v19; // r14d
  void *v20; // rbx
  char *v21; // rsi
  char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r15
  int *v25; // r15
  __int64 v26; // r12
  int ChannelConfigForUnit; // ebx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  char v31; // al
  __int64 v33; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+10h]
  char *PoolWithTag; // [rsp+B0h] [rbp+18h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v33 = a1;
  v2 = a1;
  v4 = a2[4];
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = &a2[v4 + 5];
  v6 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v8 = *(_WORD *)(v5 + 1);
    if ( v8 )
    {
      v9 = 0;
      v10 = v8;
      for ( i = 0; i < 0x10; ++i )
      {
        v12 = v9 + 1;
        if ( !_bittest(&v10, i) )
          v12 = v9;
        v9 = v12;
      }
      if ( v12 != *v5 )
        UnitString = -1073741438;
    }
    if ( UnitString >= 0 )
    {
      v13 = a2[4];
      v14 = 0;
      v15 = 0;
      v16 = *a2 - v13 - 10;
      if ( a2[4] )
      {
        v17 = v34;
        do
        {
          v18 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v17 + 40), *(char **)(v17 + 48), a2[v15 + 5]);
          v13 = a2[4];
          v14 += v18;
          ++v15;
        }
        while ( v15 < v13 );
        v2 = v33;
      }
      v19 = ((v14 * (unsigned int)*v5) >> 3) + ((((_BYTE)v14 * *v5) & 7) != 0);
      if ( v19 <= v16 )
      {
        v21 = (char *)(v5 + 4);
      }
      else
      {
        v20 = *(void **)(v2 + 8);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x41627845u);
        v21 = PoolWithTag;
        if ( PoolWithTag )
          UnitString = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v20);
        else
          UnitString = -1073741670;
        if ( UnitString < 0 )
          return (unsigned int)-1073741670;
        memset(v21, 0, v19);
        if ( v16 )
        {
          v22 = v21;
          v23 = v16;
          v24 = v5 - (unsigned __int8 *)v21;
          do
          {
            *v22 = v22[v24 + 4];
            ++v22;
            --v23;
          }
          while ( v23 );
        }
        LOBYTE(v13) = a2[4];
        v2 = v33;
      }
      v25 = USBParseBuildSourceIdArray((unsigned __int8)v13, a2 + 5);
      if ( v25 )
      {
        v26 = a2[4];
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v34 + 40),
                                 *(char **)(v34 + 48),
                                 a2[3]);
        v28 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v34 + 40), *(char **)(v34 + 48), a2[3]);
        UnitString = BusApiBuildFunctionUnit(v2, a2[3], 5, v28, ChannelConfigForUnit, v26, v25, SourceString, v19, &v33);
        if ( UnitString >= 0 )
        {
          v29 = v33;
          if ( v33 )
          {
            *(_DWORD *)(v33 + 68) = v19;
            *(_QWORD *)(v29 + 72) = v29 + 12 * (v26 + 8);
            if ( v19 )
            {
              v30 = v19;
              do
              {
                v31 = *v21++;
                *(_BYTE *)(v6 + *(_QWORD *)(v29 + 72)) = v31;
                ++v6;
                --v30;
              }
              while ( v30 );
            }
          }
        }
        ExFreePool(v25);
      }
    }
  }
  return (unsigned int)UnitString;
}
