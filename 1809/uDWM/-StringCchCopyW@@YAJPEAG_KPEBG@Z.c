/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180035E70
 * Callers:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180035D84 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18003F670 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18006FAF4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18008CD8C (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x18009230C (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180035EB0 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
