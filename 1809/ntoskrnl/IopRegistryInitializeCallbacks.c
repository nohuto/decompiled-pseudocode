/*
 * XREFs of IopRegistryInitializeCallbacks @ 0x14074B6C8
 * Callers:
 *     IoInitSystem @ 0x1409D2354 (IoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwNotifyChangeKey @ 0x1401BA3D0 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     IopRegistryOpenDeepestPath @ 0x14074B8D0 (IopRegistryOpenDeepestPath.c)
 */

__int64 IopRegistryInitializeCallbacks()
{
  unsigned int v0; // edi
  wchar_t **v1; // rbx
  wchar_t *v2; // rsi
  wchar_t *v3; // rax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  char v6; // [rsp+80h] [rbp+8h] BYREF

  v0 = 0;
  v1 = &IopRegistryRegisteredCallbacks;
  v6 = 0;
  if ( off_1404006A0 )
  {
    v2 = 0LL;
    do
    {
      v3 = v1[6];
      if ( v3 )
        LODWORD(v3) = ((__int64 (__fastcall *)(wchar_t **))v3)(v1);
      if ( (int)v3 < 0 )
      {
        *((_DWORD *)v1 + 2) = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, *v1);
        v1[8] = 0LL;
        v1[10] = (wchar_t *)IopRegistryCallback;
        v1[11] = v2;
        if ( (int)IopRegistryOpenDeepestPath(&DestinationString, v1 + 4, &v6) >= 0 )
        {
          ZwNotifyChangeKey(
            v1[4],
            0LL,
            (PIO_APC_ROUTINE)(v1 + 8),
            (PVOID)1,
            (PIO_STATUS_BLOCK)v1 + 6,
            *((_DWORD *)v1 + 2),
            1u,
            0LL,
            0,
            1u);
          if ( v6 )
            *((_DWORD *)v1 + 10) |= 1u;
        }
      }
      v2 = (wchar_t *)++v0;
      v1 = &(&IopRegistryRegisteredCallbacks)[14 * v0];
    }
    while ( v1[2] );
  }
  return 0LL;
}
