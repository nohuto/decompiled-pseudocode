/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x140859840
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1408595F8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x140859AFC (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmReleaseDumpHibernateResources @ 0x14072B9F0 (MmReleaseDumpHibernateResources.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 568) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 568), 0x706D644Cu);
    *(_QWORD *)(a1 + 568) = 0LL;
    *(_DWORD *)(a1 + 560) = 0;
  }
}
