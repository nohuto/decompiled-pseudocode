/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000246C
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x1800023E0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IEAA?AW4AppMemoryUsageLevel@System@Windows@@W4_RM_COMMIT_LEVEL@@@Z @ 0x180002510 (-GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IEAA-AW4AppMemoryUsageLevel@System@Windows@@.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003F00 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // ebx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp+24h]

  RtlAcquireSRWLockExclusive((char *)this + 96);
  *((_DWORD *)this + 26) = GetCurrentThreadId();
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v8 = 8;
    v6 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v9, &v10, &v8);
    if ( v6 < 0 )
    {
      v4 = v6 | 0x10000000;
    }
    else
    {
      *(_DWORD *)a2 = ModernResourceManagerProxy::GetAppMemoryUsageLevel(v5, v11);
      v4 = 0;
    }
  }
  *((_DWORD *)this + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 96);
  return (unsigned int)v4;
}
