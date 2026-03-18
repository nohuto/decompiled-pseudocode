/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18018E180
 * Callers:
 *     <none>
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18006E734 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  FLOAT height; // xmm1_4
  __int64 v5; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]

  v5 = 0LL;
  if ( a2 )
  {
    height = a2->height;
    *(FLOAT *)&v5 = a2->width;
    *((FLOAT *)&v5 + 1) = height;
  }
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  (*(void (__fastcall **)(CComponentTransform2D *, __int64 *, __int64 *))(*(_QWORD *)this + 176LL))(this, &v5, &v6);
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *(float *)&v6,
    *((float *)&v6 + 1),
    *(float *)&v7,
    *((float *)&v7 + 1),
    *(float *)&v8,
    *((float *)&v8 + 1));
}
