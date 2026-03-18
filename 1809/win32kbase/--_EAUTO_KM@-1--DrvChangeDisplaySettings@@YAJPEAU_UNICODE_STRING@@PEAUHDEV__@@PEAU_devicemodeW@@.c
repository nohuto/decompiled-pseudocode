/*
 * XREFs of ??_EAUTO_KM@?1??DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@@PEAXW4_MODE@@HHPEAU_MDEV@@PEAPEAU6@KHHHPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C0100630
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C004D4D8 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall `DrvChangeDisplaySettings'::`2'::AUTO_KM::`vector deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  AUTO_TGO::~AUTO_TGO(a1);
  if ( (a2 & 1) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    WdLogEvent5_WdAssertion(v7);
  }
  return a1;
}
