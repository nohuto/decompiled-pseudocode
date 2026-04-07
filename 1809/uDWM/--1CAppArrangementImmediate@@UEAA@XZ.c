/*
 * XREFs of ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800A2C70
 * Callers:
 *     ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800A2F10 (--_ECAppArrangementImmediate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ @ 0x18004BC50 (--1-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ.c)
 *     ??A?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@@I@Z @ 0x18004DE00 (--A-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@.c)
 *     ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x18004DE10 (--_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z.c)
 */

void __fastcall CAppArrangementImmediate::~CAppArrangementImmediate(CAppArrangementImmediate *this)
{
  CBaseObject *v2; // rcx
  unsigned int v3; // edi
  _QWORD *v4; // rcx

  *(_QWORD *)this = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v2 )
    CBaseObject::Release(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  v3 = 0;
  *(_QWORD *)this = &CGroupingStoryboard::`vftable'{for `CBaseObject'};
  for ( *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'}; v3 < *((_DWORD *)this + 36); ++v3 )
  {
    v4 = *(_QWORD **)DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[]((_QWORD *)this + 15, v3);
    if ( v4 )
      CStoryboard::UnifiedTargetRect::`scalar deleting destructor'(v4);
  }
  DynArray<CStoryboard::UnifiedTargetRect *,0>::~DynArray<CStoryboard::UnifiedTargetRect *,0>((_QWORD *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 11);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
