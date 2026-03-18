/*
 * XREFs of MiCheckProtoAccess @ 0x14012BDF8
 * Callers:
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14005DC90 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = (v3 >> 5) & 0x1F;
  if ( MiIsPrototypePteVadLookup(v3) )
  {
    v8 = MiCheckVirtualAddress(v6 << 25 >> 16, &v10, &v11);
  }
  else
  {
    v7 = v5;
    if ( qword_140465800 )
    {
      if ( (v5 & 0x10) != 0 )
        v7 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v7 = v5 & ~qword_140465800;
    }
    v8 = v7 >> 16;
    LODWORD(v4) = (v5 & 8) != 0 ? 1 : 256;
  }
  *a2 = v4;
  return v8;
}
