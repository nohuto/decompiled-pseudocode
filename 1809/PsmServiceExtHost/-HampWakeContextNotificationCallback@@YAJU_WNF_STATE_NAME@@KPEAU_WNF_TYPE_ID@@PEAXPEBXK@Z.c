/*
 * XREFs of ?HampWakeContextNotificationCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180031AE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampWakeContextNotificationCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4)
{
  DWORD v5; // edi
  signed __int64 v6; // rax
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rtt
  DWORD v10; // esi
  _QWORD *Value; // rdi
  _QWORD *v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  bool v15; // zf
  signed __int64 v16; // rtt
  DWORD v17; // ebx
  unsigned __int64 v19; // rdi
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, TlsValue);
  }
  _m_prefetchw(a4 + 3);
  v6 = a4[3];
  v7 = v6 + 1;
  v8 = v6 == 0;
  if ( (unsigned __int64)(v6 + 1) <= 1 )
  {
LABEL_30:
    if ( !v8 )
      __fastfail(0xEu);
  }
  else
  {
    while ( 1 )
    {
      v9 = v6;
      v6 = _InterlockedCompareExchange64(a4 + 3, v7, v6);
      if ( v9 == v6 )
        break;
      v7 = v6 + 1;
      if ( v6 == -1 || v6 == 0 )
      {
        v8 = v7 == 1;
        goto LABEL_30;
      }
    }
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *Value |= 0x800uLL;
      ++Value[12];
    }
    RtlAcquireSRWLockExclusive(a4 + 5);
    *((_DWORD *)a4 + 12) = GetCurrentThreadId();
    *((_BYTE *)a4 + 185) |= 1u;
    if ( (a4[23] & 3) == 0 )
    {
      if ( _InterlockedIncrement64(a4 + 3) <= 1 )
        __fastfail(0xEu);
      TpPostWork(a4[12]);
      *((_BYTE *)a4 + 184) |= 1u;
    }
    if ( HampLockTrackerId != -1 )
    {
      v12 = TlsGetValue(HampLockTrackerId);
      if ( (*(_DWORD *)v12 & 0x800LL) == 0 )
        __int2c();
      v8 = v12[12]-- == 1LL;
      if ( v8 )
        *v12 &= ~0x800uLL;
    }
    *((_DWORD *)a4 + 12) = 0;
    RtlReleaseSRWLockExclusive(a4 + 5);
    _m_prefetchw(a4 + 3);
    v13 = a4[3];
    v14 = v13 - 1;
    v15 = v13 == 1;
    if ( v13 - 1 <= 0 )
    {
LABEL_33:
      if ( !v15 )
        __fastfail(0xEu);
      v19 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( a4[2] == -1LL )
      {
        if ( _InterlockedDecrement64(a4 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(_QWORD *))(v19 + 24))(a4);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v19 + 16);
        v20 = _InterlockedExchangeAdd64(a4 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v21 = v20 <= 1;
        v22 = v20 - 1;
        if ( v21 )
        {
          if ( v22 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v19 + 16);
          (*(void (__fastcall **)(_QWORD *))(v19 + 24))(a4);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v19 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v16 = v13;
        v13 = _InterlockedCompareExchange64(a4 + 3, v14, v13);
        if ( v16 == v13 )
          break;
        v14 = v13 - 1;
        v15 = v13 == 1;
        if ( v13 - 1 <= 0 )
          goto LABEL_33;
      }
    }
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  return 0LL;
}
