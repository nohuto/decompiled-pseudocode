/*
 * XREFs of sub_1406A1AF0 @ 0x1406A1AF0
 * Callers:
 *     NtQueryLicenseValue @ 0x1406A1820 (NtQueryLicenseValue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     sub_1400F2B80 @ 0x1400F2B80 (sub_1400F2B80.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpIsClipSpRunningUnderVrfIrqlCheck @ 0x1405B23A4 (ExpIsClipSpRunningUnderVrfIrqlCheck.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406A2320 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetSubscriptionPfn @ 0x14090C134 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall sub_1406A1AF0(const UNICODE_STRING *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  unsigned int v8; // r15d
  const UNICODE_STRING *v9; // rcx
  unsigned __int16 Length; // ax
  __int64 (**v11)[10]; // r12
  __int64 (**v12)[10]; // r14
  unsigned __int16 v13; // r10
  unsigned int v14; // eax
  _WORD *v15; // rdx
  signed __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r10
  char v19; // al
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v21; // r14d
  PCUNICODE_STRING v22; // rsi
  int v23; // eax
  unsigned int v24; // r14d
  wchar_t *PoolWithTag; // rax
  unsigned int v26; // ebx
  const wchar_t **v27; // rsi
  unsigned int v28; // esi
  struct _KTHREAD *v29; // rax
  char v30; // al
  unsigned int v31; // esi
  const UNICODE_STRING *v32; // r15
  unsigned __int16 v33; // r14
  unsigned __int16 v34; // r10
  _WORD *v35; // rdx
  signed __int64 v36; // r9
  __int64 v37; // r8
  __int64 *v38; // r10
  int v39; // eax
  _BYTE v41[4]; // [rsp+60h] [rbp-218h] BYREF
  int v42; // [rsp+64h] [rbp-214h]
  char v43; // [rsp+68h] [rbp-210h]
  unsigned int v44; // [rsp+6Ch] [rbp-20Ch]
  int v45; // [rsp+70h] [rbp-208h] BYREF
  wchar_t *Str1; // [rsp+78h] [rbp-200h]
  unsigned int *v47; // [rsp+80h] [rbp-1F8h]
  int v48; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v49; // [rsp+90h] [rbp-1E8h]
  __int64 v50; // [rsp+98h] [rbp-1E0h]
  unsigned int v51; // [rsp+A0h] [rbp-1D8h]
  int v52; // [rsp+A8h] [rbp-1D0h]
  __int64 *v53; // [rsp+B0h] [rbp-1C8h]
  PVOID P; // [rsp+B8h] [rbp-1C0h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-1B8h] BYREF
  const UNICODE_STRING *v56; // [rsp+C8h] [rbp-1B0h]
  PCUNICODE_STRING String1; // [rsp+D0h] [rbp-1A8h]
  __int64 v58; // [rsp+D8h] [rbp-1A0h]
  char v59[8]; // [rsp+E0h] [rbp-198h] BYREF
  const UNICODE_STRING *v60; // [rsp+E8h] [rbp-190h]
  __int64 v61; // [rsp+F0h] [rbp-188h]
  __int64 v62; // [rsp+F8h] [rbp-180h]
  __int64 v63; // [rsp+100h] [rbp-178h]
  signed __int64 v64; // [rsp+108h] [rbp-170h]
  _QWORD v65[8]; // [rsp+110h] [rbp-168h] BYREF
  _BYTE Buf1[112]; // [rsp+150h] [rbp-128h] BYREF
  _BYTE v67[112]; // [rsp+1C0h] [rbp-B8h] BYREF

  v44 = a4;
  v49 = a3;
  v50 = a2;
  String1 = a1;
  v60 = a1;
  v61 = a2;
  v62 = a3;
  v51 = a4;
  v47 = a5;
  v42 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v41[0] = 0;
  Str1 = 0LL;
  v58 = 0LL;
  P = 0LL;
  v48 = 0;
  if ( !a1 || !a5 || (v5 = 0, v42 = 0, !a1->Buffer) || a1->Length < 2u )
  {
    v5 = -1073741811;
    goto LABEL_68;
  }
  LOBYTE(v55) = 1;
  v56 = a1;
  v52 = ExpLoadAndSortLicensingCacheDescriptors();
  v53 = 0LL;
  v43 = 0;
  v6 = 1;
  v7 = 1;
  v8 = 0;
  v9 = v56;
  Length = v56->Length;
  LOWORD(v45) = v56->Length;
  v11 = &off_140946920;
  v12 = &off_140946920;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 + 4);
    if ( Length == v13 )
    {
      v14 = Length >> 1;
      if ( v14 )
      {
        v15 = Buf1;
        v16 = (char *)v9->Buffer - Buf1;
        v17 = v14;
        do
        {
          *v15 = *(_WORD *)((char *)v15 + v16) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
          v7 += 2;
          ++v15;
          --v17;
        }
        while ( v17 );
      }
      if ( !memcmp(Buf1, *v12, v13) )
      {
        v18 = (__int64 *)v12[2];
        v53 = v18;
        v19 = *((_BYTE *)v12 + 32);
        v43 = v19;
        goto LABEL_17;
      }
      v9 = v56;
    }
    else
    {
      v7 += v13;
    }
    ++v8;
    v12 += 5;
    if ( v8 >= 0xF )
      break;
    Length = v45;
  }
  v19 = 0;
  v18 = 0LL;
LABEL_17:
  if ( v18 )
  {
    if ( v19 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
      v18 = v53;
    }
    v21 = v44;
    v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v18)(v50, v49, v44, v47, v41);
    v42 = v5;
    v22 = String1;
    if ( v43 )
    {
      v63 = 17LL;
      v64 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL);
      if ( v64 != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
      KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v5 = v42;
    }
  }
  else
  {
    v22 = String1;
    v21 = v44;
  }
  if ( v41[0] )
  {
    if ( v5 >= 0 )
    {
      if ( *v47 > v21 )
        v5 = -1073741789;
      v42 = v5;
    }
    goto LABEL_69;
  }
  v5 = v52;
  if ( v52 < 0 )
  {
LABEL_68:
    v42 = v5;
    goto LABEL_69;
  }
  v42 = 0;
  v45 = 0;
  v42 = sub_1400F2B80((__int64)&qword_140947298, 0LL, (__int64)&v45, 4u, (__int64)v59);
  v23 = ExpIsClipSpRunningUnderVrfIrqlCheck(&v48);
  if ( AddressWithinSection
    && v45
    && ((unsigned __int8)v48 & (v23 >= 0)) == 0
    && !RtlEqualUnicodeString(v22, &String2, 0) )
  {
    v24 = v22->Length + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
    Str1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741801;
      goto LABEL_68;
    }
    memset(PoolWithTag, 0, v24);
    memmove(Str1, v22->Buffer, v22->Length);
    v65[0] = L"Security-SPP-GenuineLocalStatus";
    v65[1] = L"Security-SPP-Action-StateData";
    v65[2] = L"Security-SPP-LastWindowsActivationHResult";
    v65[3] = L"Security-SPP-LastWindowsActivationTime";
    v65[4] = L"Kernel-ExpirationDate";
    v65[5] = L"SMR-HostManaged-Enabled";
    v65[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
    v26 = 0;
    v27 = (const wchar_t **)v65;
    while ( wcsicmp(Str1, *v27) )
    {
      ++v26;
      ++v27;
      if ( v26 >= 7 )
      {
        ExpGetSubscriptionPfn(&P);
        v28 = v44;
        v5 = ((__int64 (__fastcall *)(PVOID, _QWORD, _QWORD, _QWORD, wchar_t *, unsigned int, __int64, unsigned int, unsigned int *, __int64, _QWORD))AddressWithinSection)(
               P,
               0LL,
               0LL,
               0LL,
               Str1,
               v24,
               v49,
               v44,
               v47,
               v50,
               0LL);
        if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741789 )
          break;
        if ( !v28 )
          v5 = -1073741789;
        v42 = v5;
        goto LABEL_51;
      }
    }
  }
  v5 = sub_1400F2B80((__int64)&v55, v50, v49, v44, (__int64)v47);
  v42 = v5;
  if ( v5 == -1073741762 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    byte_1409AE5C0 = 1;
    v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v30 & 2) != 0 && (v30 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = v42;
  }
LABEL_51:
  v31 = 0;
  v32 = v56;
  v33 = v56->Length;
  do
  {
    v34 = *((_WORD *)v11 + 4);
    if ( v33 == v34 )
    {
      if ( v33 >> 1 )
      {
        v35 = v67;
        v36 = (char *)v32->Buffer - v67;
        v37 = v33 >> 1;
        do
        {
          *v35 = *(_WORD *)((char *)v35 + v36) ^ ((v6 + 1) | ((_WORD)v6 << 8) | 0x5555);
          v6 += 2;
          ++v35;
          --v37;
        }
        while ( v37 );
      }
      if ( !memcmp(v67, *v11, v34) )
      {
        v38 = (__int64 *)v11[3];
        goto LABEL_61;
      }
    }
    else
    {
      v6 += v34;
    }
    ++v31;
    v11 += 5;
  }
  while ( v31 < 0xF );
  v38 = 0LL;
LABEL_61:
  if ( v38 && (v5 >= 0 || v5 == -1073741772 || v5 == -1073741275) )
  {
    v39 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v38)(v50, v49, v44, v47, v41);
    if ( v41[0] )
    {
      v5 = v39;
      v42 = v39;
    }
  }
LABEL_69:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Str1 )
    ExFreePoolWithTag(Str1, 0);
  return (unsigned int)v5;
}
