/*
 * XREFs of ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x180136A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall MPCHandProcessor::Uninitialize3DComponents(MPCHandProcessor *this)
{
  _QWORD *v1; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rbx
  std::_Ref_count_base *v5; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 577);
  *((_QWORD *)this + 577) = 0LL;
  if ( v1 )
  {
    v3 = (std::_Ref_count_base *)v1[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 578);
  *((_QWORD *)this + 578) = 0LL;
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4, (const struct std::nothrow_t *)0x20);
  }
}
