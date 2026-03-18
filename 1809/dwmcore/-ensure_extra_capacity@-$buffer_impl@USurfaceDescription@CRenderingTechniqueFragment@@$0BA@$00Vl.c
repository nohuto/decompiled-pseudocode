/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800E1754
 * Callers:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E0948 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E189C (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800E189C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18022B6A0 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v2; // r10
  _BYTE *v4; // rcx
  unsigned __int64 result; // rax
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  LPVOID v9; // rax
  void *v10; // r8
  void *v11; // rdx
  LPVOID v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v2 = a1[2];
  v4 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v2 - v4) * (__int128)0x4924924924924925LL) >> 64) >> 63;
  if ( (v2 - v4) / 28 < a2 )
  {
    v6 = v4 - (_BYTE *)*a1;
    v7 = v6 / 28;
    if ( v7 + a2 < v7 )
      std::_Xoverflow_error((const char *)v6);
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)v6,
           (v2 - (_BYTE *)*a1) / 28,
           v6 / 28 + a2);
    v9 = operator new(saturated_mul(v8, 0x1CuLL));
    v10 = a1[1];
    v11 = *a1;
    *(_QWORD *)&v15 = v9;
    *((_QWORD *)&v15 + 1) = v7;
    v12 = v9;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v15,
      v11,
      v10,
      &v17);
    v13 = *a1;
    v14 = *a1 == a1 + 3;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    WPF::ProcessHeapImpl::Free(v13);
    a1[1] = (char *)*a1 + 28 * v7;
    result = (unsigned __int64)*a1 + 28 * v8;
    a1[2] = (void *)result;
  }
  return result;
}
