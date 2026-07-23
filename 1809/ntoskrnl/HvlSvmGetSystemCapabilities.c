/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x140276030
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x140278254 (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x140278C6C (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x140322540 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1403225B0 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HvlSvmGetSystemCapabilities(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG LowPart; // ecx
  LONG HighPart; // eax
  _QWORD *v8; // rbx
  _DWORD *v9; // rsi
  PHYSICAL_ADDRESS v10[3]; // [rsp+28h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+54h] [rbp-B4h]
  _BYTE v14[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v15[2064]; // [rsp+78h] [rbp-90h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = (unsigned int)HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = (unsigned int)HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v11);
      if ( (v13 & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v11, v3, v4, v5);
        if ( v11.LowPart >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v11);
          LowPart = v11.LowPart;
          if ( (v11.LowPart & 1) != 0 )
          {
            HighPart = v11.HighPart;
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = HighPart;
            *(_DWORD *)(a1 + 12) = v12;
            *(_DWORD *)(a1 + 8) = LowPart >> 11;
            result = (unsigned int)HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v11);
              if ( SLOBYTE(v11.QuadPart) >= 0 )
                *(_DWORD *)a1 |= 2u;
              v8 = HvlpAcquireHypercallPage(v10, 1, (__int64)v14, 8LL);
              v9 = HvlpAcquireHypercallPage(&v11, 2, (__int64)v15, 1032LL);
              *v8 = 0LL;
              *(_DWORD *)v8 = 11;
              if ( !(unsigned __int16)HvcallCodeVa() )
              {
                *(_DWORD *)(a1 + 16) = *v9;
                *(_DWORD *)(a1 + 20) = v9[1];
              }
              HvlpReleaseHypercallPage((unsigned int *)&v11);
              return (__int64)HvlpReleaseHypercallPage((unsigned int *)v10);
            }
          }
        }
      }
    }
  }
  return result;
}
