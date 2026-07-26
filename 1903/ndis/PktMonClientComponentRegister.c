/*
 * XREFs of PktMonClientComponentRegister @ 0x1C0023D2C
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     MediaTypeToPacketType @ 0x1C00C93F8 (MediaTypeToPacketType.c)
 */

__int64 __fastcall PktMonClientComponentRegister(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v6; // ebx
  __int16 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+22h] [rbp-36h]
  __int16 v10; // [rsp+26h] [rbp-32h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]
  int v16; // [rsp+48h] [rbp-10h]
  int v17; // [rsp+4Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v17 = 0;
  if ( ProviderBindingContext )
  {
    if ( *(_QWORD *)a1 )
    {
      return (unsigned int)-1073741816;
    }
    else
    {
      v8 = 48;
      v11 = a1;
      v12 = a2;
      v13 = a3;
      v14 = a4;
      v15 = 3;
      v16 = 4;
      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
      {
        v6 = (*((__int64 (__fastcall **)(PVOID, __int16 *, __int64))*(&ProviderBindingContext + 1) + 1))(
               ProviderBindingContext,
               &v8,
               a1);
        *(_DWORD *)(a1 + 8) = MediaTypeToPacketType(a5);
        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
      }
      else
      {
        return (unsigned int)-1073741738;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v6;
}
