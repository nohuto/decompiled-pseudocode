/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0053734
 * Callers:
 *     xxxClientLoadStringW @ 0x1C0052BB4 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0052F70 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientGetListboxString @ 0x1C012CAF8 (ClientGetListboxString.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01D9F10 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01DA4C0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1C01DEF50 (SfnPOUTLPINT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0053774 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall AllocateCallbackData(struct _CAPTUREBUF *a1, unsigned int a2, void **a3)
{
  unsigned __int8 *v4; // r8

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = &v4[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  FixupCaptureDataOffsets(a1, a3, v4);
  return 0LL;
}
