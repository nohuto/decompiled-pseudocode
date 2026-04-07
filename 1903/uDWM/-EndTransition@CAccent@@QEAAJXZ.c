/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x180001C98
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180001C34 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800AE76C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180001D8C (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18003D7CC (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  bool v6; // zf
  unsigned int v7; // edx
  __int128 v8; // xmm0
  int updated; // eax
  void *v11; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 312) )
  {
    v12 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 48);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 48) = 0LL;
    }
    if ( *((_QWORD *)this + 40) )
    {
      VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 40));
      if ( *((_QWORD *)this + 40) )
        CBaseObject::Release(*((CBaseObject **)this + 40));
    }
    v4 = *((_QWORD *)this + 41);
    *((_QWORD *)this + 40) = v4;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = (CBaseObject *)*((_QWORD *)this + 41);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *((_QWORD *)this + 41) = 0LL;
      }
    }
    v6 = (*((_BYTE *)this + 300) & 1) == 0;
    v7 = *((_DWORD *)this + 76);
    *((_DWORD *)this + 95) = v7;
    if ( !v6 )
      CAccent::_UpdateAccentBackground(this, v7);
    v8 = *(_OWORD *)((char *)this + 296);
    *((_BYTE *)this + 312) = 0;
    *((_DWORD *)this + 74) = 6;
    *(_OWORD *)((char *)this + 280) = v8;
    *((_DWORD *)this + 73) = 0;
    updated = CAccent::_UpdateBackgroundGeometry(this);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2F7u, v11);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  }
  return v1;
}
