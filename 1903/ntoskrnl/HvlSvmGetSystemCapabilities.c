/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x140289FC0
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x14028C334 (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x14028CD50 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x140343D80 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140343E00 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HvlSvmGetSystemCapabilities(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  int v7; // eax
  _QWORD *v8; // rbx
  _DWORD *v9; // rsi
  PHYSICAL_ADDRESS v10[4]; // [rsp+28h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h]
  __int64 v14; // [rsp+78h] [rbp-90h] BYREF
  __int64 v15; // [rsp+80h] [rbp-88h]
  _QWORD v16[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v17[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v18[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v19[2064]; // [rsp+B8h] [rbp-50h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16[0] = 0LL;
  v16[1] = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = (unsigned int)HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v14);
      if ( (v15 & 0x1000000000000LL) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(v16, v3, v4, v5);
        if ( LODWORD(v16[0]) >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v12);
          v6 = v12;
          if ( (v12 & 1) != 0 )
          {
            v7 = HIDWORD(v12);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = v7;
            *(_DWORD *)(a1 + 12) = v13;
            *(_DWORD *)(a1 + 8) = v6 >> 11;
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(v17);
              if ( SLOBYTE(v17[0]) >= 0 )
                *(_DWORD *)a1 |= 2u;
              v8 = HvlpAcquireHypercallPage(v11, 1, (__int64)v18, 8LL);
              v9 = HvlpAcquireHypercallPage(v10, 2, (__int64)v19, 1032LL);
              *v8 = 0LL;
              *(_DWORD *)v8 = 11;
              if ( !(unsigned __int16)HvcallCodeVa() )
              {
                *(_DWORD *)(a1 + 16) = *v9;
                *(_DWORD *)(a1 + 20) = v9[1];
              }
              HvlpReleaseHypercallPage((unsigned int *)v10);
              return (__int64)HvlpReleaseHypercallPage((unsigned int *)v11);
            }
          }
        }
      }
    }
  }
  return result;
}
