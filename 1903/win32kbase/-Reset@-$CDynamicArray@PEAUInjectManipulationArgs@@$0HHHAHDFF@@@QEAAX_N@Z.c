/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C01A6430
 * Callers:
 *     ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A52C0 (--_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
