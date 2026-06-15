/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180022810
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180022790 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800C4C2C (WPP_SF_Sd.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  __int64 v2; // rdi
  int TickCount64; // eax
  unsigned int v4; // esi
  CAudioSessionManager *v5; // rcx
  CAudioSessionManager *v6; // rcx
  __int64 v7; // rdx
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v8 = (LPCRITICAL_SECTION)((char *)this + 352);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v8);
  if ( *((_DWORD *)this + 22) )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v7 = 66LL;
LABEL_28:
    WPP_SF_(*((_QWORD *)v6 + 2), v7, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids);
    goto LABEL_12;
  }
  if ( *((int *)this + 101) > 0 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v7 = 67LL;
    goto LABEL_28;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v2 = (__int64)(*((_QWORD *)this + 98) - *((_QWORD *)this + 97)) >> 3;
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( !v2 )
  {
    v5 = WPP_GLOBAL_Control;
LABEL_16:
    if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v5 + 28) & 0x40) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)v5 + 2), 71LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, *((_QWORD *)this + 91));
    }
    (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 136LL))(this, 2LL);
    goto LABEL_12;
  }
  TickCount64 = GetTickCount64();
  v4 = TickCount64 - *((_DWORD *)this + 98);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      68,
      (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      *((_QWORD *)this + 91),
      TickCount64 - *((_BYTE *)this + 392));
    v5 = WPP_GLOBAL_Control;
  }
  if ( *((int *)this + 100) <= 0 )
  {
    if ( v4 < *((_DWORD *)this + 78) - 16 )
    {
      if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v5 + 28) & 0x40) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)v5 + 2), 70LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v4);
      }
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)v5 + 28) & 0x40) != 0
    && *((_BYTE *)v5 + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)v5 + 2), 69LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids);
  }
LABEL_12:
  if ( v9 )
    LeaveCriticalSection(v8);
}
