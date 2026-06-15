/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x1800285E0
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180028560 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002D0D8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  CAudioSessionManager *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rsi
  int TickCount64; // eax
  unsigned int v6; // esi
  char *v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  v7 = (char *)this + 352;
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v7);
  if ( *((_DWORD *)this + 22) )
  {
    v2 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = 66LL;
LABEL_11:
      WPP_SF_(*((_QWORD *)v2 + 2), v3, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids);
    }
  }
  else
  {
    if ( *((int *)this + 101) <= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
      v4 = (__int64)(*((_QWORD *)this + 103) - *((_QWORD *)this + 102)) >> 3;
      if ( this != (CAudioSession *)-776LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
      if ( v4 )
      {
        TickCount64 = GetTickCount64();
        v6 = TickCount64 - *((_DWORD *)this + 98);
        v2 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            68,
            (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
            *((_QWORD *)this + 96),
            TickCount64 - *((_BYTE *)this + 392));
          v2 = WPP_GLOBAL_Control;
        }
        if ( *((int *)this + 100) > 0 )
        {
          if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v2 + 28) & 0x40) != 0
            && *((_BYTE *)v2 + 25) >= 4u )
          {
            v3 = 69LL;
            goto LABEL_11;
          }
          goto LABEL_35;
        }
        if ( v6 < *((_DWORD *)this + 78) - 16 )
        {
          if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v2 + 28) & 0x40) != 0
            && *((_BYTE *)v2 + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)v2 + 2), 70LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v6);
          }
          goto LABEL_35;
        }
      }
      else
      {
        v2 = WPP_GLOBAL_Control;
      }
      if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v2 + 28) & 0x40) != 0
        && *((_BYTE *)v2 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v2 + 2), 71LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, *((_QWORD *)this + 96));
      }
      (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 136LL))(this, 2LL);
      goto LABEL_35;
    }
    v2 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = 67LL;
      goto LABEL_11;
    }
  }
LABEL_35:
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v7);
}
