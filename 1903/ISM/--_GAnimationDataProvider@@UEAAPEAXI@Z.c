/*
 * XREFs of ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x1800CEA40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x1800CE944 (--1AnimationDataProvider@@UEAA@XZ.c)
 */

AnimationDataProvider *__fastcall AnimationDataProvider::`scalar deleting destructor'(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  AnimationDataProvider::~AnimationDataProvider(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
