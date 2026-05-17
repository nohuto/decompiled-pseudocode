/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800CDCB4
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x1800533D8 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x1800534A8 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A2610 (NtOpenKeyEx.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r11
  char *v6; // rcx
  __int64 v7; // r11
  __int64 v8; // rax
  signed __int64 v9; // rdx
  __int16 v10; // r8
  char *v11; // rax
  int v12; // r8d
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  _WORD *v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 *v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+70h] [rbp-90h]
  __int128 v20; // [rsp+78h] [rbp-88h]
  _WORD v21[264]; // [rsp+90h] [rbp-70h] BYREF

  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             0,
             v21,
             0x20Au,
             (unsigned int *)&v13);
  if ( (int)result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v12 = RtlStringLengthWorkerW(v21, 0x7FFFLL, &v13);
      if ( v12 >= 0 )
      {
        LOWORD(v14) = 2 * v13;
        WORD1(v14) = 2 * v13 + 2;
        v15 = v21;
        goto LABEL_19;
      }
      return (unsigned int)v12;
    }
    result = RtlStringLengthWorkerW(v21, 261LL, &v13);
    if ( (int)result >= 0 )
    {
      v6 = (char *)&v21[v13];
      v7 = v5 - v13;
      if ( v7 )
      {
        v8 = v7 + v13 + 2147483385;
        v9 = (char *)L"\\PackageList\\" - v6;
        do
        {
          if ( !v8 )
            break;
          v10 = *(_WORD *)&v6[v9];
          if ( !v10 )
            break;
          *(_WORD *)v6 = v10;
          --v8;
          v6 += 2;
          --v7;
        }
        while ( v7 );
      }
      v11 = v6 - 2;
      if ( v7 )
        v11 = v6;
      *(_WORD *)v11 = 0;
      result = 2147483653LL;
      if ( v7 )
        result = 0LL;
      if ( (int)result >= 0 )
      {
        result = RtlStringCbCatW((__int64)v21, 0x20AuLL, a2);
        if ( (int)result >= 0 )
        {
          v14 = 0LL;
          v15 = 0LL;
          v12 = RtlStringLengthWorkerW(v21, 0x7FFFLL, &v13);
          if ( v12 >= 0 )
          {
            LOWORD(v14) = 2 * v13;
            WORD1(v14) = 2 * v13 + 2;
            v15 = v21;
LABEL_19:
            v16 = 48;
            v18 = &v14;
            v17 = 0LL;
            v19 = 64;
            v20 = 0LL;
            return NtOpenKeyEx();
          }
          return (unsigned int)v12;
        }
      }
    }
  }
  return result;
}
