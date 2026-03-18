/*
 * XREFs of ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01D4634
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DF5E8 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01D47D8 (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C01D4ABC (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = a1[4];
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    v4 = *(_QWORD *)(v1 + 16);
    if ( v3 != v4 )
      RtlFindSetBits((PRTL_BITMAP)(v3 ^ v4), 1u, 0);
    if ( *(_QWORD *)v1 )
      ExFreePoolWithTag(*(PVOID *)v1, 0);
    if ( *(_QWORD *)(v1 + 24) != *(_QWORD *)(v1 + 16) )
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(v1 + 24) ^ *(_QWORD *)(v1 + 16)), 0);
    ExFreePoolWithTag((PVOID)v1, 0);
    a1[4] = 0LL;
  }
  v5 = (void *)a1[3];
  if ( v5 )
  {
    MmUnmapViewInSessionSpace(v5);
    a1[3] = 0LL;
  }
  v6 = (void *)a1[2];
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    a1[2] = 0LL;
  }
}
