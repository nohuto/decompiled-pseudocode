/*
 * XREFs of ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C015CEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z @ 0x1C015FA7C (-UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this, int a2)
{
  __int64 v3; // r8
  int v4; // eax
  unsigned __int64 v5; // rcx
  double v6; // xmm0_8

  if ( !*((_BYTE *)this + 1184) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 1184) = 1;
  }
  CPTPEngine::UpdatePTPRightClickZone(this, a2);
  v3 = *((_QWORD *)this + 12);
  v4 = *((_DWORD *)this + 68);
  *((_DWORD *)this + 812) = *((_DWORD *)this + 10) - *((_DWORD *)this + 70);
  v5 = v3 * *((unsigned int *)this + 27);
  *((_DWORD *)this + 824) |= 0x10000000u;
  *((_DWORD *)this + 811) = v4;
  *((_DWORD *)this + 813) = *((_DWORD *)this + 11);
  *((_DWORD *)this + 810) = *((_DWORD *)this + 69);
  *((_QWORD *)this + 389) = v5 / 0x3E8;
  *((_QWORD *)this + 390) = v3 * (unsigned __int64)*((unsigned int *)this + 42) / 0x3E8;
  *((_QWORD *)this + 391) = v3 * (unsigned __int64)*((unsigned int *)this + 60) / 0x3E8;
  *((_QWORD *)this + 392) = v3 * (unsigned __int64)*((unsigned int *)this + 97) / 0x3E8;
  *((_QWORD *)this + 393) = v3 * (unsigned __int64)*((unsigned int *)this + 65) / 0x3E8;
  *((_QWORD *)this + 394) = v3 * (unsigned __int64)*((unsigned int *)this + 50) / 0x3E8;
  v6 = (double)*((int *)this + 92);
  *((_QWORD *)this + 396) = v3 * (unsigned __int64)*((unsigned int *)this + 35) / 0x3E8;
  *((double *)this + 395) = v6 / 1000.0;
  return 0LL;
}
