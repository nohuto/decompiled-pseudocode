/*
 * XREFs of PktMonClientComponentUnregister @ 0x1C001A8C8
 * Callers:
 *     ndisPktMonMiniportRegister @ 0x1C00BDA64 (ndisPktMonMiniportRegister.c)
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C00C37D0 (ndisPktMonOpenRegister.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

void __fastcall PktMonClientComponentUnregister(_QWORD *a1)
{
  _QWORD *v2; // rax
  void **v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  if ( a1[5] )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    if ( a1[5] )
    {
      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)&xmmword_1C009FE48 + 1) + 16LL))(xmmword_1C009FE48, a1[5]);
        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
      }
      v2 = (_QWORD *)*a1;
      if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (void **)a1[1], *v3 != a1) )
LABEL_15:
        __fastfail(3u);
      --PktMonCompCount;
      v4 = a1 + 2;
      *v3 = v2;
      v2[1] = v3;
      while ( (_QWORD *)*v4 != v4 )
      {
        v5 = (_QWORD *)a1[3];
        if ( (_QWORD *)*v5 != v4 )
          goto LABEL_15;
        v6 = (_QWORD *)v5[1];
        if ( (_QWORD *)*v6 != v5 )
          goto LABEL_15;
        a1[3] = v6;
        *v6 = v4;
        memset(v5, 0, 0x28uLL);
      }
      memset(a1, 0, 0x38uLL);
    }
    KeReleaseMutex(&PktMonCompMutex, 0);
  }
}
