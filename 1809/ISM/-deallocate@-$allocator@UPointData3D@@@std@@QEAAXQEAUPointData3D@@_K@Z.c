/*
 * XREFs of ?deallocate@?$allocator@UPointData3D@@@std@@QEAAXQEAUPointData3D@@_K@Z @ 0x180043684
 * Callers:
 *     _std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const_&___ptr64__::_1_::catch$0 @ 0x18012FDB3 (_std--vector_PointData3D_std--allocator_PointData3D___--_Emplace_reallocate_PointData3D_const_-_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<PointData3D>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 184 * a3;
  if ( (unsigned __int64)(184 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x1800436C5LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
