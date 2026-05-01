/*
 * XREFs of ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@@Z @ 0x180378DB8
 * Callers:
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@AEBQEAU4@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEBUtagRECT@@1AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@3AEAPEAUIApplicationView@@@Z @ 0x180378998 (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE.c)
 * Callees:
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

__int64 __fastcall CSimpleTempAppVisual::RuntimeClassInitialize(
        CSimpleTempAppVisual *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const enum TEMPORARY_APP_VISUAL_TYPE *a4,
        HWND *a5,
        HWND *a6,
        struct IApplicationView *a7)
{
  *((struct tagRECT *)this + 3) = *a2;
  *((struct tagRECT *)this + 4) = *a3;
  *((_DWORD *)this + 4) = *(_DWORD *)a4;
  *((_QWORD *)this + 4) = *a5;
  *((_QWORD *)this + 5) = *a6;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
    (__int64 *)this + 3,
    (__int64)a7);
  return 0LL;
}
