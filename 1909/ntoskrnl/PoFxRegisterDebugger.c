/*
 * XREFs of PoFxRegisterDebugger @ 0x140A226F4
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PoFxActivateComponent @ 0x1400E0A20 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x140195D20 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PoFxRegisterCoreDevice @ 0x140771B40 (PoFxRegisterCoreDevice.c)
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
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-E0h]
  __int64 v11; // [rsp+30h] [rbp-D8h]
  __int64 v12; // [rsp+38h] [rbp-D0h]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v17[10]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-38h]
  __int64 v20; // [rsp+D8h] [rbp-30h]
  wchar_t pszDest[24]; // [rsp+E0h] [rbp-28h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v17, 0, sizeof(v17));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140426798[0])(
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
      if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, SIZE_T *))off_140426798[0])(
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
              v18 = 0LL;
              v19 = 0LL;
              v20 = 0LL;
              memset(v17, 0, sizeof(v17));
              v17[0] = 0x100000001LL;
              v17[9] = &v18;
              v17[3] = PopFxDebuggerPowerCriticalTransitionCallback;
              LODWORD(v17[8]) = 1;
              if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString, (__int64)v17, &BugCheckParameter2) < 0 )
                break;
              v7 = BugCheckParameter2;
              v8 = *(_DWORD *)(BugCheckParameter2 + 816) | 2;
              v15 = 0LL;
              *(_DWORD *)(BugCheckParameter2 + 816) = v8;
              v9 = *(_QWORD *)(v7 + 64);
              if ( v9 )
              {
                v15 = *(_QWORD *)(v7 + 72);
                (*(void (__fastcall **)(__int64, __int64 *))(v9 + 96))(21LL, &v15);
              }
              PoFxActivateComponent(v7, 0LL, 1LL);
              PoFxStartDevicePowerManagement(v7);
            }
          }
          else if ( !*v4 )
          {
            LODWORD(v12) = (v4[4] >> 5) & 7;
            LODWORD(v11) = v4[4] & 0x1F;
            LODWORD(v10) = v4[3];
            RtlStringCbPrintfW(
              pszDest,
              0x30uLL,
              L"PCI_DEBUG_%04X_%02X_%02X_%02X",
              *((unsigned __int16 *)v4 + 4),
              v10,
              v11,
              v12);
            v6 = pszDest;
            goto LABEL_12;
          }
        }
      }
      ExFreePoolWithTag(v2, 0x4D584650u);
    }
  }
}
