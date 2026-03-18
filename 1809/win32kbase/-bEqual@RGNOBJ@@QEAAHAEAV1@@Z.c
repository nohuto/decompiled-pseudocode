/*
 * XREFs of ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C008D480
 * Callers:
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C008D45C (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00FC2F0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  _DWORD *v4; // rcx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  v4 = *(_DWORD **)this;
  if ( v4[21] == *(_DWORD *)(v2 + 84) )
    return memcmp(v4 + 26, (const void *)(v2 + 104), (unsigned int)(v4[10] - (_DWORD)v4 - 104)) == 0;
  return v3;
}
