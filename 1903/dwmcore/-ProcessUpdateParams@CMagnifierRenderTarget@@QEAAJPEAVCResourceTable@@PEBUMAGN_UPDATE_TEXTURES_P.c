/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801AABDC
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AA53C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM@@@Z @ 0x18002A324 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct CResourceTable *v8; // rdx
  __int64 v9; // rcx
  double v10; // xmm1_8
  CMatrixTransform *v11; // rcx
  float v12; // xmm0_4
  double v13; // xmm0_8
  signed int v14; // eax
  __int64 v15; // rcx
  _DWORD v17[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+3Ch] [rbp-1Ch]
  __int64 v19; // [rsp+44h] [rbp-14h]
  int v20; // [rsp+4Ch] [rbp-Ch]

  v4 = (char *)this + 600;
  v6 = 0;
  if ( memcmp_0((char *)this + 600, a3, 0x28uLL) )
  {
    v7 = *((_QWORD *)this + 23);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 49) = (float)*(int *)a3;
    *((float *)this + 50) = (float)*((int *)a3 + 1);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 104LL) )
      {
        v10 = *((double *)a3 + 2);
        v11 = (CMatrixTransform *)*((_QWORD *)this + 23);
        v12 = *((double *)a3 + 1);
        v19 = 0LL;
        v17[1] = 0;
        v17[0] = 565;
        v18 = 0LL;
        *(float *)&v10 = v10;
        *(float *)&v17[2] = v12;
        v13 = *((double *)a3 + 3);
        LODWORD(v19) = LODWORD(v10);
        *(float *)&v10 = *((double *)a3 + 4);
        *((float *)&v19 + 1) = v13;
        v20 = LODWORD(v10);
        v14 = CMatrixTransform::ProcessUpdate(v11, v8, (const struct tagMILCMD_MATRIXTRANSFORM *)v17);
        v6 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x120u, 0LL);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x116u, 0LL);
      }
    }
  }
  return v6;
}
