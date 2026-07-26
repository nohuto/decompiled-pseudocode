/*
 * XREFs of NdisClNotifyCloseAddressFamilyComplete @ 0x1C0052B90
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00531B0 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C011C030 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C011D8E0 (NdisCoRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceAf @ 0x1C011E818 (ndisDereferenceAf.c)
 */

void __stdcall NdisClNotifyCloseAddressFamilyComplete(NDIS_HANDLE NdisAfHandle, NDIS_STATUS Status)
{
  __int64 v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
  {
    v3 = *((_QWORD *)NdisAfHandle + 50);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 60) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 6),
      0LL,
      0LL,
      v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)NdisAfHandle + 4) + 136LL))(*((_QWORD *)NdisAfHandle + 6));
  }
  ndisDereferenceAf(NdisAfHandle);
}
