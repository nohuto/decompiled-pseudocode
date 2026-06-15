/*
 * XREFs of ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x18010F7F0
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180056328 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ARM_EVENT@@UEAA@XZ @ 0x18010F780 (--1ARM_EVENT@@UEAA@XZ.c)
 */

ARM_EVENT *__fastcall ARM_EVENT::`scalar deleting destructor'(ARM_EVENT *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  ARM_EVENT::~ARM_EVENT(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
