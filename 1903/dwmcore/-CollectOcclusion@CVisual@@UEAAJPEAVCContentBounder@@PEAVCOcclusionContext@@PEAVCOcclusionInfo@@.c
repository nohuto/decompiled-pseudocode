/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B5D30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  v6 = *((_QWORD *)this + 32);
  if ( !v6 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v6 + 192LL))(
             v6,
             a3,
             (char *)this + 132);
  v9 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, result, 0x101Cu, 0LL);
    return v9;
  }
  return result;
}
