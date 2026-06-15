/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x180006F90
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180006DF0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180009AA0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(void **this)
{
  HKEY v2; // rcx
  _QWORD *v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  *this = &CAudioSessionStore::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, this);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 6);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CAudioSessionStore::Commit((CAudioSessionStore *)this);
  while ( this[3] )
  {
    PropVariantClear((PROPVARIANT *)this[3] + 3);
    v3 = this[3];
    this[3] = (void *)v3[6];
    operator delete(v3, 0LL);
  }
  operator delete(this[2]);
  if ( this[4] )
  {
    v2 = (HKEY)this[4];
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        24LL,
        &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
        this,
        this[4]);
      v2 = (HKEY)this[4];
    }
    RegCloseKey(v2);
    this[4] = 0LL;
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 6));
}
