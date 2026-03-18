/*
 * XREFs of ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00C31E0
 * Callers:
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00C32F0 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z @ 0x1C02455E0 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::NotifyProcessFreeze(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        char a4)
{
  DripsBlockerTrackingHelper *v8; // rcx
  unsigned int v9; // esi
  DripsBlockerTrackingHelper *i; // rdi
  SIZE_T v11; // rax
  int v12; // eax
  int v13; // eax
  SIZE_T Length; // [rsp+30h] [rbp-68h] BYREF
  char Source2[40]; // [rsp+38h] [rbp-60h] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 303824) )
  {
    Length = 0LL;
    memset(Source2, 0, 0x21uLL);
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v8, 0LL, a3, Source2, 0x21u, &Length);
    if ( Length )
    {
      v9 = 0;
      for ( i = this; ; i = (DripsBlockerTrackingHelper *)((char *)i + 4720) )
      {
        if ( *((_BYTE *)i + 100) )
        {
          if ( *(_QWORD *)i == a2 )
          {
            v11 = RtlCompareMemory((char *)this + 4720 * v9 + 8, Source2, Length);
            if ( v11 == Length )
              break;
          }
        }
        if ( ++v9 >= 0x40 )
          return;
      }
      v12 = *((_DWORD *)this + 1180 * v9 + 26);
      if ( a4 )
      {
        if ( v12 <= 0 )
          return;
        v13 = v12 - 1;
      }
      else
      {
        v13 = v12 + 1;
      }
      *((_DWORD *)this + 1180 * v9 + 26) = v13;
    }
  }
}
