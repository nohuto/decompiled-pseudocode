/*
 * XREFs of PiDevCfgResolveVariableConstant @ 0x140868E30
 * Callers:
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PnpValidateRegistryValue @ 0x14029F6C4 (PnpValidateRegistryValue.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgResolveVariableConstant(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  size_t v7; // rbp
  int v8; // r15d
  PVOID PoolWithTag; // rax
  PVOID v10; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Value", 0, &P);
  v5 = P;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryValue(P) )
    {
      v6 = -1073741823;
      goto LABEL_10;
    }
    v7 = (unsigned int)v5[3];
    v8 = v5[1];
    if ( (_DWORD)v7 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x63647050u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v6 = -1073741670;
        goto LABEL_10;
      }
      memmove(PoolWithTag, (char *)v5 + (unsigned int)v5[2], v7);
    }
    else
    {
      v10 = 0LL;
    }
    *(_DWORD *)(a3 + 32) = v8;
    *(_DWORD *)(a3 + 36) = v7;
    *(_QWORD *)(a3 + 40) = v10;
  }
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
