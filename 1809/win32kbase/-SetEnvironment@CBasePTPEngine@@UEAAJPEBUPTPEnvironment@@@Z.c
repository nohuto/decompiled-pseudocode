/*
 * XREFs of ?SetEnvironment@CBasePTPEngine@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C015F0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBasePTPEngine::SetEnvironment(CBasePTPEngine *this, const struct PTPEnvironment *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // r8
  __int128 v4; // xmm1

  v2 = 4LL;
  v3 = (_OWORD *)((char *)this + 16);
  do
  {
    *v3 = *(_OWORD *)a2;
    v3[1] = *((_OWORD *)a2 + 1);
    v3[2] = *((_OWORD *)a2 + 2);
    v3[3] = *((_OWORD *)a2 + 3);
    v3[4] = *((_OWORD *)a2 + 4);
    v3[5] = *((_OWORD *)a2 + 5);
    v3[6] = *((_OWORD *)a2 + 6);
    v3 += 8;
    v4 = *((_OWORD *)a2 + 7);
    a2 = (const struct PTPEnvironment *)((char *)a2 + 128);
    *(v3 - 1) = v4;
    --v2;
  }
  while ( v2 );
  *v3 = *(_OWORD *)a2;
  *((_QWORD *)v3 + 2) = *((_QWORD *)a2 + 2);
  return (*(__int64 (__fastcall **)(CBasePTPEngine *, const struct PTPEnvironment *, _OWORD *, __int64))(*(_QWORD *)this + 40LL))(
           this,
           a2,
           v3,
           128LL);
}
