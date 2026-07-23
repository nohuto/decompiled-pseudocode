/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x1409033E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t **v4; // r14
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v11; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
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
  UNICODE_STRING ppszDestEnd; // [rsp+58h] [rbp-18h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (const wchar_t **)&off_1403559F8;
  Handle = 0LL;
  v5 = 0LL;
  v32 = 0;
  v6 = 0;
  v28 = 0;
  while ( wcsicmp(a3, *v4) )
  {
    ++v6;
    ++v4;
    if ( v6 )
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
               (NTSTRSAFE_PWSTR *)&ppszDestEnd,
               &pcchRemaining,
               0x900u) >= 0 )
        {
          v15 = pcchRemaining;
          if ( pcchRemaining >= 2 )
          {
            v16 = *(_QWORD *)&ppszDestEnd.Length;
            **(_WORD **)&ppszDestEnd.Length = 92;
            v14 = (wchar_t *)(v16 + 2);
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
        || (int)PnpCtxRegQueryInfoKey(v18, (int)Handle, (int)&v32, 0, (__int64)&v28, 0LL, 0LL) < 0 )
      {
        goto LABEL_28;
      }
      if ( v32 && *(_DWORD *)(a4 + 4) < *(_DWORD *)a4 )
      {
        v19 = ExAllocatePoolWithTag(PagedPool, 0x228uLL, 0x42444450u);
        v5 = (__int64)v19;
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
        ++*(_DWORD *)(v5 + 4);
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v5 + 8), 0x100uLL, v13, 0LL, 0LL, 0x900u);
        PnpCtxRegEnumKeyWithCallback(a1, (__int64)Handle, (__int64)&DrvDbGetObjectSubKeyCallback, v5);
        *(_QWORD *)(a4 + 536) = *(_QWORD *)(v5 + 536);
        *(_DWORD *)(a4 + 544) = *(_DWORD *)(v5 + 544);
        *(_DWORD *)(a4 + 548) = *(_DWORD *)(v5 + 548);
      }
      if ( v28 )
      {
        v24 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, _QWORD, _QWORD))(a4 + 520);
        if ( (!v24 || v24(a1, v13, 0LL, *(_QWORD *)(a4 + 528))) && RtlInitUnicodeStringEx(&ppszDestEnd, v13) >= 0 )
        {
          v25 = *(_DWORD *)(a4 + 544);
          v26 = ppszDestEnd.MaximumLength >> 1;
          *(_DWORD *)(a4 + 548) += v26;
          if ( v25 > v26 )
          {
            RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v25, v13, 0LL, 0LL, 0x900u);
            *(_QWORD *)(a4 + 536) += 2LL * v26;
            *(_DWORD *)(a4 + 544) -= v26;
          }
        }
      }
      if ( v5 )
        ExFreePoolWithTag((PVOID)v5, 0);
      goto LABEL_28;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
