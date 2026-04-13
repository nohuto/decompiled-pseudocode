/*
 * XREFs of ??_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z @ 0x1800278A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180026C98 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Health::details::BaseScenarioEvents *__fastcall CreativeFramework::Health::details::BaseScenarioEvents::`vector deleting destructor'(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        char a2)
{
  CreativeFramework::Health::details::BaseScenarioEvents::~BaseScenarioEvents(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
