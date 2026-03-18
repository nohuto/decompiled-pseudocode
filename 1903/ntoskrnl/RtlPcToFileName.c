/*
 * XREFs of RtlPcToFileName @ 0x14019B6E0
 * Callers:
 *     KitLogFeatureUsage @ 0x14033E7F0 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     MmLockLoadedModuleListShared @ 0x14005F070 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400F79C0 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  PVOID *v4; // r8
  unsigned int v5; // ebx
  PVOID *v6; // rdx
  PVOID v7; // rcx
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  MmLockLoadedModuleListShared(&v9, (__int64)a2);
  v4 = (PVOID *)PsLoadedModuleList;
  v5 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v4 != &PsLoadedModuleList )
    {
      v6 = v4;
      v4 = (PVOID *)*v4;
      v7 = v6[6];
      if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v6 + 11));
        goto LABEL_6;
      }
    }
  }
  v5 = -1073741275;
LABEL_6:
  MmUnlockLoadedModuleListShared(v9);
  return v5;
}
