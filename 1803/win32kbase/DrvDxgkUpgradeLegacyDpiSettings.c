/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00D48E0
 * Callers:
 *     <none>
 * Callees:
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031D50 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  struct PDEV *v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ebx
  struct _LUID *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  struct PDEV *v24; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v25[5]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h]
  _DWORD v27[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v7 = gppdevList;
  if ( gppdevList )
  {
    while ( 1 )
    {
      v24 = v7;
      if ( !v7 )
        goto LABEL_26;
      v8 = *((_DWORD *)v7 + 10);
      if ( (v8 & 1) == 0 )
        goto LABEL_26;
      if ( (v8 & 0x400) != 0 )
        goto LABEL_26;
      v9 = *((_QWORD *)v7 + 321);
      if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v9 + 160) & 0x800000) == 0 )
        goto LABEL_26;
      memset(v27, 0, sizeof(v27));
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _DWORD *))qword_1C01A1E60)(
              a1,
              *(_QWORD *)(v9 + 240),
              *(unsigned int *)(v9 + 256),
              v27);
      v4 = v10;
      if ( v10 < 0 )
        break;
      v25[0] = *((__m128i *)v7 + 153);
      v25[1] = *((__m128i *)v7 + 154);
      v25[2] = *((__m128i *)v7 + 155);
      v25[3] = *((__m128i *)v7 + 156);
      v25[4] = *((__m128i *)v7 + 157);
      v26 = *((_OWORD *)v7 + 158);
      if ( v27[2] != _mm_srli_si128(*v25, 8).m128i_i32[1] )
      {
        v13 = 0;
        v14 = &DesktopScaleFactorCutoffs;
        do
        {
          if ( *v14 > v27[2] )
            break;
          ++v13;
          ++v14;
        }
        while ( (__int64)v14 < (__int64)&dword_1C017AE84 );
        v15 = &DesktopScaleFactorCutoffs;
        v16 = 0;
        do
        {
          if ( *v15 > v25[0].m128i_i32[3] )
            break;
          ++v16;
          ++v15;
        }
        while ( (__int64)v15 < (__int64)&dword_1C017AE84 );
        v17 = v13 - v16;
        v18 = v17;
        if ( (int)v26 > v17 )
          v18 = v26;
        if ( v18 >= SDWORD2(v26) )
        {
          v17 = DWORD2(v26);
        }
        else if ( (int)v26 > v17 )
        {
          v17 = v26;
        }
        v19 = *(_DWORD *)(*((_QWORD *)v7 + 321) + 256LL);
        v20 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v24);
        v21 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, _QWORD, __m128i *))qword_1C01A1E40)(
                v20,
                v19,
                (unsigned int)v17,
                v25);
        v4 = v21;
        if ( v21 < 0 )
          break;
        *a2 = 1;
      }
LABEL_26:
      v7 = *(struct PDEV **)v7;
      if ( !v7 )
        goto LABEL_27;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v6);
    v22[3] = v4;
    v22[4] = *(_QWORD *)(*((_QWORD *)v7 + 321) + 240LL);
    v22[5] = *(unsigned int *)(*((_QWORD *)v7 + 321) + 256LL);
    WdLogEvent5_WdError(v22);
    goto LABEL_26;
  }
LABEL_27:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v6);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v23);
  }
  return (unsigned int)v4;
}
