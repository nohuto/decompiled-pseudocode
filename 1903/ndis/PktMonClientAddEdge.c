/*
 * XREFs of PktMonClientAddEdge @ 0x1C00C958C
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     MediaTypeToPacketType @ 0x1C00C93F8 (MediaTypeToPacketType.c)
 */

__int64 __fastcall PktMonClientAddEdge(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned int v7; // ebx
  _QWORD *v8; // r8
  int v9; // ecx
  int v10; // eax
  __int64 v11; // r8
  __int16 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+32h] [rbp-26h]
  __int16 v15; // [rsp+36h] [rbp-22h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+44h] [rbp-14h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0;
  v19 = 0LL;
  v13 = 24;
  v16 = a2;
  v17 = 3;
  v18 = 4;
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v7 = (*((__int64 (__fastcall **)(PVOID, _QWORD, __int16 *, __int64 *))*(&ProviderBindingContext + 1) + 4))(
           ProviderBindingContext,
           *a1,
           &v13,
           &v19);
    if ( !v7 )
    {
      v8 = a6;
      *a6 = v19;
      v9 = a5;
      v8[1] = a1;
      v10 = MediaTypeToPacketType(v9);
      *(_DWORD *)(v11 + 16) = v10;
    }
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v7;
}
