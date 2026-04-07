/*
 * XREFs of ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800AA648
 * Callers:
 *     ??_ECDesktopThumbnailBase@@MEAAPEAXI@Z @ 0x180088C20 (--_ECDesktopThumbnailBase@@MEAAPEAXI@Z.c)
 *     ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800AA7C0 (--_ECDesktopThumbnail@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x1800ABCAC (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailBase::~CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  CDesktopManager *v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *(_QWORD *)this = &CDesktopThumbnailBase::`vftable';
  v2 = 0LL;
  v4 = *((_DWORD *)v1 + 194);
  v5 = *((_QWORD *)v1 + 94);
  if ( v4 )
  {
    do
    {
      if ( this == *(CDesktopThumbnailBase **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      v6 = (unsigned int)v2;
      v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      LODWORD(v2) = v2 + 1;
      *(_QWORD *)(v5 + 8 * v6) = v7;
      v4 = *((_DWORD *)v1 + 194);
    }
    *((_DWORD *)v1 + 194) = v4 - 1;
  }
  CDesktopThumbnailBase::_ClearClones(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 30);
  CVisual::~CVisual(this);
}
