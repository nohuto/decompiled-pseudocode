/*
 * XREFs of NtGdiDdDDIEscape @ 0x1C006A580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIEscape(_D3DKMT_ESCAPE *a1)
{
  _D3DKMT_ESCAPE v2; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
  v2 = *a1;
  if ( v2.Type >= D3DKMT_ESCAPE_WIN32K_START )
    return DrvProcessWin32kEscape(&v2);
  else
    return ((__int64 (__fastcall *)(_D3DKMT_ESCAPE *))qword_1C01CD7A0)(&v2);
}
