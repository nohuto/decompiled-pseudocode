/*
 * XREFs of ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C00E3040
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1C00E0ADC (--0CCursorSizes@@QEAA@XZ.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     EditionUpdateCursorSizes @ 0x1C00E3020 (EditionUpdateCursorSizes.c)
 * Callees:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00457CC (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     GetCursorSizeFromIndex @ 0x1C00E32E4 (GetCursorSizeFromIndex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0109AA8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01CC2F8 (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01CC38C (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 */

void __fastcall CCursorSizes::RefreshSizes(CCursorSizes *this)
{
  unsigned __int8 (__fastcall ***v2)(char *); // rbx
  unsigned int v3; // r15d
  int v4; // r12d
  __int128 v5; // xmm0
  unsigned int v6; // esi
  __int128 v7; // xmm1
  _DWORD *v8; // r14
  INT CursorSizeFromIndex; // eax
  INT v10; // eax
  __int64 i; // rdx
  __int128 v12; // xmm1
  int *v13; // rcx
  __int64 v14; // r9
  int v15; // r8d
  _DWORD *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rsi
  char v20; // r13
  bool v21; // zf
  CCursorSizes *v22; // r13
  unsigned __int16 v23; // cx
  unsigned __int64 v24; // rax
  unsigned int v25; // edi
  unsigned int v26; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  CCursorSizes *v28; // [rsp+50h] [rbp-B8h]
  _OWORD v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h]
  _OWORD v31[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v36; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]

  v28 = this;
  v2 = (unsigned __int8 (__fastcall ***)(char *))((char *)this + 64);
  v3 = *(_DWORD *)UPDWORDPointer(8232LL);
  if ( (**v2)((char *)v2) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
    *((_QWORD *)this + 10) = KeGetCurrentThread();
    if ( !(**v2)((char *)this + 64) )
      CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  }
  v4 = *((_DWORD *)this + 1);
  v5 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 1) = v3;
  v6 = 0;
  v7 = *(_OWORD *)((char *)this + 40);
  v8 = (_DWORD *)((char *)this + 24);
  v29[0] = v5;
  v30 = *((_QWORD *)this + 7);
  v29[1] = v7;
  do
  {
    CursorSizeFromIndex = GetCursorSizeFromIndex(v6);
    v10 = EngMulDiv(CursorSizeFromIndex, v3, 32);
    *v8 = 0;
    ++v6;
    v8[1] = v10;
    v8 += 2;
  }
  while ( v6 < 5 );
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    v23 = *(_WORD *)(*(_QWORD *)(i + 40) + 68LL);
    if ( v23 >= 0x90u )
    {
      if ( v23 >= 0xC0u )
      {
        if ( v23 >= 0x120u )
          v24 = (-(__int64)(v23 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
        else
          v24 = 40LL;
      }
      else
      {
        v24 = 32LL;
      }
    }
    else
    {
      v24 = 24LL;
    }
    *(_DWORD *)((char *)this + v24) = 1;
  }
  v12 = *(_OWORD *)((char *)this + 40);
  v31[0] = *(_OWORD *)((char *)this + 24);
  v32 = *((_QWORD *)this + 7);
  v31[1] = v12;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v3 != v4 )
    InputTraceLogging::Cursor::UpdateBaseSize(v3);
  v13 = (int *)v31;
  v14 = 5LL;
  do
  {
    v15 = *v13;
    v16 = v29;
    v17 = 5LL;
    do
    {
      if ( v15 && *v16 && v13[1] == v16[1] )
      {
        v15 = 0;
        *v16 = 0;
      }
      v16 += 2;
      --v17;
    }
    while ( v17 );
    *v13 = v15;
    v13 += 2;
    --v14;
  }
  while ( v14 );
  v18 = 0LL;
  v19 = 5LL;
  v20 = 0;
  do
  {
    if ( *(_DWORD *)((char *)v29 + v18) )
    {
      v25 = *(_DWORD *)((char *)v29 + v18 + 4);
      v26 = v25;
      if ( dword_1C03222C0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 8uLL) )
      {
        v35 = 4LL;
        v34 = &v26;
        TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E52E5, 0LL, 0LL, 3u, &pData);
      }
      _CleanupUnneededSystemCursorSizes(v25);
    }
    if ( *(_DWORD *)((char *)v31 + v18) )
    {
      v20 = 1;
      LODWORD(v27) = *(_DWORD *)((char *)v31 + v18 + 4);
      if ( dword_1C03222C0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 8uLL) )
        {
          v38 = 4LL;
          v37 = &v27;
          TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E52B1, 0LL, 0LL, 3u, &v36);
        }
      }
    }
    v18 += 8LL;
    --v19;
  }
  while ( v19 );
  v21 = v20 == 0;
  v22 = v28;
  if ( !v21 )
  {
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::UpdateGlobalCursorSize(v22, (const struct tagPOINT *)(gpsi + 4960LL), 1);
}
