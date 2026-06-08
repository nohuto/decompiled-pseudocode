/*
 * XREFs of ProcLibTraceInvalidPowerCurve @ 0x1C003A9AC
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C003953C (PopulateEnergyEstimationModel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0004380 (memmove.c)
 *     _TlgKeywordOn @ 0x1C00081B8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00081E0 (_TlgWrite.c)
 */

BOOLEAN __fastcall ProcLibTraceInvalidPowerCurve(const struct _TlgProvider_t *a1, unsigned int a2, const void *a3)
{
  unsigned __int16 v3; // bx
  BOOLEAN result; // al
  char v5; // di
  const GUID *v6; // r8
  const GUID *v7; // r9
  char v8; // [rsp+30h] [rbp-49h] BYREF
  char v9; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int16 v10; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  char *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  __int16 *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  struct _TlgProvider_t *p_hProvider; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  struct _TlgProvider_t hProvider; // [rsp+A0h] [rbp+27h] BYREF

  v3 = a2;
  result = (unsigned __int8)a3;
  v5 = (char)a1;
  if ( a2 )
    result = (unsigned __int8)memmove(&hProvider, a3, 4LL * a2);
  if ( (unsigned int)dword_1C0016038 > 5 )
  {
    result = TlgKeywordOn(a1, 0x400000000000uLL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &v8;
      v15 = &v9;
      v18 = (__int16 *)&v10;
      v10 = v3;
      v23 = 0;
      p_hProvider = &hProvider;
      v8 = v5;
      v9 = v3;
      v13 = 1;
      v16 = 1;
      v19 = 2;
      v22 = 4 * v3;
      return TlgWrite(&hProvider, &unk_1C00120B1, v6, v7, 6u, &pData);
    }
  }
  return result;
}
