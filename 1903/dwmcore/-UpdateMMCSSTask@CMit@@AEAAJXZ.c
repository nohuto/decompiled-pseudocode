/*
 * XREFs of ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800D0AAC
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x1800E48AC (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800D0B88 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D0BD4 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800D0CD8 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMit::UpdateMMCSSTask(CMit *this)
{
  unsigned int v1; // ebx
  CMmcssTask *v2; // r8
  signed int v4; // eax
  __int64 v5; // rcx

  v1 = 0;
  if ( CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)this + 160LL)) )
  {
    v4 = CMmcssTask::Apply(v2, 1);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x182u, 0LL);
  }
  else
  {
    CMmcssTask::Revert(v2);
  }
  return v1;
}
