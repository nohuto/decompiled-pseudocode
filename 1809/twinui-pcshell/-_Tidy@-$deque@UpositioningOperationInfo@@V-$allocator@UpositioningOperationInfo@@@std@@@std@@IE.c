/*
 * XREFs of ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@IEAAXXZ @ 0x180143618
 * Callers:
 *     ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x180140120 (--1-$queue@UpositioningOperationInfo@@V-$deque@UpositioningOperationInfo@@V-$allocator@Uposition.c)
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x180140258 (--1FullScreenPositioner@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::deque<positioningOperationInfo>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(__int64 **)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 - 1 + a1[3])));
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v3 + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(a1[1] + 8 * v5);
    if ( v6 )
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x10);
  }
  v7 = (void *)a1[1];
  if ( v7 )
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}
