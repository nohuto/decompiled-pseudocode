/*
 * XREFs of ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A8BE4
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A8BA0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800A322C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800A3650 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1801A82F8 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveInvalidRenderTargets(CDesktopRenderTarget *this)
{
  signed int CurrentDisplaySet; // eax
  unsigned int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // edi
  CDisplaySet *v6; // r15
  unsigned __int64 v7; // xmm1_8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r12
  const struct CDisplay *v14; // rdx
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v17[2]; // [rsp+30h] [rbp-38h] BYREF

  v17[0] = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, v17);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802E4668, 2u, CurrentDisplaySet, 0x11Au, 0LL);
  }
  else
  {
    v6 = v17[0];
    v7 = _mm_srli_si128(*(__m128i *)((char *)v17[0] + 24), 8).m128i_u64[0];
    v8 = HIDWORD(*((_QWORD *)v17[0] + 3));
    *((float *)this + 81) = (float)(int)*((_QWORD *)v17[0] + 3);
    *((float *)this + 82) = (float)(int)v8;
    *((float *)this + 83) = (float)(int)v7;
    v9 = *((_DWORD *)this + 50) - 1;
    v10 = v9;
    for ( *((float *)this + 84) = (float)SHIDWORD(v7); v10 >= 0; --v10 )
    {
      v11 = 0LL;
      v12 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v10);
      if ( *((_DWORD *)v6 + 18) )
      {
        v13 = *((_QWORD *)v6 + 6);
        while ( !CDisplay::IsRenderTargetEquivalentTo(
                   *(CDisplay **)(v13 + 8 * v11),
                   *(const struct CDisplay **)(v12 + 168)) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *((_DWORD *)v6 + 18) )
            goto LABEL_7;
        }
        v14 = *(const struct CDisplay **)(v12 + 168);
        *(_BYTE *)(v12 + 866) = 1;
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(this, v14);
        if ( DDAHwndRenderTargetByDisplay )
          *((_BYTE *)DDAHwndRenderTargetByDisplay + 866) = 1;
      }
      else
      {
LABEL_7:
        CDesktopRenderTarget::RemoveRenderTarget(this, (struct CHwndRenderTarget *)v12);
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(v17, v3);
  return v5;
}
