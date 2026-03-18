/*
 * XREFs of ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C013C800
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1C011B0FC (--0CCursorSizes@@QEAA@XZ.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 *     EditionUpdateCursorSizes @ 0x1C013C7E0 (EditionUpdateCursorSizes.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     GetCursorSizeFromIndex @ 0x1C013CAA4 (GetCursorSizeFromIndex.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01CC168 (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01CC1FC (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 */

void __fastcall CCursorSizes::RefreshSizes(CCursorSizes *this)
{
  unsigned __int8 (__fastcall ***v2)(char *); // rbx
  unsigned int v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r12d
  __int128 v8; // xmm0
  unsigned int v9; // esi
  __int128 v10; // xmm1
  _DWORD *v11; // r14
  INT CursorSizeFromIndex; // eax
  INT v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rdx
  __int128 v17; // xmm1
  int *v18; // rcx
  __int64 v19; // r9
  int v20; // r8d
  _DWORD *v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rbx
  __int64 v24; // rsi
  char v25; // r13
  bool v26; // zf
  CCursorSizes *v27; // r13
  unsigned __int16 v28; // cx
  unsigned __int64 v29; // rax
  unsigned int v30; // edi
  unsigned int v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  CCursorSizes *v33; // [rsp+50h] [rbp-B8h]
  _OWORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h]
  _OWORD v36[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v41; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]

  v33 = this;
  v2 = (unsigned __int8 (__fastcall ***)(char *))((char *)this + 64);
  v3 = *(_DWORD *)UPDWORDPointer(8232LL);
  if ( (**v2)((char *)v2) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
    *((_QWORD *)this + 10) = KeGetCurrentThread();
    if ( !(**v2)((char *)this + 64) )
      CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64), v4, v5, v6);
  }
  v7 = *((_DWORD *)this + 1);
  v8 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 1) = v3;
  v9 = 0;
  v10 = *(_OWORD *)((char *)this + 40);
  v11 = (_DWORD *)((char *)this + 24);
  v34[0] = v8;
  v35 = *((_QWORD *)this + 7);
  v34[1] = v10;
  do
  {
    CursorSizeFromIndex = GetCursorSizeFromIndex(v9);
    v13 = EngMulDiv(CursorSizeFromIndex, v3, 32);
    *v11 = 0;
    ++v9;
    v11[1] = v13;
    v11 += 2;
  }
  while ( v9 < 5 );
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    v28 = *(_WORD *)(*(_QWORD *)(i + 40) + 68LL);
    if ( v28 >= 0x90u )
    {
      if ( v28 >= 0xC0u )
      {
        if ( v28 >= 0x120u )
          v29 = (-(__int64)(v28 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
        else
          v29 = 40LL;
      }
      else
      {
        v29 = 32LL;
      }
    }
    else
    {
      v29 = 24LL;
    }
    *(_DWORD *)((char *)this + v29) = 1;
  }
  v17 = *(_OWORD *)((char *)this + 40);
  v36[0] = *(_OWORD *)((char *)this + 24);
  v37 = *((_QWORD *)this + 7);
  v36[1] = v17;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64), 0LL, v14, v15);
  if ( v3 != v7 )
    InputTraceLogging::Cursor::UpdateBaseSize(v3);
  v18 = (int *)v36;
  v19 = 5LL;
  do
  {
    v20 = *v18;
    v21 = v34;
    v22 = 5LL;
    do
    {
      if ( v20 && *v21 && v18[1] == v21[1] )
      {
        v20 = 0;
        *v21 = 0;
      }
      v21 += 2;
      --v22;
    }
    while ( v22 );
    *v18 = v20;
    v18 += 2;
    --v19;
  }
  while ( v19 );
  v23 = 0LL;
  v24 = 5LL;
  v25 = 0;
  do
  {
    if ( *(_DWORD *)((char *)v34 + v23) )
    {
      v30 = *(_DWORD *)((char *)v34 + v23 + 4);
      v31 = v30;
      if ( dword_1C03202C0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 8uLL) )
      {
        v40 = 4LL;
        v39 = &v31;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E48A5, 0LL, 0LL, 3u, &pData);
      }
      _CleanupUnneededSystemCursorSizes(v30);
    }
    if ( *(_DWORD *)((char *)v36 + v23) )
    {
      v25 = 1;
      LODWORD(v32) = *(_DWORD *)((char *)v36 + v23 + 4);
      if ( dword_1C03202C0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 8uLL) )
        {
          v43 = 4LL;
          v42 = &v32;
          TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E4871, 0LL, 0LL, 3u, &v41);
        }
      }
    }
    v23 += 8LL;
    --v24;
  }
  while ( v24 );
  v26 = v25 == 0;
  v27 = v33;
  if ( !v26 )
  {
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::UpdateGlobalCursorSize(v27, (const struct tagPOINT *)(gpsi + 4960LL), 1);
}
