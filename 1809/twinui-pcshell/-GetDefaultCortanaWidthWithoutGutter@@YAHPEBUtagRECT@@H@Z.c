/*
 * XREFs of ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180016C78
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076970 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180016AEC (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x180016DB0 (-GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18006D8EC (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 */

__int64 __fastcall GetDefaultCortanaWidthWithoutGutter(const struct tagRECT *a1, int a2)
{
  unsigned int v2; // ebx
  CortanaFeatureConfiguration *v5; // rcx
  CortanaFeatureConfiguration *v6; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  int v10; // eax
  int v11; // eax
  CortanaFeatureConfiguration *v12; // rcx
  CortanaFeatureConfiguration *v13; // rcx
  CortanaFeatureConfiguration *v14; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *v15; // rax
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = 344;
  if ( a1->right - a1->left < 1196 )
    v2 = 320;
  v19 = 0;
  CortanaFeatureConfiguration::getSharedFeatureTable((CortanaFeatureConfiguration *)0x140);
  CortanaFeatureConfiguration::getSharedFeatureTable(v5);
  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(v6);
  if ( (int)CortanaFeatureConfiguration::GetDWORDCore(*((_QWORD *)SharedFeatureTable + 90), v9, v8, &v19) >= 0
    && (v10 = v19) != 0
    || (v11 = MulDiv(a1->right - a1->left, 96, a2), IsWideAtStartupEnabled(v11))
    && (CortanaFeatureConfiguration::getSharedFeatureTable(v12),
        CortanaFeatureConfiguration::getSharedFeatureTable(v13),
        v15 = CortanaFeatureConfiguration::getSharedFeatureTable(v14),
        (int)CortanaFeatureConfiguration::GetDWORDCore(*((_QWORD *)v15 + 84), v17, v16, &v19) >= 0)
    && (v10 = v19) != 0 )
  {
    v2 += v10;
  }
  return v2;
}
