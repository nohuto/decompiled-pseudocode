/*
 * XREFs of ?GetPredictionInfo@CSuperWetInkScribbleBase@@UEAAXMPEAUtagRECT@@PEAM@Z @ 0x1801BB6D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSuperWetInkScribbleBase::GetPredictionInfo(
        CSuperWetInkScribbleBase *this,
        float a2,
        struct tagRECT *a3,
        float *a4)
{
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF

  *a3 = *(struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v6);
  *a4 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2)) * 0.001;
}
