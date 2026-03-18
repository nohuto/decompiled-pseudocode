/*
 * XREFs of DCompositionForceRender @ 0x1C0142C70
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00CADF0 (NtGdiDdDDISetHwProtectionTeardownRecovery.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C0144D80 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionForceRender(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r14d
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v9; // rdx
  DirectComposition::CConnection *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r9
  unsigned int v13; // edx

  v7 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v10 = DefaultConnection;
  if ( DefaultConnection )
  {
    v12 = 0LL;
    if ( a2 )
      v12 = 2 - (unsigned int)(a3 != 0);
    LOBYTE(v9) = v7 != 0;
    v11 = DirectComposition::CConnection::ForceRender(DefaultConnection, v9, 0LL, v12, a4 != 0);
    DirectComposition::CConnection::Release(v10, v13);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v11;
}
