/*
 * XREFs of ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A20EC
 * Callers:
 *     ?ProcessSetMaxScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXSCALE@@@Z @ 0x1801A0B2C (-ProcessSetMaxScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A2300 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2530 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019F6CC (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A2300 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::SetMaxScale(CInteractionTracker *this, float a2)
{
  float *v2; // rdi
  const struct _TlgProvider_t *v4; // rcx
  UINT32 cData; // r9d
  CInteractionTracker *v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  CInteractionTracker **v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  float *v11; // [rsp+70h] [rbp-28h]
  UINT32 v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v2 = (float *)((char *)this + 136);
  if ( *((float *)this + 34) != a2 )
  {
    *v2 = a2;
    CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this);
    CInteractionTracker::SetMinScale(this, fminf(*((float *)this + 33), *v2));
    CResource::InvalidateAnimationSources(this, 29);
    if ( dword_180305E40 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v6;
        v6 = this;
        v9 = 8;
        v11 = v2;
        v12 = cData;
        TlgWrite(v4, &unk_1802B4FAF, 0LL, 0LL, cData, &pData);
      }
    }
  }
}
