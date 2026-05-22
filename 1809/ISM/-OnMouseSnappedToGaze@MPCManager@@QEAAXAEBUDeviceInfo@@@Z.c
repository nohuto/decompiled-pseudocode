/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x18003D150
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FC980 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::OnMouseSnappedToGaze(MPCManager *this, const struct DeviceInfo *a2)
{
  _DWORD *v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  __int64 *v7; // rdi
  __int64 *j; // rbx
  int v9; // eax
  __int64 **v10; // rax
  __int64 *v11; // rcx
  __int64 *i; // rax
  int v13; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      ISMTracing::Instance();
      v5 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v5 > 4u )
      {
        v6 = *(_DWORD *)a2;
        v17 = 0;
        v13 = v6;
        v15 = &v13;
        v16 = 4;
        TlgWrite(v5, &unk_180166CC4, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  v7 = (__int64 *)*((_QWORD *)this + 9);
  j = (__int64 *)*v7;
  while ( j != v7 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, const struct DeviceInfo *))(*(_QWORD *)j[5] + 48LL))(j[5], a2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x118,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9);
    if ( !*((_BYTE *)j + 25) )
    {
      v10 = (__int64 **)j[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v11 = *v10;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          j = v11;
      }
    }
  }
}
