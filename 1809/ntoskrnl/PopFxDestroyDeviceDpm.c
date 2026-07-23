/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1402D7F24
 * Callers:
 *     PoFxUnregisterDevice @ 0x14086A810 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x14086BA0C (PopFxUnregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopFxDestroyDeviceCommon @ 0x1402D7EF0 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbp
  void *v11; // rcx

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
  v7 = *(void **)(a2 + 984);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D584650u);
  v8 = *(void **)(a2 + 816);
  if ( v8 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)(a2 + 812) )
    {
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 816) + 8 * v9);
        v11 = *(void **)(v10 + 424);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0x4D584650u);
          *(_QWORD *)(v10 + 424) = 0LL;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(a2 + 812) );
      v8 = *(void **)(a2 + 816);
    }
    ExFreePoolWithTag(v8, 0x4D584650u);
    *(_QWORD *)(a2 + 816) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 296) &= ~0x40u, (*(_DWORD *)(a1 + 296) & 0x4000) != 0) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 260), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 264), 0, 0);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
  else
  {
    PopFxDestroyDeviceCommon((PVOID *)a2);
  }
}
