/*
 * XREFs of ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x18012EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x18012EE90 (--1CSpatialAudioTech@@UEAA@XZ.c)
 */

CSpatialAudioDtsxHeadphones *__fastcall CSpatialAudioDtsxHeadphones::`vector deleting destructor'(
        CSpatialAudioDtsxHeadphones *this,
        char a2)
{
  CSpatialAudioTech::~CSpatialAudioTech(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x520);
  return this;
}
