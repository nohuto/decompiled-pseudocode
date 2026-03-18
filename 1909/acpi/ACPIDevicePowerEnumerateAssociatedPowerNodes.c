/*
 * XREFs of ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C000F3B4
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000ECB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C0029200 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C0030238 (ACPIDeviceRecordBlockedOnPhase3List.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDevicePowerEnumerateAssociatedPowerNodes(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int64, __int64),
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r9
  int v8; // ecx
  int v9; // r10d
  int v10; // edx
  int v11; // ebx
  signed int v12; // ebp
  _QWORD *v13; // r14
  _QWORD *i; // rsi
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // ecx
  int v18; // ebx
  __int64 v19; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v8 = *(_DWORD *)(v3 + 336);
  v9 = ((*(_DWORD *)(v3 + 8) & 0x800) != 0LL) + 3;
  if ( !v8 )
    v8 = *(_DWORD *)(a1 + 108);
  v10 = 0;
  if ( (unsigned int)(v8 - 1) <= 3 )
  {
    if ( v8 <= v9 )
      v10 = 1 << v8;
    v17 = *(_DWORD *)(a1 + 104);
    if ( v17 >= 1 && v17 <= v9 )
      v10 |= 1 << v17;
    v18 = v10 | 2;
    if ( (*(_DWORD *)(a1 + 56) & 0x30) == 0 )
      v18 = v10;
    v11 = v18 | 1;
  }
  else
  {
    v11 = (1 << (((*(_DWORD *)(v3 + 8) & 0x800) != 0LL) + 4)) - 1;
  }
  v12 = 0;
  v13 = (_QWORD *)(v3 + 360);
  do
  {
    if ( _bittest(&v11, v12) )
    {
      for ( i = (_QWORD *)*v13; i; i = (_QWORD *)*i )
      {
        result = a2(i[1], (unsigned int)v12, a3, v4);
        v4 = (unsigned int)result;
        if ( (int)result < 0 )
          return result;
      }
    }
    ++v12;
    ++v13;
  }
  while ( v12 < 5 );
  v15 = *(_QWORD *)(v3 + 400);
  if ( !v15 )
    return (unsigned int)v4;
  v19 = *(_QWORD *)(v15 + 8);
  if ( (*(_DWORD *)(v19 + 16) & 0x2000LL) == 0 )
    return (unsigned int)v4;
  result = a2(v19, 5LL, a3, v4);
  LODWORD(v4) = result;
  if ( (int)result >= 0 )
    return (unsigned int)v4;
  return result;
}
