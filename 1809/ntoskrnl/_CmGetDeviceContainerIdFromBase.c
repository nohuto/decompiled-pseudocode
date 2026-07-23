/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x1406EB90C
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140590C40 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EC47C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x1408F887C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscmp @ 0x140197840 (wcscmp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmIsDeviceInContainer @ 0x1406EBAA8 (_CmIsDeviceInContainer.c)
 *     _CmValidateDeviceContainerName @ 0x1406EBC14 (_CmValidateDeviceContainerName.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  unsigned int v4; // edi
  int CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  char v15; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v16[7]; // [rsp+41h] [rbp-50h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  int v18[4]; // [rsp+50h] [rbp-41h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-31h] BYREF

  v4 = 0;
  v17 = 0LL;
  v16[0] = 0;
  v15 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v17);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(a1, v17, (_DWORD)a3, (_DWORD)a3, a2, (__int64)v16, (__int64)&v15);
        if ( CachedContextBaseKey >= 0 && !v15 )
        {
          while ( 1 )
          {
            v18[0] = 39;
            v11 = RegRtlEnumKey(v17, v4, pszSrc, v18);
            CachedContextBaseKey = v11;
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -1073741789 )
            {
              if ( v11 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v14 = CmValidateDeviceContainerName(v12, pszSrc, v13);
              CachedContextBaseKey = v14;
              if ( v14 != -1073741773 )
              {
                if ( v14 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         a1,
                                         v17,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v16,
                                         (__int64)&v15);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v16[0] )
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                if ( CachedContextBaseKey < 0 || v15 )
                  return (unsigned int)CachedContextBaseKey;
              }
            }
            ++v4;
          }
          return 0;
        }
      }
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
