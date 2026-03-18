/*
 * XREFs of ?IsDisplacementRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAMPEAW4Enum@ChannelSelector@@1PEAI@Z @ 0x1800E1A6C
 * Callers:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800E19F4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::IsDisplacementRequiredForInput(
        CRenderingTechniqueFragment *this,
        __int64 a2,
        float *a3,
        enum ChannelSelector::Enum *a4,
        enum ChannelSelector::Enum *a5,
        unsigned int *a6)
{
  char v6; // al
  __int64 v8; // rcx
  char v10; // r10
  int v11; // xmm0_4
  unsigned int v12; // r8d
  enum ChannelSelector::Enum *v13; // rbx
  unsigned int v14; // r14d
  __int64 v15; // rax
  char v16; // al
  int v18[4]; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+80h] [rbp+30h] BYREF
  char v20; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF

  v6 = 3;
  v8 = *(_QWORD *)this;
  v10 = 0;
  v19 = 3;
  v20 = 3;
  v11 = 0;
  v21 = 0;
  v12 = 1;
  v18[0] = 1;
  v13 = a4;
  v14 = a2;
  LOBYTE(a4) = 3;
  if ( v8 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum ChannelSelector::Enum *))(*(_QWORD *)v8 + 64LL))(
            v8,
            a2,
            1LL,
            a4);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, char *, char *, int *))(*(_QWORD *)v15 + 64LL))(
            v15,
            *((unsigned int *)this + 4),
            v14,
            &v21,
            &v19,
            &v20,
            v18);
    v11 = v21;
    v10 = v16;
    v6 = v19;
    LOBYTE(a4) = v20;
    v12 = v18[0];
  }
  if ( a3 )
    *(_DWORD *)a3 = v11;
  if ( v13 )
    *(_BYTE *)v13 = v6;
  if ( a5 )
    *(_BYTE *)a5 = (_BYTE)a4;
  if ( a6 )
    *a6 = v12;
  return v10;
}
