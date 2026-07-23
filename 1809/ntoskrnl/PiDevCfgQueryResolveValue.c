/*
 * XREFs of PiDevCfgQueryResolveValue @ 0x1402897AC
 * Callers:
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406FAC94 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x14015D190 (PiDevCfgParseVariableName.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgQueryResolveValue(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  int RegistryValue; // edi
  const void **v7; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rsi
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING v12; // [rsp+28h] [rbp-30h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue >= 0 )
  {
    *((_WORD *)P + 3) = 0;
    if ( *(_QWORD *)(a1 + 16)
      && (unsigned int)(MEMORY[4] - 1) <= 1
      && MEMORY[0xC] >= 2u
      && !*(_WORD *)(MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1) - 2)
      && PiDevCfgParseVariableName((_WORD *)MEMORY[8], &v12, &P) )
    {
      RegistryValue = PiDevCfgResolveVariable(a1, v12.Buffer, &P);
      if ( RegistryValue >= 0 )
      {
        v7 = (const void **)P;
        PoolWithTag = ExAllocatePoolWithTag(
                        PagedPool,
                        (unsigned int)(*((_DWORD *)P + 9) + 26 + MEMORY[0x10]),
                        0x63647050u);
        v9 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = MEMORY[0];
          PoolWithTag[4] = MEMORY[0x10];
          PoolWithTag[1] = *((_DWORD *)v7 + 8);
          PoolWithTag[3] = *((_DWORD *)v7 + 9);
          PoolWithTag[2] = MEMORY[0x10] + 22;
          memmove(PoolWithTag + 5, (const void *)0x14, MEMORY[0x10]);
          *(_WORD *)(2 * ((unsigned __int64)MEMORY[0x10] >> 1) + 0x14) = 0;
          memmove((char *)v9 + (unsigned int)v9[2], v7[5], *((unsigned int *)v7 + 9));
          *a4 = v9;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      *a4 = 0LL;
    }
  }
  return (unsigned int)RegistryValue;
}
