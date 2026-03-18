/*
 * XREFs of ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1801947D0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1800D65DC (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180193C34 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18019462C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::SetTargetOcclusion(
        CIndirectSwapchainRenderTarget *this,
        struct CRenderTarget *a2,
        char a3)
{
  __int64 *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rax
  unsigned int v8; // r8d
  struct CRenderTarget **v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rcx
  signed int v12; // eax
  signed int v13; // eax
  __int64 v14; // rcx
  struct CRenderTarget *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v4 = (__int64 *)((char *)this + 424);
  v5 = 0;
  if ( !a3 )
  {
    DynArray<CBaseExpression *,1>::Remove(v4, &v16);
    return v5;
  }
  v7 = *((unsigned int *)v4 + 6);
  v8 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_6:
    v10 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
    {
      if ( v10 <= *((_DWORD *)v4 + 5) )
      {
        *(_QWORD *)(*v4 + 8 * v7) = v16;
        *((_DWORD *)v4 + 6) = v10;
LABEL_13:
        *((_BYTE *)this + 505) = 1;
        v13 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
        v5 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x147u, 0LL);
        return v5;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8, 1, &v16);
      v5 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC3u, 0LL);
    }
    else
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v5, 0x145u, 0LL);
      return v5;
    }
    goto LABEL_13;
  }
  v9 = (struct CRenderTarget **)*v4;
  while ( a2 != *v9 )
  {
    ++v8;
    ++v9;
    if ( v8 >= (unsigned int)v7 )
      goto LABEL_6;
  }
  return v5;
}
