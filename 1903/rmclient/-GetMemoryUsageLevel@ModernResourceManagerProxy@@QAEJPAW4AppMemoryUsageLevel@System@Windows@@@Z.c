/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x10008038
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UAGJPAW4AppMemoryUsageLevel@23@@Z @ 0x10008000 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UAGJPAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IAE?AW4AppMemoryUsageLevel@System@Windows@@W4_RM_COMMIT_LEVEL@@@Z @ 0x100080B7 (-GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IAE-AW4AppMemoryUsageLevel@System@Windows@@W.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ @ 0x10008F50 (-RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ.c)
 */

int __thiscall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  char *v3; // edi
  signed int v4; // esi
  int v5; // eax
  _BYTE v7[4]; // [esp+Ch] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-Ch]
  _BYTE v9[4]; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  v3 = (char *)this + 72;
  RtlAcquireSRWLockExclusive((char *)this + 72);
  *((_DWORD *)v3 + 1) = GetCurrentThreadId();
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v10 = 8;
    v5 = NtQueryWnfStateData((char *)this + 20, 0, 0, v9, v7, &v10);
    if ( v5 < 0 )
    {
      v4 = (unsigned int)&_ImageBase | v5;
    }
    else
    {
      v4 = 0;
      *(_DWORD *)a2 = ModernResourceManagerProxy::GetAppMemoryUsageLevel(v8);
    }
  }
  *((_DWORD *)v3 + 1) = 0;
  RtlReleaseSRWLockExclusive(v3);
  return v4;
}
