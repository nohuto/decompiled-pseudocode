/*
 * XREFs of PiQueryDeviceRelations @ 0x14083D7EC
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x14083D1E0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     PnpQueryDeviceRelations @ 0x1406E92C0 (PnpQueryDeviceRelations.c)
 */

__int64 __fastcall PiQueryDeviceRelations(__int64 a1, int a2, int *a3, _WORD *a4)
{
  int v7; // ebx
  int v8; // esi
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v13; // edi
  _QWORD *v14; // rax
  unsigned int v15; // ebp
  void *v16; // r15
  __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v21; // r8
  __int64 **i; // r14
  __int64 v23; // rdx
  int DeviceRelations; // eax
  __int64 v25; // rdi
  _WORD *v26; // r12
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  P[0] = 0LL;
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225485LL;
          v13 = 6;
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
        v13 = 2;
      }
    }
    else
    {
      v13 = 3;
    }
  }
  else
  {
    v13 = 1;
  }
  PpDevNodeLockTree(0);
  v14 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v15 = 0;
  v16 = v14;
  if ( v14 && (v17 = *(_QWORD *)(v14[39] + 40LL), (unsigned int)(*(_DWORD *)(v17 + 300) - 787) > 1) )
  {
    if ( v13 )
    {
      DeviceRelations = PnpQueryDeviceRelations((__int64)v14, v13, 0LL, (__int64)P);
      v21 = P[0];
      v7 = DeviceRelations;
      if ( DeviceRelations < 0 )
        v21 = 0LL;
      P[0] = v21;
    }
    else
    {
      v18 = *(_QWORD **)(v17 + 8);
      v19 = 0;
      while ( v18 )
      {
        v18 = (_QWORD *)*v18;
        ++v19;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v19 + 16, 0x20207050u);
      P[0] = PoolWithTag;
      v21 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v19;
        for ( i = *(__int64 ***)(v17 + 8); i && v15 < v19; i = (__int64 **)*i )
        {
          ObfReferenceObjectWithTag(i[4], 0x43706E50u);
          v23 = v15++;
          *((_QWORD *)P[0] + v23 + 1) = i[4];
        }
        v21 = P[0];
        v15 = 0;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    if ( v21 && *v21 )
    {
      v8 = 2;
      do
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v21[2 * v15 + 2] + 312LL) + 40LL);
        if ( v25 )
        {
          if ( a4 )
          {
            if ( (unsigned int)*a3 < (unsigned __int64)(v8 + (unsigned int)*(unsigned __int16 *)(v25 + 40)) + 2 )
            {
              v7 = -1073741789;
              goto LABEL_41;
            }
            memmove(a4, *(const void **)(v25 + 48), *(unsigned __int16 *)(v25 + 40));
            v26 = &a4[(unsigned __int64)*(unsigned __int16 *)(v25 + 40) >> 1];
            *v26 = 0;
            a4 = v26 + 1;
            v21 = P[0];
          }
          v8 += *(unsigned __int16 *)(v25 + 40) + 2;
        }
        ObfDereferenceObjectWithTag(*(PVOID *)&v21[2 * v15 + 2], 0x43706E50u);
        v21 = P[0];
        ++v15;
      }
      while ( v15 < *(_DWORD *)P[0] );
      if ( a4 )
        *a4 = 0;
    }
  }
  else
  {
    v7 = -1073741810;
  }
LABEL_41:
  PpDevNodeUnlockTree(0);
  if ( v7 < 0 )
    v8 = 0;
  *a3 = v8;
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x43706E50u);
  return (unsigned int)v7;
}
