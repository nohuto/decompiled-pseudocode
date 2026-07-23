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

__int64 __fastcall sub_180021EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v9; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v10[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v11; // [rsp+50h] [rbp-2B8h] BYREF
  int v12; // [rsp+58h] [rbp-2B0h]
  _BYTE v13[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v14; // [rsp+A0h] [rbp-268h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+A8h] [rbp-260h]
  _WORD v16[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v17; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v18[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v17.Buffer = v18;
  *(_DWORD *)&v17.Length = 0x1000000;
  v18[0] = 0;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
  v14 = 0x1000000;
  v16[0] = 0;
  v9 = sub_1800220EC(&v14, a1);
  if ( v9 >= 0 )
  {
    v11 = 72LL;
    v12 = 1;
    memset(v13, 0, sizeof(v13));
    RtlActivateActivationContextUnsafeFast(&v11, *(_QWORD *)(a4 + 136));
    v10[0] = 0;
    v9 = sub_180025240(&v14, &v17, a4, v10);
    if ( v9 >= 0 )
      sub_180022378(&v17, a4, a3, a6, (__int64)&v9);
    RtlDeactivateActivationContextUnsafeFast(&v11);
  }
  if ( v16 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
  v14 = 0x1000000;
  v16[0] = 0;
  if ( v18 != v17.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v17.Buffer);
  return (unsigned int)v9;
}
