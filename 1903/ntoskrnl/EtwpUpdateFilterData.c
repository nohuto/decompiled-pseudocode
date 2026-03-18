/*
 * XREFs of EtwpUpdateFilterData @ 0x14066524C
 * Callers:
 *     EtwpUpdateGuidEnableInfo @ 0x140664ED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140665E24 (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1408FF5B8 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateEventFilter @ 0x1408FF5E8 (EtwpUpdateEventFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x1408FF610 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408FF6B8 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408FF75C (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1408FF820 (EtwpUpdateStringFilterData.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  char v7; // bp
  char *v9; // r15
  __int64 v10; // r14
  __int32 v11; // esi
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rbp
  char *PoolWithTag; // rax
  __int64 v16; // r14
  __int32 v17; // esi
  unsigned int v18; // eax
  __int32 v19; // ebp
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-78h]
  PVOID v24; // [rsp+28h] [rbp-70h]
  PVOID v25; // [rsp+30h] [rbp-68h]
  PVOID updated; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  int v30; // [rsp+58h] [rbp-40h]
  unsigned int v31; // [rsp+5Ch] [rbp-3Ch]
  __int64 v33; // [rsp+B0h] [rbp+18h]
  char v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v5 = 0;
  v6 = a2;
  v34 = 0;
  v7 = a4;
  P = 0LL;
  updated = 0LL;
  LOBYTE(a4) = 0;
  v25 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  v9 = *(char **)(a1 + 384);
  if ( v7 )
  {
    if ( v9 )
    {
      v10 = 104LL * a2;
      LOBYTE(a4) = v7;
      v11 = _InterlockedExchange((volatile __int32 *)&v9[v10], 0);
      EtwpUpdateSchematizedFilterData(v10 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
      if ( (v11 & 0x80000004) == 0x80000004 )
      {
        LOBYTE(v12) = v7;
        EtwpUpdatePidFilterData(v10 + *(_QWORD *)(a1 + 384), 0LL, v12, v13);
      }
      if ( (v11 & 0x80000008) == 0x80000008 )
      {
        LOBYTE(v12) = v7;
        EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80000010) == 0x80000010 )
      {
        LOBYTE(v12) = v7;
        EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80000020) == 0x80000020 )
      {
        LOBYTE(v12) = v7;
        EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80008000) == 0x80008000 )
      {
        LOBYTE(v12) = v7;
        EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80001000) == 0x80001000 )
      {
        LOBYTE(v12) = v7;
        P = (PVOID)EtwpUpdateEventFilter(v10 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80000200) == 0x80000200 )
      {
        LOBYTE(v12) = v7;
        updated = (PVOID)EtwpUpdateEventFilter(v10 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80000400) == 0x80000400 )
      {
        LOBYTE(v12) = v7;
        v25 = (PVOID)EtwpUpdateEventFilter(v10 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80002000) == 0x80002000 )
      {
        LOBYTE(v12) = v7;
        v24 = (PVOID)EtwpUpdateEventFilter(v10 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, v12, v13);
      }
      if ( (v11 & 0x80004000) == 0x80004000 )
      {
        LOBYTE(v12) = v7;
        EtwpUpdateLevelKwFilter(v10 + *(_QWORD *)(a1 + 384), 0LL, v12, v13);
      }
      if ( (v11 & 0x80000100) == 0x80000100 )
      {
        LOBYTE(v12) = v7;
        v14 = (void *)EtwpUpdateEventFilter(v10 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, v12, v13);
      }
      else
      {
        v14 = 0LL;
      }
      goto LABEL_99;
    }
    return v5;
  }
  if ( !v9 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x340uLL, 0x46777445u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x340uLL);
    a3 = v33;
    v6 = a2;
    *(_QWORD *)(a1 + 384) = v9;
  }
  v16 = 104LL * v6;
  v17 = 0;
  v23 = 0;
  v18 = 0;
  v19 = _InterlockedExchange((volatile __int32 *)&v9[v16], 0);
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_62;
  do
  {
    v20 = *(_DWORD *)(v33 + 16LL * v18 + 132);
    v21 = v33 + *(_QWORD *)(v33 + 16LL * v18 + 120);
    v30 = *(_DWORD *)(v33 + 16LL * v18 + 128);
    v31 = v20;
    v29 = v21;
    if ( v20 > 0x80000200 )
    {
      switch ( v20 )
      {
        case 0x80000400:
          v25 = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 96LL, a5 + 48, 0LL, a4);
          v17 |= 0x80000400;
          goto LABEL_59;
        case 0x80001000:
          P = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 48LL, a5 + 40, 0LL, a4);
          v17 |= 0x80001000;
          goto LABEL_59;
        case 0x80002000:
          v24 = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 56LL, a5 + 56, 0LL, a4);
          v17 |= 0x80002000;
          goto LABEL_59;
        case 0x80004000:
          EtwpUpdateLevelKwFilter(v16 + *(_QWORD *)(a1 + 384), &v29, 0LL, a4);
          v17 |= 0x80004000;
          break;
        case 0x80008000:
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 40LL, a5 + 24, 0LL, a4);
          v17 |= 0x80008000;
          break;
        default:
          goto LABEL_59;
      }
    }
    else
    {
      if ( v20 == -2147483136 )
      {
        updated = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 72LL, a5 + 32, 0LL, a4);
        v17 |= 0x80000200;
        goto LABEL_59;
      }
      if ( v20 == 0x80000000 )
      {
        EtwpUpdateSchematizedFilterData(v16 + *(_QWORD *)(a1 + 384), v6, &v29, 0LL);
        v6 = a2;
        LOBYTE(a4) = 1;
        v34 = 1;
        goto LABEL_60;
      }
      if ( v20 == -2147483644 )
      {
        EtwpUpdatePidFilterData(v16 + *(_QWORD *)(a1 + 384), &v29, 0LL, a4);
        v17 |= 0x80000004;
      }
      else if ( v20 == -2147483640 )
      {
        EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 16LL, a5, 0LL, a4);
        v17 |= 0x80000008;
      }
      else if ( v20 == -2147483632 )
      {
        EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 24LL, a5 + 8, 0LL, a4);
        v17 |= 0x80000010;
      }
      else
      {
        if ( v20 != -2147483616 )
        {
          if ( v20 == -2147483392 )
          {
            v28 = EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 80LL, a5 + 72, 0LL, a4);
            v17 |= 0x80000100;
          }
          goto LABEL_59;
        }
        EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 32LL, a5 + 16, 0LL, a4);
        v17 |= 0x80000020;
      }
    }
    v6 = a2;
LABEL_59:
    LOBYTE(a4) = v34;
LABEL_60:
    v18 = v23 + 1;
    v23 = v18;
  }
  while ( v18 < *(_DWORD *)(v33 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_62:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(v16 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
  }
  if ( (v19 & 0x80000004) == 0x80000004 && (v17 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(v16 + *(_QWORD *)(a1 + 384), 0LL, a3, a4);
  }
  if ( (v19 & 0x80000008) == 0x80000008 && (v17 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80000010) == 0x80000010 && (v17 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80000020) == 0x80000020 && (v17 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80008000) == 0x80008000 && (v17 & 0x80008000) != 0x80008000 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80001000) == 0x80001000 && (v17 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80000200) == 0x80000200 && (v17 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80000400) == 0x80000400 && (v17 & 0x80000400) != 0x80000400 )
  {
    LOBYTE(a3) = 1;
    v25 = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80002000) == 0x80002000 && (v17 & 0x80002000) != 0x80002000 )
  {
    LOBYTE(a3) = 1;
    v24 = (PVOID)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, a3, a4);
  }
  if ( (v19 & 0x80004000) == 0x80004000 && (v17 & 0x80004000) != 0x80004000 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateLevelKwFilter(v16 + *(_QWORD *)(a1 + 384), 0LL, a3, a4);
  }
  if ( (v19 & 0x80000100) != 0x80000100 || (v17 & 0x80000100) == 0x80000100 )
  {
    v14 = (void *)v28;
  }
  else
  {
    LOBYTE(a3) = 1;
    v14 = (void *)EtwpUpdateEventFilter(v16 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, a3, a4);
  }
  _InterlockedExchange((volatile __int32 *)(v16 + *(_QWORD *)(a1 + 384)), v17);
LABEL_99:
  if ( P || updated || v25 || v24 || v14 )
  {
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v25 )
      EtwpFreeEventNameFilter(v25);
    if ( v24 )
      EtwpFreeEventNameFilter(v24);
    if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v14, 0);
  }
  return v5;
}
