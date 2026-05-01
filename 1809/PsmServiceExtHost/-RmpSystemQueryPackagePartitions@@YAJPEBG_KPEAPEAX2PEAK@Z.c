/*
 * XREFs of ?RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z @ 0x18003A230
 * Callers:
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003A15C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048E40 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

signed int __fastcall RmpSystemQueryPackagePartitions(
        const unsigned __int16 *a1,
        __int64 a2,
        void **a3,
        void **a4,
        unsigned int *a5)
{
  signed int result; // eax
  int PartitionHandlesForPackage; // eax
  int v10; // [rsp+20h] [rbp-208h] BYREF
  _BYTE v11[12]; // [rsp+24h] [rbp-204h] BYREF
  _BYTE v12[464]; // [rsp+30h] [rbp-1F8h] BYREF

  if ( (a2 & 0xF000000000000000uLL) == 0x2000000000000000LL
    || !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    *a3 = (void *)-2LL;
    *a4 = 0LL;
    *a5 = 0;
    return 0;
  }
  v10 = 464;
  result = PsmGetPackageFullNameFromKey(a1, v12, &v10);
  if ( result >= 0 )
  {
    PartitionHandlesForPackage = GetPartitionHandlesForPackage(v12, a3, a4, v11);
    if ( PartitionHandlesForPackage < 0 )
      return PartitionHandlesForPackage & 0xEFFFFFFF;
    if ( (v11[0] & 1) != 0 )
      *a5 = 1;
    return 0;
  }
  return result;
}
