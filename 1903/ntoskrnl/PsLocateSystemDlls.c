/*
 * XREFs of PsLocateSystemDlls @ 0x14075B4B8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x14018C1B0 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x14075B53C (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _QWORD *v0; // rdi
  __int64 v1; // rsi
  int i; // ebx
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = &PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    for ( i = 0; i < 6; ++i )
    {
      if ( *v0 )
      {
        SystemDll = PspLocateSystemDll(*v0, (*(_DWORD *)(*v0 + 16LL) & 0x10) != 0 ? (unsigned int)v1 : 0);
        if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 16LL) & 1) != 0 )
          KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
      }
      ++v0;
    }
  }
  return 0LL;
}
