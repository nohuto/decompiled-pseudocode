/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x180065464
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        char *a4,
        unsigned int a5)
{
  __m128 v5; // xmm3
  _DWORD *v6; // r10
  unsigned int v7; // edx
  CPrimitiveGroup *v10; // rbx
  char v11; // si
  int v12; // edi
  float *v13; // rdx
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  signed __int32 v17; // r15d
  __m128 v18; // xmm0
  int v19; // r9d
  signed __int32 v20; // r11d
  signed __int32 v21; // r9d
  signed __int32 v22; // r8d
  int v23; // eax
  unsigned int v24; // ecx
  unsigned __int32 v26; // [rsp+38h] [rbp-51h]
  _DWORD *v27; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v28[18]; // [rsp+50h] [rbp-39h] BYREF

  v28[0] = 0;
  v6 = v28;
  v7 = *((_DWORD *)a3 + 2);
  v27 = v28;
  v10 = this;
  v11 = 1;
  if ( v7 && (this = (CPrimitiveGroup *)(16LL * v7), (CPrimitiveGroup *)a5 == this) )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (float *)&a4[16 * v12];
      v14 = (__m128)*(unsigned int *)v13;
      if ( v14.m128_f32[0] < -16777216.0 )
        break;
      v15 = (__m128)*((unsigned int *)v13 + 1);
      if ( v15.m128_f32[0] < -16777216.0 || v13[2] > 16777216.0 || v13[3] > 16777216.0 )
        break;
      v16.m128_f32[0] = (float)(int)v14.m128_f32[0];
      v17 = (int)v14.m128_f32[0] + _mm_cmplt_ss(v14, v16).m128_u32[0];
      v16.m128_f32[0] = (float)(int)v15.m128_f32[0];
      v18 = (__m128)*((unsigned int *)v13 + 2);
      v19 = (int)v18.m128_f32[0];
      v20 = (int)v15.m128_f32[0] + _mm_cmplt_ss(v15, v16).m128_u32[0];
      v18.m128_f32[0] = (float)(int)v18.m128_f32[0];
      v26 = _mm_cmplt_ss(v18, (__m128)*((unsigned int *)v13 + 2)).m128_u32[0];
      v18.m128_f32[0] = v13[3];
      v21 = v19 - v26;
      v5.m128_f32[0] = (float)(int)v18.m128_f32[0];
      v5 = _mm_cmplt_ss(v5, v18);
      v22 = (int)v18.m128_f32[0] - v5.m128_i32[0];
      if ( v17 >= v21 || v20 >= v22 )
      {
        *v6 = 0;
      }
      else
      {
        *v6 = 2;
        v6[1] = v17;
        v6[2] = v21;
        v6[3] = v20;
        v6[4] = 16;
        v6[7] = v17;
        v6[8] = v21;
        v6[5] = v22;
        v6[6] = 16;
      }
      v23 = FastRegion::CRegion::Union((CPrimitiveGroup *)((char *)v10 + 584), (const struct CRegion *)&v27);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1D5u);
        break;
      }
      if ( (unsigned int)++v12 >= *((_DWORD *)a3 + 2) )
      {
        (*(void (__fastcall **)(CPrimitiveGroup *, __int64, CPrimitiveGroup *))(*(_QWORD *)v10 + 64LL))(v10, 1LL, v10);
        v11 = 0;
        break;
      }
      v6 = v27;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x1C5u);
  }
  **((_DWORD **)v10 + 73) = 0;
  if ( v11 )
    (*(void (__fastcall **)(CPrimitiveGroup *, _QWORD, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, 0LL, 0LL);
  FastRegion::CRegion::FreeMemory((void **)&v27);
  return 0LL;
}
