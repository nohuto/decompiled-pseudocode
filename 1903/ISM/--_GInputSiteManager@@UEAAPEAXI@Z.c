/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x1800663F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x1800662D8 (--1InputSiteManager@@UEAA@XZ.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(
        InputSiteManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  InputSiteManager::~InputSiteManager(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
