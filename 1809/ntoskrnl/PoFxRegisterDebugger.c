/*
 * XREFs of PoFxRegisterDebugger @ 0x1409E033C
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PoFxActivateComponent @ 0x1400FE110 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x14018BE10 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PoFxRegisterCoreDevice @ 0x140726B50 (PoFxRegisterCoreDevice.c)
 */

void PoFxRegisterDebugger()
{
  unsigned int v0; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v2; // rdi
  unsigned int v3; // r15d
  _DWORD *v4; // rbx
  unsigned int i; // r14d
  wchar_t *v6; // rdx
  ULONG_PTR v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-E0h]
  __int64 v10; // [rsp+30h] [rbp-D8h]
  __int64 v11; // [rsp+38h] [rbp-D0h]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v16[10]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v17[3]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t pszDest[24]; // [rsp+E0h] [rbp-28h] BYREF

  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140401458[0])(
         33LL,
         0LL,
         0LL,
         &NumberOfBytes) == -2147483643 )
  {
    v0 = NumberOfBytes;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x4D584650u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v0);
      if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, SIZE_T *))off_140401458[0])(
             33LL,
             v0,
             v2,
             &NumberOfBytes) >= 0
        && (unsigned int)NumberOfBytes <= v0 )
      {
        v3 = 0;
        v4 = v2 + 1;
        for ( i = 0; i < *v2; ++i )
        {
          v4 = (_DWORD *)((char *)v4 + v3);
          v3 = v4[1];
          if ( *v4 == 1 )
          {
            if ( v4[2] )
            {
              v6 = (wchar_t *)(v4 + 3);
LABEL_12:
              RtlInitUnicodeString(&DestinationString, v6);
              memset(v17, 0, sizeof(v17));
              memset(v16, 0, sizeof(v16));
              v16[0] = 0x100000001LL;
              v16[9] = v17;
              v16[3] = PopFxDebuggerPowerCriticalTransitionCallback;
              LODWORD(v16[8]) = 1;
              if ( (int)PoFxRegisterCoreDevice(&DestinationString, (__int64)v16, &BugCheckParameter2) < 0 )
                break;
              v7 = BugCheckParameter2;
              *(_DWORD *)(BugCheckParameter2 + 808) |= 2u;
              v8 = *(_QWORD *)(v7 + 64);
              if ( v8 )
              {
                v14 = *(_QWORD *)(v7 + 72);
                (*(void (__fastcall **)(__int64, __int64 *))(v8 + 96))(21LL, &v14);
              }
              PoFxActivateComponent(v7, 0LL, 1LL);
              PoFxStartDevicePowerManagement(v7);
            }
          }
          else if ( !*v4 )
          {
            LODWORD(v11) = (v4[4] >> 5) & 7;
            LODWORD(v10) = v4[4] & 0x1F;
            LODWORD(v9) = v4[3];
            RtlStringCbPrintfW(
              pszDest,
              0x30uLL,
              L"PCI_DEBUG_%04X_%02X_%02X_%02X",
              *((unsigned __int16 *)v4 + 4),
              v9,
              v10,
              v11);
            v6 = pszDest;
            goto LABEL_12;
          }
        }
      }
      ExFreePoolWithTag(v2, 0x4D584650u);
    }
  }
}
