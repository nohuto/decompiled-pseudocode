/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x140940590
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE38 (RtlStringCchCopyExW.c)
 *     RtlStringCchCopyW @ 0x140153F64 (RtlStringCchCopyW.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F9390 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140768CF4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t **v5; // r14
  __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rcx
  int v15; // eax
  NTSTRSAFE_PWSTR v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  unsigned __int8 (__fastcall *v24)(__int64, wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v25; // eax
  unsigned int v26; // edi
  int v28; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-20h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v5 = (const wchar_t **)off_140374878;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v33 = 0;
  v9 = 0LL;
  v28 = 0;
  v10 = 0;
  while ( wcsicmp(a3, *v5) )
  {
    ++v10;
    ++v5;
    if ( v10 )
    {
      v11 = 256;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x42444450u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v14 = PoolWithTag;
      if ( *(_WORD *)(a4 + 8) )
      {
        if ( RtlStringCchCopyExW(
               PoolWithTag,
               0x100uLL,
               (NTSTRSAFE_PCWSTR)(a4 + 8),
               &ppszDestEnd,
               &pcchRemaining,
               0x900u) >= 0 )
        {
          v15 = pcchRemaining;
          if ( pcchRemaining >= 2 )
          {
            v16 = ppszDestEnd;
            *ppszDestEnd = 92;
            v14 = v16 + 1;
            *v14 = 0;
            v11 = v15 - 2;
            goto LABEL_9;
          }
        }
LABEL_28:
        ExFreePoolWithTag(v13, 0);
        break;
      }
LABEL_9:
      if ( RtlStringCchCopyW(v14, v11, a3) < 0 )
        goto LABEL_28;
      v17 = 0LL;
      if ( a1 )
        v17 = *(_QWORD *)(a1 + 224);
      if ( (int)SysCtxRegOpenKey(v17, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0
        || (int)PnpCtxRegQueryInfoKey(v18, Handle, (__int64)&v33, 0LL, (__int64)&v28, 0LL, 0LL) < 0 )
      {
        goto LABEL_28;
      }
      if ( v33 && *(_DWORD *)(a4 + 4) < *(_DWORD *)a4 )
      {
        v19 = ExAllocatePoolWithTag(PagedPool, 0x228uLL, 0x42444450u);
        v9 = (__int64)v19;
        if ( !v19 )
          goto LABEL_28;
        v20 = 4LL;
        v21 = v19;
        v22 = (_OWORD *)a4;
        do
        {
          *v21 = *v22;
          v21[1] = v22[1];
          v21[2] = v22[2];
          v21[3] = v22[3];
          v21[4] = v22[4];
          v21[5] = v22[5];
          v21[6] = v22[6];
          v21 += 8;
          v23 = v22[7];
          v22 += 8;
          *(v21 - 1) = v23;
          --v20;
        }
        while ( v20 );
        *v21 = *v22;
        v21[1] = v22[1];
        *((_QWORD *)v21 + 4) = *((_QWORD *)v22 + 4);
        ++*(_DWORD *)(v9 + 4);
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v9 + 8), 0x100uLL, v13, 0LL, 0LL, 0x900u);
        PnpCtxRegEnumKeyWithCallback(a1, Handle, (__int64)&DrvDbGetObjectSubKeyCallback, v9);
        *(_QWORD *)(a4 + 536) = *(_QWORD *)(v9 + 536);
        *(_DWORD *)(a4 + 544) = *(_DWORD *)(v9 + 544);
        *(_DWORD *)(a4 + 548) = *(_DWORD *)(v9 + 548);
      }
      if ( v28 )
      {
        v24 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, _QWORD, _QWORD))(a4 + 520);
        if ( (!v24 || v24(a1, v13, 0LL, *(_QWORD *)(a4 + 528))) && RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
        {
          v25 = *(_DWORD *)(a4 + 544);
          v26 = DestinationString.MaximumLength >> 1;
          *(_DWORD *)(a4 + 548) += v26;
          if ( v25 > v26 )
          {
            RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v25, v13, 0LL, 0LL, 0x900u);
            *(_QWORD *)(a4 + 536) += 2LL * v26;
            *(_DWORD *)(a4 + 544) -= v26;
          }
        }
      }
      if ( v9 )
        ExFreePoolWithTag((PVOID)v9, 0);
      goto LABEL_28;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
