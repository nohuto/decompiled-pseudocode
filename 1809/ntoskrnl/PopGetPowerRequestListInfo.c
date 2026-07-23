/*
 * XREFs of PopGetPowerRequestListInfo @ 0x140869EEC
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PoStoreDiagnosticContext @ 0x1402D3460 (PoStoreDiagnosticContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopGetPowerRequestListInfo(_QWORD *a1, _DWORD *a2)
{
  __int64 *v4; // rbx
  SIZE_T v5; // rdi
  __int64 v6; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rsi
  int v9; // ebx
  unsigned __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  PopAcquirePowerRequestPushLock(0);
  v4 = (__int64 *)PopPowerRequestObjectList;
  v5 = (8 * PopPowerRequestObjectCount + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v4 != &PopPowerRequestObjectList )
  {
    v6 = v4[10];
    v20 = 0LL;
    PoStoreDiagnosticContext(v6, 0LL, &v20);
    v5 = (v20 + 39 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 > 0xFFFFFFFF )
    {
      v9 = -1073741789;
      goto LABEL_19;
    }
    v4 = (__int64 *)*v4;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x206D654Du);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = PoolWithTag + 1;
    v11 = PopPowerRequestObjectCount;
    *v8 = PopPowerRequestObjectCount;
    v12 = PopPowerRequestObjectList;
    v13 = (8 * v11 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v5 - v13;
    while ( 1 )
    {
      if ( (__int64 *)v12 == &PopPowerRequestObjectList )
      {
        *a1 = v8;
        v8 = 0LL;
        v9 = 0;
        *a2 = v13;
        goto LABEL_17;
      }
      if ( v14 < 0x48 )
        break;
      *(_DWORD *)((char *)v8 + v13) = *(_DWORD *)(v12 + 20);
      v15 = (_DWORD *)((char *)v8 + v13 + 4);
      v16 = 6LL;
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + v12 - ((_QWORD)v8 + v13) + 28);
        ++v15;
        --v16;
      }
      while ( v16 );
      v17 = *(_QWORD *)(v12 + 80);
      v20 = v14 - 32;
      v9 = PoStoreDiagnosticContext(v17, (_QWORD *)((char *)v8 + v13 + 32), &v20);
      if ( v9 < 0 )
        goto LABEL_17;
      v18 = (v20 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v14 < v18 )
        break;
      *v10 = v13;
      v14 -= v18;
      v12 = *(_QWORD *)v12;
      v13 += v18;
      ++v10;
    }
    v9 = -1073741789;
LABEL_17:
    if ( v8 )
      ExFreePoolWithTag(v8, 0x206D654Du);
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_19:
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return (unsigned int)v9;
}
