/*
 * XREFs of ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x180103C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualAudioStream@@UEAA@XZ @ 0x180104058 (--1CVirtualAudioStream@@UEAA@XZ.c)
 */

CVirtualAudioStream *__fastcall CVirtualAudioStream::`scalar deleting destructor'(CVirtualAudioStream *this, char a2)
{
  CVirtualAudioStream::~CVirtualAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
