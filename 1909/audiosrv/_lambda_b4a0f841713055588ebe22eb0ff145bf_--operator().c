/*
 * XREFs of _lambda_b4a0f841713055588ebe22eb0ff145bf_::operator() @ 0x1800F1DE0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b4a0f841713055588ebe22eb0ff145bf__bool_ISaDeviceProxy___::_Do_call @ 0x1800F3B00 (std--_Func_impl_no_alloc__lambda_b4a0f841713055588ebe22eb0ff145bf__bool_ISaDeviceProxy___--_Do_c.c)
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006C957 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1800D1F10 (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x1800F3CCC (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x1800F3D30 (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x1800F3DB4 (WPP_SF_qii.c)
 */

char __fastcall lambda_b4a0f841713055588ebe22eb0ff145bf_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned __int16 *v18; // rdi
  __int64 v19; // rbx
  const void *v20; // rax
  __int64 v22; // rsi
  int v23; // edi
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+28h] [rbp-40h]
  _BYTE v30[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 + 48) - *v8;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 56) - v8[1];
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = *(_DWORD *)(v9 + 48);
        v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
        WPP_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, a2, *v12, v11);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 8);
      v16 = *a1;
      if ( v15 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( *(_WORD *)(v17 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 16) )
        {
          v18 = *(unsigned __int16 **)(*a1 + 16);
          v19 = v18[8];
          v20 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(v18, v20, v19 + 18) )
            return 1;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v22 = *(_QWORD *)(*a1 + 16);
          v23 = *(unsigned __int16 *)(v22 + 2);
          v24 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            v26,
            v27,
            a2,
            *(_DWORD *)(v25 + 4),
            v24,
            *(_DWORD *)(v22 + 4),
            v23);
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v29 = v15;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_7c1e90e9a9dc33e1c6e4e37efc6dae83_Traceguids,
          a2,
          v28,
          v29);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}
