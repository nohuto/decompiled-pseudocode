/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180055830
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@WGI@EAAJXZ @ 0x1800ED160 (-PreRender@CDesktopRenderTarget@@WGI@EAAJXZ.c)
 * Callees:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this, __int64 a2)
{
  unsigned __int64 v2; // rbx
  CDesktopRenderTarget *v3; // rsi
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rcx
  HANDLE CurrentThread; // rax
  BOOL v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  HANDLE v11; // rax
  BOOL v12; // eax
  unsigned __int64 CycleTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = this;
  v4 = 0;
  if ( *((_DWORD *)this + 34) )
  {
    this = (CDesktopRenderTarget *)*((_QWORD *)this + 7);
    if ( this )
    {
      v5 = CVisualTree::PreCompute(this, (char *)v3 + 260);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0x7FAu, 0LL);
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802C0180, 2u, v4, 0x674u, 0LL);
  }
  else
  {
    v6 = 0LL;
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v8 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v6 = CycleTime;
      if ( v8 )
        qword_18033C7E8 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v6;
    LOBYTE(a2) = 1;
    v9 = CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)((char *)v3 + 104), a2);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802C0180, 2u, v9, 0x67Au, 0LL);
    }
    else
    {
      CycleTime = 0LL;
      if ( ::CycleTime )
      {
        v11 = GetCurrentThread();
        v12 = QueryThreadCycleTime(v11, &CycleTime);
        v2 = CycleTime;
        if ( v12 )
          qword_18033C7F8 += CycleTime - ::CycleTime;
      }
      ::CycleTime = v2;
    }
  }
  return (unsigned int)v4;
}
