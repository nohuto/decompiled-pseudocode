/*
 * XREFs of ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180006DF0
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180006B84 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180045CC8 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800CE9CC (--1CPolicyConfig@@UEAA@XZ.c)
 * Callees:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x180006F90 (--1CAudioSessionStore@@AEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
