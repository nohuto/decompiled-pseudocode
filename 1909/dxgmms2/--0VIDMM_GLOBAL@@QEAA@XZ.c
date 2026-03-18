/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0090F68
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008F9E0 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  VIDMM_GLOBAL *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_QWORD *)this + 575) = 0LL;
  *((_QWORD *)this + 576) = 0LL;
  *((_BYTE *)this + 4616) = 0;
  memset((char *)this + 4617, 0, 0x40uLL);
  memset((char *)this + 6480, 0, 0x200uLL);
  *((_DWORD *)this + 1749) = 0;
  *((_QWORD *)this + 875) = 0LL;
  *((_QWORD *)this + 876) = 0LL;
  *((_QWORD *)this + 877) = 0LL;
  *((_QWORD *)this + 878) = 0LL;
  *((_WORD *)this + 3536) = 0;
  *((_QWORD *)this + 985) = 0LL;
  *((_DWORD *)this + 1972) = 0;
  *((_QWORD *)this + 4989) = 0LL;
  *((_QWORD *)this + 4990) = 0LL;
  *((_DWORD *)this + 9982) = 71;
  *((_QWORD *)this + 4994) = 0LL;
  *((_QWORD *)this + 4995) = 0LL;
  *((_DWORD *)this + 9992) = 46;
  *((_DWORD *)this + 10010) = -1;
  *((_QWORD *)this + 5003) = 0LL;
  *((_QWORD *)this + 5004) = 0LL;
  *((_DWORD *)this + 10032) = 0;
  *(_DWORD *)((char *)this + 40137) = 257;
  *((_DWORD *)this + 10036) = -1;
  *((_QWORD *)this + 5019) = 0LL;
  *((_QWORD *)this + 5020) = 0LL;
  *((_QWORD *)this + 5021) = 0LL;
  *((_QWORD *)this + 5022) = 0LL;
  memset((char *)this + 40320, 0, 0x220uLL);
  *((_BYTE *)this + 40872) &= 0x41u;
  *((_BYTE *)this + 40873) &= ~1u;
  *((_DWORD *)this + 10216) = 0;
  *((_QWORD *)this + 5115) = 0LL;
  *((_DWORD *)this + 10232) = 0;
  *((_QWORD *)this + 5117) = 0LL;
  *((_QWORD *)this + 5118) = 0LL;
  *((_QWORD *)this + 5119) = 0LL;
  *((_DWORD *)this + 10240) = 0;
  *((_QWORD *)this + 5121) = 0LL;
  *((_QWORD *)this + 5122) = 0LL;
  *((_DWORD *)this + 10246) = 66;
  *((_QWORD *)this + 5125) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5124);
  *((_QWORD *)this + 5128) = 0LL;
  *((_QWORD *)this + 5129) = 0LL;
  *((_DWORD *)this + 10264) = 0;
  *((_QWORD *)this + 5131) = (char *)this + 41040;
  *((_QWORD *)this + 5130) = (char *)this + 41040;
  *((_QWORD *)this + 5138) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5139) = (char *)this + 41024;
  *((_QWORD *)this + 5136) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 1711, NotificationEvent, 1u);
  *((_QWORD *)this + 5140) = 0LL;
  *((_QWORD *)this + 5144) = 0LL;
  *((_QWORD *)this + 5145) = 0LL;
  *((_DWORD *)this + 10298) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 41168), NotificationEvent, 1u);
  *((_QWORD *)this + 5150) = 0LL;
  *((_QWORD *)this + 5151) = 0LL;
  v2 = 4LL;
  *((_QWORD *)this + 5152) = 0LL;
  *((_QWORD *)this + 5153) = 0LL;
  *((_QWORD *)this + 5154) = 0LL;
  *((_QWORD *)this + 5155) = 0LL;
  *((_QWORD *)this + 5156) = 0LL;
  *((_DWORD *)this + 10314) = 60;
  *((_QWORD *)this + 5168) = 0LL;
  *((_QWORD *)this + 5169) = 0LL;
  *((_QWORD *)this + 5170) = 0LL;
  *((_QWORD *)this + 5171) = 0LL;
  *((_QWORD *)this + 5172) = 0LL;
  *((_BYTE *)this + 41384) = 0;
  *((_DWORD *)this + 10352) = -1;
  *((_QWORD *)this + 5174) = 0LL;
  *((_QWORD *)this + 5175) = 0LL;
  *((_BYTE *)this + 41416) = 0;
  *((_DWORD *)this + 10355) = -1;
  *((_BYTE *)this + 41440) = 0;
  *((_QWORD *)this + 5181) = 0LL;
  *((_QWORD *)this + 5182) = 0LL;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  *((_QWORD *)this + 468) = (char *)this + 3736;
  *((_QWORD *)this + 467) = (char *)this + 3736;
  *((_QWORD *)this + 470) = (char *)this + 3752;
  *((_QWORD *)this + 469) = (char *)this + 3752;
  *((_QWORD *)this + 472) = (char *)this + 3768;
  *((_QWORD *)this + 471) = (char *)this + 3768;
  *((_QWORD *)this + 474) = (char *)this + 3784;
  *((_QWORD *)this + 473) = (char *)this + 3784;
  *((_QWORD *)this + 5143) = (char *)this + 41136;
  *((_QWORD *)this + 5142) = (char *)this + 41136;
  *((_QWORD *)this + 5127) = (char *)this + 41008;
  *((_QWORD *)this + 5126) = (char *)this + 41008;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  *((_QWORD *)this + 5002) = (char *)this + 40008;
  *((_QWORD *)this + 5001) = (char *)this + 40008;
  *((_QWORD *)this + 4998) = (char *)this + 39976;
  *((_QWORD *)this + 4997) = (char *)this + 39976;
  *((_QWORD *)this + 4993) = (char *)this + 39936;
  *((_QWORD *)this + 4992) = (char *)this + 39936;
  *((_QWORD *)this + 5000) = (char *)this + 39992;
  *((_QWORD *)this + 4999) = (char *)this + 39992;
  *((_QWORD *)this + 5167) = (char *)this + 41328;
  *((_QWORD *)this + 5166) = (char *)this + 41328;
  *((_QWORD *)this + 5179) = (char *)this + 41424;
  *((_QWORD *)this + 5178) = (char *)this + 41424;
  v3 = (_QWORD *)((char *)this + 41264);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v2;
  }
  while ( v2 );
  memset((char *)this + 7088, 0, 0x50uLL);
  *((_QWORD *)this + 885) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5141);
  *((_QWORD *)this + 982) = 0LL;
  *((_QWORD *)this + 983) = 0LL;
  *((_QWORD *)this + 984) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3832, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x800uLL);
  memset((char *)this + 4088, 0, 0x100uLL);
  memset((char *)this + 4344, 0, 0x100uLL);
  memset((char *)this + 4684, 0, 0x100uLL);
  memset((char *)this + 4944, 0, 0x200uLL);
  memset((char *)this + 5968, 0, 0x200uLL);
  memset((char *)this + 5456, 0, 0x200uLL);
  memset((char *)this + 7040, 0, 0x20uLL);
  *((_DWORD *)this + 1748) = 1;
  memset((char *)this + 7168, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 314, 0LL, 0LL, 0, 0x18uLL, 0x61356956u, 0);
  result = this;
  *((_QWORD *)this + 5183) = 0LL;
  return result;
}
