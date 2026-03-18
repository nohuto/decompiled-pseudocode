/*
 * XREFs of ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802013F0
 * Callers:
 *     ?QueryInterface@CD3DSurface@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0D10 (-QueryInterface@CD3DSurface@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FAEF0 (-QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CD3DSurface::QueryInterface(CD3DSurface *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD); // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
    if ( v6 )
    {
      return CD3DResource::QueryInterface(this, a2, a3);
    }
    else
    {
LABEL_8:
      v7 = (void (__fastcall ***)(_QWORD))((char *)this - 24);
      *a3 = (void *)(((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v7 >> 64));
      (**v7)(v7);
      return 0LL;
    }
  }
  return result;
}
