/*
 * XREFs of PiSwValidatePropertyArray @ 0x1406D7C30
 * Callers:
 *     PiSwValidateCreateData @ 0x1406D7390 (PiSwValidateCreateData.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D779C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x14071D234 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1406A31E4 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 i; // rbx

  result = 0LL;
  v3 = 0;
  if ( a2 )
  {
    for ( i = a1 + 32; !*(_DWORD *)(i - 12); i += 48LL )
    {
      result = PnpValidatePropertyData(*(__int64 **)(i + 8), *(_DWORD *)(i + 4), *(_DWORD *)i);
      if ( (int)result < 0 )
        break;
      if ( ++v3 >= a2 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
