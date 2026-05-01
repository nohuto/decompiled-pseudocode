/*
 * XREFs of ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180015598
 * Callers:
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180008078 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012DE8 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x1800154EC (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015730 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampAppInfoInitialize(
        const unsigned __int16 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  memset_0(a5, 0, 0x218uLL);
  HampAppInfoValidate(a1, a2);
  StringCchCopyW((unsigned __int16 *)a5, 0xE8uLL, a1);
  RtlCopySid(0x44u, (char *)a5 + 464, a2);
  *((_DWORD *)a5 + 133) = a4;
}
