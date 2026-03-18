/*
 * XREFs of ?Destroy@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013C6DC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013C3D8 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C013C620 (-Create@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013C67C (-Destroy@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<233472,912>::Destroy(_QWORD *P)
{
  PVOID *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (PVOID *)P[4];
  if ( v2 )
  {
    NSInstrumentation::CSectionBitmapAllocator<233472,912>::Destroy(v2);
    P[4] = 0LL;
  }
  v3 = (void *)P[3];
  if ( v3 )
  {
    MmUnmapViewInSessionSpace(v3);
    P[3] = 0LL;
  }
  v4 = (void *)P[2];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    P[2] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
