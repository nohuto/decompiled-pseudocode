/*
 * XREFs of ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C0194EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ @ 0x1C0197AA8 (-UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ.c)
 */

__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  double v4; // xmm0_8
  __int64 result; // rax

  if ( !*((_BYTE *)this + 1152) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 1152) = 1;
  }
  CPTPEngine::UpdatePTPRightClickZone(this);
  v2 = *((_QWORD *)this + 12);
  v3 = v2 * *((unsigned int *)this + 27);
  *(_OWORD *)((char *)this + 3208) = *((_OWORD *)this + 4);
  *((_QWORD *)this + 385) = v3 / 0x3E8;
  *((_QWORD *)this + 386) = v2 * (unsigned __int64)*((unsigned int *)this + 42) / 0x3E8;
  *((_QWORD *)this + 387) = v2 * (unsigned __int64)*((unsigned int *)this + 60) / 0x3E8;
  *((_QWORD *)this + 388) = v2 * (unsigned __int64)*((unsigned int *)this + 97) / 0x3E8;
  *((_QWORD *)this + 389) = v2 * (unsigned __int64)*((unsigned int *)this + 65) / 0x3E8;
  *((_QWORD *)this + 390) = v2 * (unsigned __int64)*((unsigned int *)this + 50) / 0x3E8;
  v4 = (double)*((int *)this + 92);
  *((_QWORD *)this + 392) = v2 * (unsigned __int64)*((unsigned int *)this + 35) / 0x3E8;
  result = 0LL;
  *((double *)this + 391) = v4 / 1000.0;
  return result;
}
