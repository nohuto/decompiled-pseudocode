/*
 * XREFs of ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0242C60
 * Callers:
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0242E98 (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z @ 0x1C0242F18 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z @ 0x1C0244F60 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableAccountingForProcess(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  DripsBlockerTrackingHelper *v8; // rcx
  SIZE_T v9; // r14
  unsigned int v10; // esi
  DripsBlockerTrackingHelper *i; // rbx
  __int64 v12; // r14
  unsigned int j; // ebx
  SIZE_T Length; // [rsp+30h] [rbp-68h] BYREF
  char Source2[40]; // [rsp+38h] [rbp-60h] BYREF

  if ( !a4 || *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 303824) )
  {
    Length = 0LL;
    memset(Source2, 0, 0x21uLL);
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v8, 0LL, a3, Source2, 0x21u, &Length);
    v9 = Length;
    if ( Length )
    {
      v10 = 0;
      for ( i = this;
            !*((_BYTE *)i + 100)
         || *(_QWORD *)i != a2
         || RtlCompareMemory((char *)this + 4720 * v10 + 8, Source2, v9) != v9;
            i = (DripsBlockerTrackingHelper *)((char *)i + 4720) )
      {
        if ( ++v10 >= 0x40 )
          return;
      }
      v12 = 4720LL * v10;
      for ( j = 0; j < *(_DWORD *)((char *)this + v12 + 44); ++j )
      {
        if ( *(_DWORD *)((char *)this + 72 * j + v12 + 144) )
          DripsBlockerTrackingHelper::EnableEntryAccounting(this, v10, j, a4);
      }
    }
  }
}
