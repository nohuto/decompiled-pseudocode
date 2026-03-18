/*
 * XREFs of ?StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02121E8
 * Callers:
 *     ?StartStopCoreDripsBlockerAccounting@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0212308 (-StartStopCoreDripsBlockerAccounting@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEEPSTUDY_CONNECTION_ID@@PEADIPEA_KH@Z @ 0x1C0210EC4 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEE.c)
 *     ?StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z @ 0x1C021237C (-StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::StartStopAccounting(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  __int64 v8; // rcx
  size_t v9; // rcx
  __int64 v10; // rdi
  char *v11; // rbx
  SIZE_T v12; // rax
  __int64 v13; // [rsp+28h] [rbp-70h]
  SIZE_T Length; // [rsp+40h] [rbp-58h] BYREF
  char Source2[40]; // [rsp+48h] [rbp-50h] BYREF

  if ( !a4 || *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 431) )
  {
    Length = 0LL;
    memset(Source2, 0, 0x21uLL);
    DXGGLOBAL::GetGlobal(v8);
    DXGGLOBAL::PrepareDripsBlockerProcessName(v9, (__int64)a3, 0xFFFFFFFF, 3, Source2, v13, (__int64 *)&Length, 0);
    if ( Length )
    {
      v10 = 0LL;
      v11 = (char *)this + 16;
      do
      {
        if ( v11[17] )
        {
          v12 = RtlCompareMemory((char *)this + 72 * v10 + 33, Source2, Length);
          if ( v12 == Length && *(_QWORD *)v11 == a2 )
          {
            if ( *((_DWORD *)v11 + 2) )
              DripsBlockerTrackingHelper::StartStopEntryAccounting(this, v10, a4);
          }
        }
        v10 = (unsigned int)(v10 + 1);
        v11 += 72;
      }
      while ( (unsigned int)v10 < 0x100 );
    }
  }
}
