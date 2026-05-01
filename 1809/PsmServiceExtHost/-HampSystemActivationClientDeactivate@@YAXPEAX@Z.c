/*
 * XREFs of ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180039618
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18002BE24 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180039A1C (Pdcv2ActivationClientDeactivate.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampSystemActivationClientDeactivate(void *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  UINT32 cData; // r9d
  int v3; // [rsp+30h] [rbp-68h] BYREF
  void *v4; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  UINT32 v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  void **v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v4 = a1;
  v3 = Pdcv2ActivationClientDeactivate(a1);
  if ( dword_18009B0B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v9 = &v4;
      v7 = cData;
      v10 = 8;
      TlgWrite(v1, &unk_180088C49, 0LL, 0LL, cData, &pData);
    }
  }
}
