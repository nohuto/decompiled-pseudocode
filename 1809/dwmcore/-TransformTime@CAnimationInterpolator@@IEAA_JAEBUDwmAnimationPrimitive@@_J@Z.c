/*
 * XREFs of ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800C5348
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800C80B0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021B8FC (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationInterpolator::TransformTime(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        __int64 a3)
{
  signed __int64 v6; // rbx
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax

  v6 = 0LL;
  if ( (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, 0LL);
  else
    v7 = 0LL;
  switch ( *(_DWORD *)a2 )
  {
    case 3:
      v8 = *((_QWORD *)a2 + 2);
      v9 = *((_QWORD *)a2 + 1);
      if ( v8 )
        v6 = (a3 - v9) % v8;
      v6 += v9 - v8;
      if ( v6 < *(_QWORD *)(v7 + 8) )
        return *((_QWORD *)a2 + 1);
      break;
    case 5:
      v11 = *((_QWORD *)a2 + 1);
      v12 = a3 - v11;
      v13 = v11 - *(_QWORD *)(v7 + 8);
      if ( v12 <= v13 )
        v13 = v12;
      return v11 - v13;
    case 6:
      return *((_QWORD *)a2 + 1);
  }
  return v6;
}
