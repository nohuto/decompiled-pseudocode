/*
 * XREFs of ACPICMExperienceButtonWorker @ 0x1C00ADCA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

void __fastcall ACPICMExperienceButtonWorker(__int64 a1, unsigned int a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  char v7; // si
  int v8; // edx
  unsigned int v9; // eax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2CuLL, 0x52706341u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2CuLL);
    *v5 = 1;
    v5[6] = 16;
    *(GUID *)(v5 + 1) = GUID_APPLAUNCH_BUTTON;
    v6 = _strtoui64(*(const char **)(a1 + 568), 0LL, 10);
    v7 = 0;
    for ( v5[10] = v6; a2; a2 >>= 1 )
    {
      v8 = (a2 & 1) << v7;
      if ( v8 )
      {
        v5[9] = 0;
        v9 = v5[9];
        if ( v8 == 2 )
          v9 = 0x80000000;
        v5[9] = v9;
        *(_QWORD *)(v5 + 7) = MEMORY[0xFFFFF78000000014];
        v5[5] = 0;
        ZwPowerInformation(SetPowerSettingValue, v5, 0x2Cu, 0LL, 0);
        v5[5] = 1;
        ZwPowerInformation(SetPowerSettingValue, v5, 0x2Cu, 0LL, 0);
      }
      ++v7;
    }
    ExFreePoolWithTag(v5, 0);
  }
}
