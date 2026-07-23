/*
 * XREFs of sub_1800CDC50 @ 0x1800CDC50
 * Callers:
 *     sub_1800CDB90 @ 0x1800CDB90 (sub_1800CDB90.c)
 *     sub_1800CDD84 @ 0x1800CDD84 (sub_1800CDD84.c)
 * Callees:
 *     sub_1800220EC @ 0x1800220EC (sub_1800220EC.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CDE60 @ 0x1800CDE60 (sub_1800CDE60.c)
 */

__int64 __fastcall sub_1800CDC50(_QWORD *a1, PCSTR *a2)
{
  int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[8]; // [rsp+48h] [rbp-B8h] BYREF
  int v7; // [rsp+50h] [rbp-B0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+58h] [rbp-A8h]
  _WORD v9[128]; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+160h] [rbp+60h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR v11; // [rsp+168h] [rbp+68h]
  _WORD v12[128]; // [rsp+170h] [rbp+70h] BYREF

  v7 = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v9;
  v10 = 0x1000000;
  v11 = (POBJECT_BOUNDARY_DESCRIPTOR)v12;
  v9[0] = 0;
  v12[0] = 0;
  v3 = sub_1800220EC((unsigned __int16 *)&v7, a2);
  if ( v3 >= 0 )
  {
    v5 = 0x800000;
    v3 = sub_180025240((unsigned __int16 *)&v7, (unsigned __int16 *)&v10, 0LL, (int *)&v5);
    if ( v3 >= 0 )
      v3 = sub_1800CDE60(a1[21], &v10, a1[2], v5, a1[7], v6, a1[5]);
  }
  if ( v9 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v9;
  v7 = 0x1000000;
  v9[0] = 0;
  if ( v12 != (_WORD *)v11 )
    RtlDeleteBoundaryDescriptor(v11);
  return (unsigned int)v3;
}
