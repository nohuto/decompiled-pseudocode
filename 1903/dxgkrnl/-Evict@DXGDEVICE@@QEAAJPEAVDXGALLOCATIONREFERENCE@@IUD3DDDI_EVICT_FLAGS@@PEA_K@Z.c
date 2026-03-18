/*
 * XREFs of ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C0133604
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0133090 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000C3A4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::Evict(
        DXGDEVICE *this,
        struct DXGALLOCATIONREFERENCE *a2,
        __int64 a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned __int64 *a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // r9
  int v11; // esi
  struct DXGALLOCATIONREFERENCE *i; // rbp
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v11 = v10 & 1 | 2;
    if ( (v10 & 2) != 0 )
      v11 = v10 & 1;
    for ( i = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8 * (unsigned int)v9);
          a2 != i;
          a2 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8) )
    {
      v15[0] = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      if ( v15[0] )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                                                           + 776LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
          *((_QWORD *)this + 81),
          v15,
          1LL,
          v11,
          a5);
    }
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
}
