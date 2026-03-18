/*
 * XREFs of ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18015CA98
 * Callers:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1800772A4 (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x1800CE604 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C094 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18015C90C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::SetTargetOcclusion(
        CIndirectSwapchainRenderTarget *this,
        struct CRenderTarget *a2,
        char a3)
{
  char *v4; // rcx
  int v5; // ebx
  __int64 v7; // rax
  unsigned int v8; // r8d
  struct CRenderTarget **v9; // rdx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  struct CRenderTarget *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v4 = (char *)this + 432;
  v5 = 0;
  if ( a3 )
  {
    v7 = *((unsigned int *)v4 + 6);
    v8 = 0;
    if ( (_DWORD)v7 )
    {
      v9 = *(struct CRenderTarget ***)v4;
      while ( a2 != *v9 )
      {
        ++v8;
        ++v9;
        if ( v8 >= (unsigned int)v7 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v10 = v7 + 1;
      v5 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( (int)v7 + 1 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v5, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)v4 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8, 1, &v15);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8 * v7) = v15;
        *((_DWORD *)v4 + 6) = v10;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v5, 0x147u);
      }
      else
      {
        *((_BYTE *)this + 513) = 1;
        v12 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
        v5 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x149u);
      }
    }
  }
  else
  {
    DynArray<CBaseExpression *,1>::Remove((__int64 *)v4, &v15);
  }
  return (unsigned int)v5;
}
