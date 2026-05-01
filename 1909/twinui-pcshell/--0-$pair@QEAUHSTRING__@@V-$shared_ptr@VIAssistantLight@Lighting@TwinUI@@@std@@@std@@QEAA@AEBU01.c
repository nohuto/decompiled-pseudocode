/*
 * XREFs of ??0?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18041F218
 * Callers:
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x18041FB10 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v2 = a2[2];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a1[1] = a2[1];
  a1[2] = a2[2];
  return a1;
}
