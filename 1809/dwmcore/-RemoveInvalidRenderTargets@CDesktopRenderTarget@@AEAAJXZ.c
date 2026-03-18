/*
 * XREFs of ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18015A994
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18015A950 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18007D540 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x18007D738 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18015A088 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveInvalidRenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  CDisplaySet *v5; // r15
  unsigned __int64 v6; // xmm1_8
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r12
  const struct CDisplay *v13; // rdx
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v16[2]; // [rsp+30h] [rbp-38h] BYREF

  v16[0] = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, v16);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BC058, 2u, CurrentDisplaySet, 0x10Eu);
  }
  else
  {
    v5 = v16[0];
    v6 = _mm_srli_si128(*(__m128i *)((char *)v16[0] + 24), 8).m128i_u64[0];
    v7 = HIDWORD(*((_QWORD *)v16[0] + 3));
    *((float *)this + 69) = (float)(int)*((_QWORD *)v16[0] + 3);
    *((float *)this + 70) = (float)(int)v7;
    *((float *)this + 71) = (float)(int)v6;
    v8 = *((_DWORD *)this + 50) - 1;
    v9 = v8;
    for ( *((float *)this + 72) = (float)SHIDWORD(v6); v9 >= 0; --v9 )
    {
      v10 = 0LL;
      v11 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v9);
      if ( *((_DWORD *)v5 + 18) )
      {
        v12 = *((_QWORD *)v5 + 6);
        while ( !CDisplay::IsRenderTargetEquivalentTo(
                   *(CDisplay **)(v12 + 8 * v10),
                   *(const struct CDisplay **)(v11 + 168)) )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *((_DWORD *)v5 + 18) )
            goto LABEL_7;
        }
        v13 = *(const struct CDisplay **)(v11 + 168);
        *(_BYTE *)(v11 + 866) = 1;
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(this, v13);
        if ( DDAHwndRenderTargetByDisplay )
          *((_BYTE *)DDAHwndRenderTargetByDisplay + 866) = 1;
      }
      else
      {
LABEL_7:
        CDesktopRenderTarget::RemoveRenderTarget(this, (struct CHwndRenderTarget *)v11);
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(v16);
  return v4;
}
