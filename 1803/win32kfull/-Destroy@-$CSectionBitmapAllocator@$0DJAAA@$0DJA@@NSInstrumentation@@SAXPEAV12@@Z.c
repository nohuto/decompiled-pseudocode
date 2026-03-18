/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013C67C
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C013C5A8 (-Create@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Destroy@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013C6DC (-Destroy@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Destroy(PVOID *P)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rcx

  v1 = (unsigned __int64)P[3];
  v3 = (unsigned __int64)P[2];
  if ( v1 != v3 )
    RtlFindSetBits((PRTL_BITMAP)(v1 ^ v3), 1u, 0);
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  if ( P[3] != P[2] )
    ExFreePoolWithTag((PVOID)((unsigned __int64)P[3] ^ (unsigned __int64)P[2]), 0);
  ExFreePoolWithTag(P, 0);
}
