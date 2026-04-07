/*
 * XREFs of ??1CFlickVisual@@MEAA@XZ @ 0x18009E718
 * Callers:
 *     ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x18009E7A0 (--_GCFlickVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800986FC (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x18009ED80 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::~CFlickVisual(CFlickVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CFlickVisual::`vftable';
  CFlickVisual::StopTimer(this);
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
    *((_DWORD *)this + 74),
    *((_DWORD *)this + 75),
    (_QWORD *)this + 39,
    0);
  v2 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v3 )
    CBaseObject::Release(v3);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
