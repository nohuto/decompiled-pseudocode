/*
 * XREFs of ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C023B830
 * Callers:
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C023B788 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0023330 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0034444 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C023B458 (-EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITET.c)
 */

NTSTATUS __fastcall CDriverStoreCopy::EnumSingleRegistry(__int64 a1, __int16 *a2, size_t *a3, int a4, int a5)
{
  unsigned __int16 v5; // di
  NTSTATUS result; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int16 v12[264]; // [rsp+20h] [rbp-248h] BYREF

  v5 = *a2;
  if ( (unsigned __int16)*a2 >= 0x208u )
    return -1073741823;
  memmove(v12, *((const void **)a2 + 1), v5);
  if ( (v5 & 0xFFFEu) >= 0x206 )
    v11 = 518LL;
  else
    v11 = v5 & 0xFFFE;
  if ( v11 >= 0x208 )
    _report_rangecheckfailure();
  *(unsigned __int16 *)((char *)v12 + v11) = 0;
  result = RtlStringCbCatW(v12, v10, a3);
  if ( result >= 0 )
    return CDriverStoreCopy::EnumDriverFileLinks(a1, v12, a4, a5);
  return result;
}
