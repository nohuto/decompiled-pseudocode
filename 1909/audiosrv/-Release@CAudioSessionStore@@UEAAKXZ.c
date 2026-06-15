/*
 * XREFs of ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18003DBC0
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x18003DA24 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18004DEA0 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800DCBDC (--1CPolicyConfig@@UEAA@XZ.c)
 * Callees:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x18003DBFC (--1CAudioSessionStore@@AEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Release(CAudioSessionStore *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !(_DWORD)result )
  {
    if ( this )
    {
      CAudioSessionStore::~CAudioSessionStore(this);
      operator delete(this, (const struct std::nothrow_t *)0x58);
    }
    return 0LL;
  }
  return result;
}
