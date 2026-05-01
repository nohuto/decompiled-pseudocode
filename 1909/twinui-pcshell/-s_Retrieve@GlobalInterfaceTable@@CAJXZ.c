/*
 * XREFs of ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180129054
 * Callers:
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1801277B8 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18012821C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x180128650 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 GlobalInterfaceTable::s_Retrieve(void)
{
  unsigned int v0; // ebx
  HRESULT Instance; // eax
  LPVOID v2; // rcx
  signed __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !GlobalInterfaceTable::s_pGlobalInterfaceTable )
  {
    v4 = 0LL;
    Instance = CoCreateInstance(
                 &CLSID_StdGlobalInterfaceTable,
                 0LL,
                 1u,
                 &GUID_00000146_0000_0000_c000_000000000046,
                 (LPVOID *)&v4);
    v2 = (LPVOID)v4;
    v0 = Instance;
    if ( Instance >= 0 )
    {
      v2 = (LPVOID)v4;
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)&GlobalInterfaceTable::s_pGlobalInterfaceTable,
              v4,
              0LL) )
        v2 = 0LL;
    }
    if ( v2 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return v0;
}
