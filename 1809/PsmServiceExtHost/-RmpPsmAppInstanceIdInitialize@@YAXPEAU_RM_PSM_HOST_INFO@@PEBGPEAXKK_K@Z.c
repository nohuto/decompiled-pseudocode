/*
 * XREFs of ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180013270
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800102E0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x1800132F4 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpPsmAppInstanceIdInitialize(
        wchar_t *Destination,
        wchar_t *Source,
        void *Src,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  RmpRmSidInitialize((union _RM_SID *)(Destination + 232), Src);
  *((_DWORD *)Destination + 134) = a5;
  *((_DWORD *)Destination + 133) = a4;
  *((_QWORD *)Destination + 68) = a6;
}
