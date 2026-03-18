/*
 * XREFs of EtwTraceLayoutChangeStop @ 0x1C006A3C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqzz @ 0x1C006C3BC (McTemplateK0qqzz.c)
 *     _GetClientRect @ 0x1C006C850 (_GetClientRect.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall EtwTraceLayoutChangeStop(__int64 a1, int a2, __int64 a3)
{
  struct _KPROCESS **v6; // rcx
  struct _KPROCESS *v7; // rcx
  PACCESS_TOKEN v8; // rbx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[256]; // [rsp+F0h] [rbp-10h] BYREF

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
  {
    memset(v16, 0, sizeof(v16));
    memset(v15, 0, 0x84uLL);
    v6 = *(struct _KPROCESS ***)(a1 + 416);
    v14 = 256LL;
    v13 = 132LL;
    v11 = 0LL;
    v7 = *v6;
    v12 = 0LL;
    v8 = PsReferencePrimaryToken(v7);
    if ( v8 )
    {
      RtlQueryPackageIdentity(v8, v16, &v14, v15, &v13, 0LL);
      GetClientRect(a3, &v11);
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
        McTemplateK0qqzz((unsigned __int16)v12 | (WORD2(v12) << 16), v9, v10, a2, v12, (__int64)v15, (__int64)v16);
      PsDereferencePrimaryToken(v8);
    }
  }
}
