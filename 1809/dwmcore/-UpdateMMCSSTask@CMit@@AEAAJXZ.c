/*
 * XREFs of ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18008A84C
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x18008A6E8 (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18007AD94 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008AA50 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008ACCC (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::UpdateMMCSSTask(CMit *this)
{
  unsigned int v1; // ebx
  struct _RTL_CRITICAL_SECTION *v2; // r8
  int v4; // eax
  unsigned int v5; // ecx

  v1 = 0;
  if ( CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)this + 144LL)) )
  {
    v4 = CMmcssTask::Apply(v2, 1);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x184u);
  }
  else
  {
    CMmcssTask::Revert((CMmcssTask *)v2);
  }
  return v1;
}
