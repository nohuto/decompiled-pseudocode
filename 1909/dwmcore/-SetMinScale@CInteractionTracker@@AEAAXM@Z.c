/*
 * XREFs of ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801DB8BC
 * Callers:
 *     ?ProcessSetMinScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINSCALE@@@Z @ 0x1801DA214 (-ProcessSetMinScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACK.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801DB6B0 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DBB10 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801D8CB4 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801DB6B0 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::SetMinScale(CInteractionTracker *this, float a2)
{
  __int64 v2; // rdx
  float *v3; // rdi
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r9d
  CInteractionTracker *v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  CInteractionTracker **v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  float *v12; // [rsp+70h] [rbp-28h]
  UINT32 v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v3 = (float *)((char *)this + 132);
  if ( *((float *)this + 33) != a2 )
  {
    *v3 = a2;
    CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this, v2);
    CInteractionTracker::SetMaxScale(this, fmaxf(*v3, *((float *)this + 34)));
    CResource::InvalidateAnimationSources(this);
    if ( dword_180337240 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
      {
        v11 = 0;
        v14 = 0;
        v9 = &v7;
        v7 = this;
        v10 = 8;
        v12 = v3;
        v13 = cData;
        TlgWrite(v5, &unk_1802DA697, 0LL, 0LL, cData, &pData);
      }
    }
  }
}
