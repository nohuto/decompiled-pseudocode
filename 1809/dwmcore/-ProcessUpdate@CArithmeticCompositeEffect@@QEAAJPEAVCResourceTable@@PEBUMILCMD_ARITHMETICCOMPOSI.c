/*
 * XREFs of ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x1801BAAC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::ProcessUpdate(
        CArithmeticCompositeEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_ARITHMETICCOMPOSITEEFFECT *a3)
{
  int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-28h]

  v4 = *((_DWORD *)a3 + 6);
  *(_OWORD *)v6 = *(_OWORD *)a3;
  *(_QWORD *)&v6[16] = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CArithmeticCompositeEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 48) = v4;
  *((_OWORD *)this + 11) = *(_OWORD *)&v6[8];
  (*(void (__fastcall **)(CArithmeticCompositeEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
