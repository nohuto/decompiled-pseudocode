/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x14019CF54
 * Callers:
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 *     PoFxUnregisterDevice @ 0x14078CC80 (PoFxUnregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopFxDestroyDeviceCommon @ 0x14019D06C (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

LONG __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbp
  void *v11; // rcx
  LONG result; // eax

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x78466F50u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x78466F50u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x78466F50u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  v7 = *(void **)(a2 + 1192);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D584650u);
  v8 = *(void **)(a2 + 824);
  if ( v8 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)(a2 + 820) )
    {
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 824) + 8 * v9);
        v11 = *(void **)(v10 + 424);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0x4D584650u);
          *(_QWORD *)(v10 + 424) = 0LL;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(a2 + 820) );
      v8 = *(void **)(a2 + 824);
    }
    ExFreePoolWithTag(v8, 0x4D584650u);
    *(_QWORD *)(a2 + 824) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( !a1 )
    return PopFxDestroyDeviceCommon((PVOID)a2);
  *(_DWORD *)(a1 + 296) &= ~0x40u;
  if ( (*(_DWORD *)(a1 + 296) & 0x4000) == 0 )
    return PopFxDestroyDeviceCommon((PVOID)a2);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 268), 0xFFFFFFFF);
  if ( result == 1 )
    result = KeSetEvent((PRKEVENT)(a2 + 272), 0, 0);
  *(_DWORD *)(a1 + 296) &= ~0x4000u;
  return result;
}
