/*
 * XREFs of ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x1800936EC
 * Callers:
 *     ??_GCAnimatedGlassSheet@@UEAAPEAXI@Z @ 0x1800937A0 (--_GCAnimatedGlassSheet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800943F8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

void __fastcall CAnimatedGlassSheet::~CAnimatedGlassSheet(CAnimatedGlassSheet *this)
{
  __int64 v2; // rsi
  CBaseObject **v3; // rdi
  __int64 v4; // rax
  bool v5; // zf
  bool v6; // al
  __int64 v7; // rcx

  *(_QWORD *)this = &CAnimatedGlassSheet::`vftable';
  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v2 = 13LL;
  v3 = (CBaseObject **)((char *)this + 280);
  do
  {
    if ( *v3 )
      CBaseObject::Release(*v3);
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = *((_QWORD *)this + 56);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
  }
  else
  {
    v6 = CDesktopManager::s_fTimelineDirty;
  }
  v7 = *((_QWORD *)this + 54);
  if ( v7 )
  {
    v5 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v5 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
  }
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
}
