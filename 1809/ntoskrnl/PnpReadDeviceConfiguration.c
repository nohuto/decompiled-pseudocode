/*
 * XREFs of PnpReadDeviceConfiguration @ 0x140751C78
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FCB40 (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v8; // rdx
  NTSTATUS RegistryValue; // ebx
  unsigned int *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  PVOID PoolWithTag; // rax
  unsigned int *v14; // r10
  unsigned int v15; // r8d
  _DWORD *i; // rax
  unsigned int v17; // edx
  _DWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v8 = L"BootConfig";
    }
    else
    {
      v8 = L"ForcedConfig";
    }
  }
  else
  {
    v8 = L"AllocConfig";
  }
  RegistryValue = IopGetRegistryValue(a1, v8, 0, &P);
  if ( RegistryValue >= 0 )
  {
    v10 = (unsigned int *)P;
    v11 = *((_DWORD *)P + 1);
    if ( v11 == 8 && (v12 = *((_DWORD *)P + 3)) != 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x75737050u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        *a4 = v10[3];
        memmove(*a3, (char *)v10 + v10[2], v10[3]);
        v14 = (unsigned int *)*a3;
        v15 = 0;
        for ( i = (char *)*a3 + 4; v15 < *v14; i = v18 )
        {
          if ( *i == -1 )
          {
            i[1] = 0;
            *i = 1;
          }
          v17 = i[3];
          v18 = i + 4;
          if ( v17 )
          {
            v19 = v17;
            do
            {
              v20 = 0LL;
              if ( *(_BYTE *)v18 == 5 )
                v20 = (unsigned int)v18[1];
              v18 = (_DWORD *)((char *)v18 + v20 + 20);
              --v19;
            }
            while ( v19 );
          }
          ++v15;
        }
      }
      else
      {
        RegistryValue = -1073741670;
      }
    }
    else if ( v11 != 8 )
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)RegistryValue;
}
