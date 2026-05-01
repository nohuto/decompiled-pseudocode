/*
 * XREFs of ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x1802878BC
 * Callers:
 *     _lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator() @ 0x1802889BC (_lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
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
