/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C00A0740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00A0990 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00A0D1C (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(COPM *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned __int8 *PoolWithTag; // rsi
  int CertificateSize; // edi
  COPM *v11; // rcx
  SIZE_T NumberOfBytes[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  PoolWithTag = 0LL;
  CertificateSize = COPM::GetCertificateSize(a1, a1, a2, (unsigned int *)NumberOfBytes);
  if ( CertificateSize >= 0 )
  {
    if ( a4 < LODWORD(NumberOfBytes[0]) )
    {
      CertificateSize = -1071774450;
    }
    else
    {
      PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x4D504F47u);
      NumberOfBytes[1] = (SIZE_T)PoolWithTag;
      if ( PoolWithTag )
      {
        CertificateSize = COPM::GetCertificate(v11, a1, a2, PoolWithTag, NumberOfBytes[0]);
        if ( CertificateSize >= 0 )
        {
          ProbeForWrite(a3, LODWORD(NumberOfBytes[0]), 1u);
          memmove(a3, PoolWithTag, LODWORD(NumberOfBytes[0]));
        }
      }
      else
      {
        CertificateSize = -1073741801;
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
  if ( CertificateSize < 0 )
    return (unsigned int)CertificateSize;
  return v8;
}
