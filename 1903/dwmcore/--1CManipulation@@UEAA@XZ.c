/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x1801E2708
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x1801E27B0 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801E46AC (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801E4828 (-_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 94) == 0LL;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  if ( !v1 )
  {
    if ( *((_BYTE *)this + 568) )
      CManipulation::_UpdateEdgyExperienceInput(this, 3LL);
    else
      CManipulation::_UpdateEdgyInput(this, 1LL);
    v3 = *((_QWORD *)this + 94);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 94) = 0LL;
    }
  }
  `vector destructor iterator'(
    (char *)this + 480,
    8LL,
    5LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
