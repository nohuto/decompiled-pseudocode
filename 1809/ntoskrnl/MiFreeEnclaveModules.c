/*
 * XREFs of MiFreeEnclaveModules @ 0x14085A1F0
 * Callers:
 *     MiCanDeleteEnclave @ 0x1402BCD14 (MiCanDeleteEnclave.c)
 *     MmFreeVirtualMemory @ 0x1405EF4F0 (MmFreeVirtualMemory.c)
 * Callees:
 *     DbgkUnMapViewOfSection @ 0x1406B739C (DbgkUnMapViewOfSection.c)
 *     MiDereferenceEnclaveModule @ 0x14085A1CC (MiDereferenceEnclaveModule.c)
 */

void __fastcall MiFreeEnclaveModules(volatile signed __int32 **a1, _KPROCESS *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 **v6; // rcx

  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == (volatile signed __int32 *)a1 )
      break;
    if ( a2 )
      DbgkUnMapViewOfSection(a2);
    v5 = *(_QWORD *)v4;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = (volatile signed __int32 **)*((_QWORD *)v4 + 1), *v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = (volatile signed __int32 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    MiDereferenceEnclaveModule(v4);
  }
}
