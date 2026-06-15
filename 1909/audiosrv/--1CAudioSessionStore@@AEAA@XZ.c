/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x18003DBFC
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18003DBC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18003DD00 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800D2038 (WPP_SF_qq.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(HKEY *this)
{
  HKEY v2; // rbx
  HANDLE ProcessHeap; // rax
  HKEY v4; // rcx
  _QWORD *v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  *this = (HKEY)&CAudioSessionStore::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, this);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 6);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CAudioSessionStore::Commit((CAudioSessionStore *)this);
  while ( this[3] )
  {
    PropVariantClear((PROPVARIANT *)this[3] + 3);
    v5 = this[3];
    this[3] = (HKEY)v5[6];
    operator delete(v5, 0LL);
  }
  v2 = this[2];
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
  if ( this[4] )
  {
    v4 = this[4];
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22LL,
        &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
        this,
        this[4]);
      v4 = this[4];
    }
    RegCloseKey(v4);
    this[4] = 0LL;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 6));
}
