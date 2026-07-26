/*
 * XREFs of PktMonDetachProvider @ 0x1C0084010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 PktMonDetachProvider()
{
  _QWORD *v0; // rbx
  void **v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  byte_1C009FE30 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  xmmword_1C009FE48 = 0LL;
  KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
  while ( (__int64 *)PktMonCompList != &PktMonCompList )
  {
    v0 = qword_1C009FDC8;
    if ( *(__int64 **)qword_1C009FDC8 != &PktMonCompList
      || (v1 = (void **)*((_QWORD *)qword_1C009FDC8 + 1), *v1 != qword_1C009FDC8) )
    {
LABEL_11:
      __fastfail(3u);
    }
    --PktMonCompCount;
    v2 = (char *)qword_1C009FDC8 + 16;
    qword_1C009FDC8 = v1;
    *v1 = &PktMonCompList;
    while ( (_QWORD *)*v2 != v2 )
    {
      v3 = (_QWORD *)v0[3];
      if ( (_QWORD *)*v3 != v2 )
        goto LABEL_11;
      v4 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v4 != v3 )
        goto LABEL_11;
      v0[3] = v4;
      *v4 = v2;
      memset(v3, 0, 0x28uLL);
    }
    memset(v0, 0, 0x38uLL);
  }
  KeReleaseMutex(&PktMonCompMutex, 0);
  if ( qword_1C009FE40 )
    qword_1C009FE40();
  return 0LL;
}
