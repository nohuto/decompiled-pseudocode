/*
 * XREFs of sub_180021EC0 @ 0x180021EC0
 * Callers:
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 * Callees:
 *     sub_1800220EC @ 0x1800220EC (sub_1800220EC.c)
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180021EC0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v10; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2B8h] BYREF
  int v13; // [rsp+58h] [rbp-2B0h]
  _BYTE v14[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v15; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v16; // [rsp+A8h] [rbp-260h]
  _WORD v17[128]; // [rsp+B0h] [rbp-258h] BYREF
  int v18; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD *v19; // [rsp+1B8h] [rbp-150h]
  _WORD v20[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  v10 = sub_1800220EC(&v15, a1);
  if ( v10 >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    memset(v14, 0, sizeof(v14));
    RtlActivateActivationContextUnsafeFast(&v12, *(_QWORD *)(a4 + 136));
    v11[0] = 0;
    v10 = sub_180025240(&v15, &v18, a4, v11);
    if ( v10 >= 0 )
      sub_180022378((unsigned int)&v18, a2, v11[0], a5, a4, a3, a6, (__int64)&v10);
    RtlDeactivateActivationContextUnsafeFast(&v12);
  }
  if ( v17 != v16 )
    RtlDeleteBoundaryDescriptor(v16);
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v20 != v19 )
    RtlDeleteBoundaryDescriptor(v19);
  return (unsigned int)v10;
}
