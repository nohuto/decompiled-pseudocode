/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1800B1D54
 * Callers:
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x1800B1C5C (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800B1CAC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  int v2; // edi
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  if ( *((_BYTE *)this + 69) )
  {
    v2 = *((_DWORD *)this + 24);
    *((_BYTE *)this + 69) = 0;
    while ( v2 > 0 )
    {
      v3 = *(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 9) + 8LL * (unsigned int)(v2 - 1));
      (**v3)(v3, (char *)this + 24);
      --v2;
    }
  }
}
