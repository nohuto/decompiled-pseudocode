/*
 * XREFs of ExRaiseHardError @ 0x140913940
 * Callers:
 *     NtRaiseHardError @ 0x14072EC40 (NtRaiseHardError.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     CmpQuotaWarningWorker @ 0x140826A50 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x140833B00 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x140853560 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140853B00 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140853DA0 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x14090A1C0 (ExpExpirationThread.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1401C0F50 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401C1010 (ZwFreeVirtualMemory.c)
 *     ExpRaiseHardError @ 0x14072EE70 (ExpRaiseHardError.c)
 */

NTSTATUS __fastcall ExRaiseHardError(unsigned int a1, unsigned int a2, unsigned int a3, _QWORD *a4, int a5, _DWORD *a6)
{
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  PVOID v11; // r9
  ULONG_PTR v12; // r8
  __int64 i; // rdx
  _QWORD *v14; // r13
  wchar_t *v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  UNICODE_STRING *v18; // rcx
  __int64 v19; // rbx
  int v20; // ebx
  unsigned int v21; // [rsp+40h] [rbp-E8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-D8h] BYREF
  int v24; // [rsp+58h] [rbp-D0h]
  unsigned int v25; // [rsp+5Ch] [rbp-CCh]
  unsigned int v26; // [rsp+60h] [rbp-C8h]
  unsigned int v27; // [rsp+68h] [rbp-C0h]
  wchar_t *v28; // [rsp+70h] [rbp-B8h]
  _QWORD *v29; // [rsp+78h] [rbp-B0h]
  _DWORD *v30; // [rsp+80h] [rbp-A8h]
  wchar_t *v31; // [rsp+88h] [rbp-A0h]
  _OWORD v32[5]; // [rsp+90h] [rbp-98h] BYREF

  v9 = a1;
  v25 = a1;
  v26 = a1;
  v27 = a2;
  v21 = a3;
  v29 = a4;
  v30 = a6;
  if ( ExpTooLateForErrors )
  {
    *a6 = 1;
    return 0;
  }
  *a6 = 0;
  if ( a2 > 5 )
    return -1073741584;
  v11 = 0LL;
  BaseAddress = 0LL;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 136LL;
      RegionSize = 136LL;
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
      {
        if ( _bittest((const int *)&a3, i) )
        {
          v32[(unsigned int)i] = *(_OWORD *)a4[i];
          v12 += WORD1(v32[(unsigned int)i]);
          RegionSize = v12;
        }
      }
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( result < 0 )
        return result;
      v11 = BaseAddress;
      v14 = BaseAddress;
      v15 = (wchar_t *)((char *)BaseAddress + 120);
      v28 = (wchar_t *)((char *)BaseAddress + 120);
      v16 = 0LL;
      v24 = 0;
      while ( (unsigned int)v16 < a2 )
      {
        if ( _bittest((const int *)&a3, v16) )
        {
          v17 = 16LL * (unsigned int)v16;
          v18 = (UNICODE_STRING *)&v14[v17 / 8 + 5];
          v14[v16] = v18;
          v18->Buffer = v15;
          v19 = WORD1(v32[v17 / 0x10]);
          v18->MaximumLength = v19;
          RtlCopyUnicodeString(v18, (PCUNICODE_STRING)&v32[v17 / 0x10]);
          v15 = (wchar_t *)((char *)v28 + v19);
          v28 = v15;
          v31 = v15;
        }
        else
        {
          v14[v16] = a4[v16];
        }
        v16 = (unsigned int)(v16 + 1);
        v24 = v16;
        v11 = BaseAddress;
      }
      v9 = v25;
    }
    else
    {
      v11 = a4;
      BaseAddress = a4;
    }
  }
  v20 = ExpRaiseHardError(v9, a2, a3, v11, (__int64)v11, a5, &v21);
  if ( BaseAddress && BaseAddress != a4 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  *a6 = v21;
  return v20;
}
