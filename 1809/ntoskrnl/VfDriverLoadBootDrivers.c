/*
 * XREFs of VfDriverLoadBootDrivers @ 0x1409B86F8
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1409B8610 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 */

char __fastcall VfDriverLoadBootDrivers(_QWORD ***a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax

  v2 = **a1;
  v3 = (__int64)(*a1)[6] + *((unsigned int *)*a1 + 16);
  ViDriverKernelBase = (__int64)(*a1)[6];
  for ( ViDriverKernelEnd = v3; v2 != a1; v2 = (_QWORD *)*v2 )
    LOBYTE(v3) = VfDriverLoadImage((__int64)v2, 0, 0, 0);
  return v3;
}
