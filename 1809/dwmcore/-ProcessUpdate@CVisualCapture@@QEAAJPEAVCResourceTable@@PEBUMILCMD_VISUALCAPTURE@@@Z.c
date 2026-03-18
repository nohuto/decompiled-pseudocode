/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z @ 0x18001E55C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z @ 0x18001E674 (-RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(CVisualCapture *this, struct CResourceTable *a2, __m128i *a3)
{
  __m128i v5; // xmm6
  __int64 v6; // rdx
  __int64 Resource; // rax
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // ecx
  struct CResourceTable *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __m128i v18; // [rsp+30h] [rbp-38h]
  __m128i v19; // [rsp+40h] [rbp-28h]

  v5 = *a3;
  v19 = a3[1];
  v18 = *a3;
  (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 56LL))(this);
  v6 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 157LL);
    *((_QWORD *)this + 50) = Resource;
    if ( !Resource )
    {
      v16 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xC9Eu);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 50) = 0LL;
  }
  if ( v18.m128i_i32[3] )
  {
    v9 = CResourceTable::GetResource(a2, v18.m128i_u32[3], 157LL);
    *((_QWORD *)this + 51) = v9;
    if ( !v9 )
    {
      v16 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0xCB0u);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 51) = 0LL;
  }
  v11 = (struct CResourceTable *)v19.m128i_u32[0];
  if ( v19.m128i_i32[0] )
  {
    v12 = CResourceTable::GetResource(a2, v19.m128i_u32[0], 37LL);
    *((_QWORD *)this + 52) = v12;
    if ( v12 )
      goto LABEL_7;
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0xCC2u);
LABEL_16:
    (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 56LL))(this);
    goto LABEL_8;
  }
  *((_QWORD *)this + 52) = 0LL;
LABEL_7:
  *((_QWORD *)this + 53) = *(__int64 *)((char *)v19.m128i_i64 + 4);
  *((_DWORD *)this + 108) = v19.m128i_i32[3];
  v14 = CVisualCapture::RegisterNotifiers(this, v11);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCCFu);
    goto LABEL_16;
  }
LABEL_8:
  (*(void (__fastcall **)(CVisualCapture *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return v16;
}
