/*
 * XREFs of _CmDevicePanelEnumSubkeyCallback @ 0x14074BA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcstoul @ 0x140197E00 (wcstoul.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmDevicePanelEnumSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, int *a4)
{
  int v5; // ecx
  wchar_t *v9; // r14
  int v10; // ecx
  int v11; // ecx
  bool v12; // cc
  wchar_t *PoolWithTag; // rax
  wchar_t *v14; // rsi
  wchar_t *v15; // rcx
  size_t v16; // rdx
  size_t v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  wchar_t *v20; // rax
  unsigned __int8 (__fastcall *v22)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v23; // edi
  unsigned int v24; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  size_t pcchRemaining; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  GUID Guid; // [rsp+58h] [rbp-20h] BYREF

  v5 = *a4;
  EndPtr = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v10 = v5 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 0LL;
      v12 = wcstoul(a3, &EndPtr, 16) <= 7;
    }
    else
    {
      v12 = wcstoul(a3, &EndPtr, 16) <= 0xFFFF;
    }
    if ( v12 && EndPtr && !*EndPtr )
    {
LABEL_7:
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_22;
      v15 = PoolWithTag;
      v16 = 57LL;
      if ( *((_WORD *)a4 + 2) )
      {
        if ( RtlStringCchCopyExW(PoolWithTag, 0x39uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &EndPtr, &pcchRemaining, 0x900u) < 0 )
          goto LABEL_21;
        v17 = pcchRemaining;
        if ( pcchRemaining < 2 )
          goto LABEL_21;
        *EndPtr = 92;
        v16 = v17 - 2;
        *++EndPtr = 0;
        v15 = EndPtr;
      }
      else
      {
        EndPtr = PoolWithTag;
      }
      v18 = RtlStringCchCopyW(v15, v16, a3);
      v19 = 0LL;
      if ( v18 >= 0 )
      {
        if ( (unsigned int)*a4 < 3 )
        {
          if ( a1 )
            v19 = *(_QWORD *)(a1 + 224);
          if ( (int)SysCtxRegOpenKey(v19, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0 )
            goto LABEL_21;
          v20 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x52504E50u);
          v9 = v20;
          if ( !v20 )
            goto LABEL_21;
          memset(v20, 0, 0xA0uLL);
          *(_DWORD *)v9 = *a4 + 1;
          RtlStringCchCopyExW(v9 + 2, 0x39uLL, v14, 0LL, 0LL, 0x900u);
          *((_QWORD *)v9 + 15) = *((_QWORD *)a4 + 15);
          *((_QWORD *)v9 + 16) = *((_QWORD *)a4 + 16);
          *((_QWORD *)v9 + 17) = *((_QWORD *)a4 + 17);
          *((_DWORD *)v9 + 36) = a4[36];
          *((_DWORD *)v9 + 37) = a4[37];
          PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDevicePanelEnumSubkeyCallback, v9);
          a4[37] = *((_DWORD *)v9 + 37);
          *((_QWORD *)a4 + 17) = *((_QWORD *)v9 + 17);
          a4[36] = *((_DWORD *)v9 + 36);
          goto LABEL_19;
        }
        if ( RtlInitUnicodeStringEx(&DestinationString, v14) >= 0 )
        {
          v22 = (unsigned __int8 (__fastcall *)(__int64, wchar_t *, __int64, _QWORD))*((_QWORD *)a4 + 15);
          v23 = DestinationString.MaximumLength >> 1;
          if ( !v22 || v22(a1, v14, 6LL, *((_QWORD *)a4 + 16)) )
          {
            a4[37] += v23;
            v24 = a4[36];
            if ( v24 > v23 )
            {
              RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 17), v24, v14, 0LL, 0LL, 0x900u);
              *((_QWORD *)a4 + 17) += 2LL * v23;
              a4[36] -= v23;
LABEL_19:
              if ( v9 )
                ExFreePoolWithTag(v9, 0);
            }
          }
        }
      }
LABEL_21:
      ExFreePoolWithTag(v14, 0);
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, a3);
    if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
      goto LABEL_7;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
