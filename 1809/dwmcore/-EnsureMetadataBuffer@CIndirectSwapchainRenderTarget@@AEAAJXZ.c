/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C094
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x18015C980 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015CA50 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18015CA98 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x18015BD88 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF

  v1 = (char *)this + 480;
  *((_DWORD *)this + 126) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 480, 1u);
  v3 = *((_QWORD *)this + 2);
  v18 = 3;
  v19[0] = *(_QWORD *)(v3 + 480);
  v19[1] = g_qpcFrequency.QuadPart;
  v4 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x21Fu);
  }
  else
  {
    v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, v19, 0x10u);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x220u);
    }
    else if ( *((_BYTE *)this + 267)
           && (v18 = 4, v9 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u), v6 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x226u);
    }
    else if ( *((_BYTE *)this + 514)
           || (v18 = 2, v11 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u), v6 = v11, v11 >= 0) )
    {
      if ( *((_BYTE *)this + 513)
        && (v18 = 1, v13 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u), v6 = v13, v13 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x232u);
      }
      else if ( *((_BYTE *)this + 512) )
      {
        v18 = 0;
        v15 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u);
        v6 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x238u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x22Cu);
    }
  }
  return v6;
}
