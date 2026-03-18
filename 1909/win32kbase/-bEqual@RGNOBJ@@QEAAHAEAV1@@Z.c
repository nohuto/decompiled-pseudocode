/*
 * XREFs of ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C009AA20
 * Callers:
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C009A9F4 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     memcmp @ 0x1C00BE670 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) == *(_DWORD *)(v2 + 84) )
    return memcmp(
             (const void *)(*(_QWORD *)this + 104LL),
             (const void *)(v2 + 104),
             *(_DWORD *)(*(_QWORD *)this + 40LL) - (unsigned int)*(_QWORD *)this - 104) == 0;
  return v3;
}
