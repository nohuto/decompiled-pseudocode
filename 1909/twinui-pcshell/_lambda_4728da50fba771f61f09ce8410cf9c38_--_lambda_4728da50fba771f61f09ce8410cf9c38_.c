/*
 * XREFs of _lambda_4728da50fba771f61f09ce8410cf9c38_::_lambda_4728da50fba771f61f09ce8410cf9c38_ @ 0x1800A99C0
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18033152C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 __fastcall lambda_4728da50fba771f61f09ce8410cf9c38_::_lambda_4728da50fba771f61f09ce8410cf9c38_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 *a7,
        _QWORD *a8)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  *(_BYTE *)(a1 + 20) = *a4;
  *(_BYTE *)(a1 + 21) = *a5;
  *(_BYTE *)(a1 + 22) = *a6;
  Microsoft::WRL::WeakRef::WeakRef((__int64 *)(a1 + 24), a7);
  result = a1;
  *(_QWORD *)(a1 + 32) = *a8;
  return result;
}
