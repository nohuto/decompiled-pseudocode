/*
 * XREFs of ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x180210DC4
 * Callers:
 *     _lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator() @ 0x1802124E8 (_lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

RecoveredViewInfo *__fastcall RecoveredViewInfo::RecoveredViewInfo(
        RecoveredViewInfo *this,
        const struct RecoveredViewInfo *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return this;
}
