/*
 * XREFs of ACPIAddInitializationDependencies @ 0x1C000BBB8
 * Callers:
 *     ACPIBuildFilter @ 0x1C000AFD4 (ACPIBuildFilter.c)
 *     ACPIBuildPdo @ 0x1C000B7D4 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C000AD90 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIReserveDependencies @ 0x1C004C474 (ACPIReserveDependencies.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0095168 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIAddInitializationDependencies(__int64 a1)
{
  int v2; // edi
  char v3; // cl
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v14 = 0LL;
  v3 = 0;
  P = 0LL;
  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 600);
    if ( v4 )
    {
      v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 736), *(_QWORD *)(a1 + 712), v4);
      if ( v2 < 0 )
        return (unsigned int)v2;
      if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 600), 0x4F706341u);
        *(_QWORD *)(a1 + 600) = 0LL;
      }
      v3 = 1;
    }
    v5 = 0;
    v6 = a1 + 360;
    do
    {
      if ( *(_QWORD *)v6 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
        v10 = *(_QWORD *)(v9 + 96);
        if ( v10 )
        {
          v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 736), *(_QWORD *)(v9 + 32), v10);
          if ( v2 < 0 )
            return (unsigned int)v2;
          v3 = 1;
        }
      }
      ++v5;
      v6 += 8LL;
    }
    while ( v5 <= 4 );
    v7 = *(_QWORD *)(a1 + 400);
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v11 + 96);
      if ( v12 )
      {
        v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 736), *(_QWORD *)(v11 + 32), v12);
        if ( v2 < 0 )
          return (unsigned int)v2;
        v3 = 1;
      }
    }
    if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 920);
      if ( v13 )
      {
        v2 = ACPIReserveDependencies(*(_QWORD *)(a1 + 736), v13);
        if ( v2 < 0 )
          return (unsigned int)v2;
        v3 = 1;
      }
    }
    if ( v3 )
      _InterlockedOr64((volatile signed __int64 *)(a1 + 952), 0x40uLL);
    v2 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v14);
    if ( v2 >= 0 )
      v2 = IoResolveDependency(&v14, *(_QWORD *)(a1 + 736));
    if ( P )
      ExFreePoolWithTag(P, 0x53706341u);
  }
  return (unsigned int)v2;
}
