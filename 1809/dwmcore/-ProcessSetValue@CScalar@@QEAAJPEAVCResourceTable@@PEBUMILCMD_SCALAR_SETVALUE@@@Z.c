/*
 * XREFs of ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x1801B2344
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180021E2C (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScalar::ProcessSetValue(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_SCALAR_SETVALUE *a3)
{
  unsigned int v3; // ebx
  float v4; // xmm6_4
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *((float *)a3 + 2);
  if ( v4 != *((float *)this + 26) )
  {
    v6 = CBaseAnimation::RegisterAnimateResource(this);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x21u);
    else
      *((float *)this + 26) = v4;
  }
  return v3;
}
