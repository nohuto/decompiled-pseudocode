/*
 * XREFs of ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x180056B0C
 * Callers:
 *     ??_EMPCFocusTarget@@W7EAAPEAXI@Z @ 0x180037B50 (--_EMPCFocusTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1MPCTarget@@UEAA@XZ @ 0x180057274 (--1MPCTarget@@UEAA@XZ.c)
 */

MPCFocusTarget *__fastcall MPCFocusTarget::`scalar deleting destructor'(MPCFocusTarget *this, char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx

  v4 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  MPCTarget::~MPCTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
