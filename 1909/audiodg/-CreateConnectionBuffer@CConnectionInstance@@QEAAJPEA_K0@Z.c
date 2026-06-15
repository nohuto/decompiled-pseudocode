/*
 * XREFs of ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000B394
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000A0D0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CConnectionInstance::CreateConnectionBuffer(
        CConnectionInstance *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v3; // eax
  __int64 v5; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  unsigned __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 10);
  v5 = *((_QWORD *)this + 3);
  v15 = 0LL;
  v13 = 0LL;
  v14 = v3;
  v16 = 1094927443;
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v15);
    goto LABEL_3;
  }
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 8LL))(v11, &v15);
LABEL_3:
    v9 = v8;
    if ( v8 < 0 )
      goto LABEL_6;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned __int64 *))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         v12,
         &v17);
  if ( v9 >= 0 )
  {
    *a2 = v17;
    *a3 = v13;
  }
LABEL_6:
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v15 = 0LL;
  }
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_05a381e239823bc015f0eea1d9bc1631_Traceguids,
        (unsigned int)v9);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnectionBuffer", 0xB3u, v9);
  }
  return (unsigned int)v9;
}
