/*
 * XREFs of EtwTraceLayoutChangeStop @ 0x1C0013B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     McTemplateK0qqzz @ 0x1C00AFE80 (McTemplateK0qqzz.c)
 *     _GetClientRect @ 0x1C0142368 (_GetClientRect.c)
 */

void __fastcall EtwTraceLayoutChangeStop(__int64 a1, int a2, __int64 a3)
{
  PEPROCESS *v6; // rcx
  PACCESS_TOKEN v7; // rbx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v13; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v14; // [rsp+5Ch] [rbp-A4h]
  _BYTE v15[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[256]; // [rsp+F0h] [rbp-10h] BYREF

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
  {
    memset(v16, 0, sizeof(v16));
    memset(v15, 0, 0x84uLL);
    v6 = *(PEPROCESS **)(a1 + 416);
    v11 = 256LL;
    v10 = 132LL;
    v7 = PsReferencePrimaryToken(*v6);
    if ( v7 )
    {
      RtlQueryPackageIdentity(v7, v16, &v11, v15, &v10, 0LL);
      GetClientRect(a3, v12);
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
        McTemplateK0qqzz(v13 | (v14 << 16), v8, v9, a2, v13, (__int64)v15, (__int64)v16);
      PsDereferencePrimaryToken(v7);
    }
  }
}
