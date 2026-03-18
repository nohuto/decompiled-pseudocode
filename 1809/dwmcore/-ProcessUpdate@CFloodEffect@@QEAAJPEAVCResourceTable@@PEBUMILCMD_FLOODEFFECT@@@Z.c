/*
 * XREFs of ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x1801BAE4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFloodEffect::ProcessUpdate(
        CFloodEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLOODEFFECT *a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-28h]

  *(_OWORD *)v5 = *(_OWORD *)a3;
  *(_QWORD *)&v5[16] = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CFloodEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_OWORD *)this + 11) = *(_OWORD *)&v5[8];
  (*(void (__fastcall **)(CFloodEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
