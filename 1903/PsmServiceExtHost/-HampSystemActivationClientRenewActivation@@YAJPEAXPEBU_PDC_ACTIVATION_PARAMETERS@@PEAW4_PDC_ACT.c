/*
 * XREFs of ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180072B74
 * Callers:
 *     ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x18007AE40 (-HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemActivationClientRenewActivation(
        void *a1,
        const struct _PDC_ACTIVATION_PARAMETERS *a2,
        enum _PDC_ACTIVATOR_ERROR_DETAIL *a3)
{
  char v3; // bl
  unsigned int v4; // r9d
  const struct _TlgProvider_t *v5; // rcx
  char v7; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-15h] BYREF
  void *v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  void **v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  char *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  v3 = (char)a3;
  v9 = a1;
  v4 = Pdcv2ActivationClientRenewActivation(a1, a2);
  v8 = v4;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v12 = 4LL;
    v11 = &v8;
    v13 = &v9;
    v15 = &v7;
    v14 = 8LL;
    v7 = v3;
    v16 = 1LL;
    TlgWrite(v5, &unk_180096AB6, 0LL, 0LL, 5u, &pData);
    return v8;
  }
  return v4;
}
