/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18019AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800545C0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801A58EC (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  CManipulation *v4; // rsi
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi

  v4 = (CManipulation *)*((_QWORD *)this + 22);
  if ( v4 )
    v4 = (CManipulation *)*((_QWORD *)v4 + 2);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(CManipulation *, __int64))(*(_QWORD *)v4 + 48LL))(v4, 93LL) )
  {
    *a4 = 1;
    v7 = *((_DWORD *)this + 74);
    if ( v7 < *((_DWORD *)this + 75) )
    {
      v8 = *((_DWORD *)this + 74);
      do
      {
        v9 = *((_QWORD *)this + 36);
        v10 = 132LL * v8;
        if ( *(_DWORD *)(v10 + v9) != *((_DWORD *)this + 76) )
          break;
        v11 = CManipulation::InjectManipulation(v4, (const struct InjectManipulationArgs *)(v9 + 4 + v10));
        v13 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA2u);
          return v13;
        }
        v7 = *((_DWORD *)this + 74) + 1;
        *((_DWORD *)this + 74) = v7;
        v8 = v7;
      }
      while ( v7 < *((_DWORD *)this + 75) );
    }
    ++*((_DWORD *)this + 76);
    if ( v7 == *((_DWORD *)this + 75) )
    {
      *((_BYTE *)this + 208) &= ~1u;
      CBaseExpression::NotifyAnimationCompleted(this);
      *a4 = 0;
    }
  }
  return 1;
}
