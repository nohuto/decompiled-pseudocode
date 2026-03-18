/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x18007FCD0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@WGI@EAAJXZ @ 0x1800F0E20 (-PreRender@CDesktopRenderTarget@@WGI@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  unsigned __int64 v1; // rbx
  CDesktopRenderTarget *v2; // rsi
  signed int v3; // edi
  signed int v4; // eax
  unsigned __int64 v5; // rcx
  HANDLE CurrentThread; // rax
  BOOL v7; // eax
  signed int v8; // eax
  __int64 v9; // rcx
  HANDLE v10; // rax
  BOOL v11; // eax
  unsigned __int64 CycleTime; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = this;
  v3 = 0;
  if ( *((_DWORD *)this + 34) )
  {
    this = (CDesktopRenderTarget *)*((_QWORD *)this + 7);
    if ( this )
    {
      v4 = CVisualTree::PreCompute(this, (char *)v2 + 260);
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0x7FAu, 0LL);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BE2C0, 2u, v3, 0x674u, 0LL);
  }
  else
  {
    v5 = 0LL;
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v5 = CycleTime;
      if ( v7 )
        qword_1803398D8 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v5;
    v8 = CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)((char *)v2 + 104), 1);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BE2C0, 2u, v8, 0x67Au, 0LL);
    }
    else
    {
      CycleTime = 0LL;
      if ( ::CycleTime )
      {
        v10 = GetCurrentThread();
        v11 = QueryThreadCycleTime(v10, &CycleTime);
        v1 = CycleTime;
        if ( v11 )
          qword_1803398E8 += CycleTime - ::CycleTime;
      }
      ::CycleTime = v1;
    }
  }
  return (unsigned int)v3;
}
