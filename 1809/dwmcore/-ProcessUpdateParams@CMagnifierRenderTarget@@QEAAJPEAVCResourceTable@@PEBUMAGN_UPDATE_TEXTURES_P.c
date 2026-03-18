/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18015DABC
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015D46C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 * Callees:
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x1800A0784 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CMatrixTransform *v9; // rcx
  __int64 v10; // xmm0_8
  struct CResourceTable *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v15; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[4]; // [rsp+34h] [rbp-44h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-18h]

  v4 = (char *)this + 608;
  v6 = 0;
  if ( memcmp_0((char *)this + 608, a3, 0x28uLL) )
  {
    v7 = *((_QWORD *)this + 23);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 49) = (float)*(int *)a3;
    *((float *)this + 50) = (float)*((int *)a3 + 1);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 97LL) )
      {
        v15 = 489;
        memset_0(v16, 0, 0x34uLL);
        v9 = (CMatrixTransform *)*((_QWORD *)this + 23);
        v10 = *((_QWORD *)a3 + 1);
        v18 = *((_OWORD *)a3 + 1);
        v19 = *((_QWORD *)a3 + 4);
        v17 = v10;
        v12 = CMatrixTransform::ProcessUpdate(v9, v11, (const struct MILCMD_MATRIXTRANSFORM *)&v15);
        v6 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x11Cu);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x112u);
      }
    }
  }
  return v6;
}
