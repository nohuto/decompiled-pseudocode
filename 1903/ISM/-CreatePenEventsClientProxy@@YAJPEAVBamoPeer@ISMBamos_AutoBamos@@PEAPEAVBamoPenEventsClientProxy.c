/*
 * XREFs of ?CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy@@@Z @ 0x180031B44
 * Callers:
 *     ?Materialize_BamoPenEventsClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18002E7A0 (-Materialize_BamoPenEventsClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007BA88 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall CreatePenEventsClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoPenEventsClientProxy **a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  _QWORD *v5; // rbx
  __int64 result; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  v3 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn(v3, 0x200uLL) )
    TlgWrite(v4, &unk_18019B436, 0LL, 0LL, 2u, &pData);
  v5 = operator new(0x40uLL);
  memset_0(v5, 0, 0x40uLL);
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *((_WORD *)v5 + 22) = 0;
  *((_DWORD *)v5 + 12) = 0;
  *((_WORD *)v5 + 26) = 0;
  v5[2] = &BamoImpl::BamoPenEventsClientProxyImpl::`vftable';
  *v5 = &PenEventsClientCustomProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &PenEventsClientCustomProxy::`vftable'{for `IPenEventsClientProxy'};
  result = 0LL;
  *a2 = (struct BamoPenEventsClientProxy *)v5;
  return result;
}
