/*
 * XREFs of VfHalAllocateMapRegisters @ 0x14092C880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ADD_MAP_REGISTERS @ 0x14092A17C (ADD_MAP_REGISTERS.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall VfHalAllocateMapRegisters(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  int v7; // edi
  int MapRegisters; // r14d
  __int64 AdapterInformationInternal; // rdi
  __int64 MapRegisterFile; // rax

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( !VfRealHalAllocateMapRegisters )
    return 3221225473LL;
  MapRegisters = VfRealHalAllocateMapRegisters(a1, a2, a3);
  if ( MapRegisters >= 0 )
  {
    AdapterInformationInternal = ViGetAdapterInformationInternal(v7);
    if ( AdapterInformationInternal )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          if ( *(_BYTE *)(AdapterInformationInternal + 33)
            || (MapRegisterFile = ViAllocateMapRegisterFile(AdapterInformationInternal, v6)) == 0 )
          {
            if ( !*a4 )
              *a4 = -559026163LL;
          }
          else
          {
            *(_QWORD *)(MapRegisterFile + 48) = *a4;
            *a4 = MapRegisterFile;
          }
          ADD_MAP_REGISTERS(AdapterInformationInternal, v6, 1);
          a4 += 2;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return (unsigned int)MapRegisters;
}
