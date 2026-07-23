/*
 * XREFs of WheapInitializeErrorSource @ 0x140729038
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x14031FC44 (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1408DCB40 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AFE9C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14017D394 (WheapInitializeErrorRecordWrapper.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapInitializeErrorSource(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // r14d
  PVOID PoolWithTag; // rax
  __int64 v10; // rbp
  __int64 v11; // r11
  unsigned int i; // r14d
  __int64 v13; // r11

  v1 = *(int *)(a1 + 97);
  if ( (unsigned int)v1 > 0xD )
    return (unsigned int)-1073741811;
  v3 = 0;
  if ( (*((int (__fastcall **)(__int64, __int64))&unk_1404DD170 + 6 * v1))(a1 + 89, a1 + 68) >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 121);
    v5 = *(_DWORD *)(a1 + 109);
    *(_DWORD *)(a1 + 28) = v5;
    v6 = *(_DWORD *)(a1 + 113) * (v4 + 72);
    *(_DWORD *)(a1 + 36) = 1634035799;
    v7 = (v6 + 175) & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 32) = v7;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 97);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 113);
    if ( v5 )
    {
      v8 = v7 * v5;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 * v5, 0x61656857u);
      v10 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v8);
        v11 = v10;
        for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
        {
          WheapInitializeErrorRecordWrapper(v11, v7, a1);
          v11 = v7 + v13;
        }
        *(_QWORD *)(a1 + 48) = v10;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    return v3;
  }
  return 0LL;
}
