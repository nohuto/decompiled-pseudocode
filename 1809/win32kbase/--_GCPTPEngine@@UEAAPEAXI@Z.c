/*
 * XREFs of ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x1C0159BC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1C0159B5C (--1CPTPEngine@@UEAA@XZ.c)
 */

CPTPEngine *__fastcall CPTPEngine::`scalar deleting destructor'(CPTPEngine *this, char a2)
{
  CPTPEngine::~CPTPEngine(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
