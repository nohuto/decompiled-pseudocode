/*
 * XREFs of ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C00F5404
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00F4BC8 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::Evict(
        DXGDEVICE *this,
        struct DXGALLOCATIONREFERENCE *a2,
        __int64 a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned __int64 *a5)
{
  __int64 v7; // rcx
  char v8; // r9
  __int64 v9; // r10
  struct DXGALLOCATIONREFERENCE *v10; // rbp
  int v11; // esi
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v10 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8 * v9);
    v11 = v8 & 1 | 2;
    if ( (v8 & 2) != 0 )
      v11 = v8 & 1;
    for ( ; a2 != v10; a2 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8) )
    {
      v14[0] = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      if ( v14[0] )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                                                           + 776LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
          *((_QWORD *)this + 81),
          v14,
          1LL,
          v11,
          a5);
    }
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225659LL;
  }
}
