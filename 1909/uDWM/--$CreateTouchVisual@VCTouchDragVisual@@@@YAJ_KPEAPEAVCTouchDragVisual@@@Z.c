/*
 * XREFs of ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x180095BF4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180098B60 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x18009C708 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x18009CB60 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchDragVisual>(unsigned __int64 a1, CTouchDragVisual **a2)
{
  unsigned int v4; // edi
  CTouchDragVisual *v5; // rax
  CTouchDragVisual *v6; // rbx
  int v7; // eax

  if ( a2 )
  {
    v5 = (CTouchDragVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               464LL);
    if ( v5 )
      v6 = CTouchDragVisual::CTouchDragVisual(v5, a1);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = CTouchDragVisual::Initialize(v6);
      v4 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v6;
        v6 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3Fu);
      }
      if ( v6 )
        CBaseObject::Release(v6);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v4;
}
