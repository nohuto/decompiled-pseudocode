/*
 * XREFs of Command_ControllerResetPostReset @ 0x1C0007538
 * Callers:
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_Initialize @ 0x1C00082E4 (Command_Initialize.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Etw_CommandCompleteError @ 0x1C0038F74 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_ControllerResetPostReset(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ****v3; // rcx
  __int64 ***v4; // rax
  __int64 **v5; // rdx
  _QWORD *v6; // rdx
  __int64 ****v7; // rcx
  __int64 ***v8; // rax
  __int64 **v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v18; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v18 = &v17;
  v17 = (__int64 *)&v17;
  DynamicLock_Acquire(v2);
  v3 = (__int64 ****)(a1 + 80);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 ***)v3 )
      break;
    if ( v4[1] != (__int64 **)v3
      || (v5 = *v4, (*v4)[1] != (__int64 *)v4)
      || (*v3 = (__int64 ***)v5, v5[1] = (__int64 *)v3, v6 = v18, *v18 != (__int64 *)&v17) )
    {
LABEL_18:
      __fastfail(3u);
    }
    v4[1] = v18;
    *v4 = &v17;
    *v6 = v4;
    v18 = (__int64 **)v4;
  }
  v7 = (__int64 ****)(a1 + 96);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 ***)v7 )
      break;
    if ( v8[1] != (__int64 **)v7 )
      goto LABEL_18;
    v9 = *v8;
    if ( (*v8)[1] != (__int64 *)v8 )
      goto LABEL_18;
    *v7 = (__int64 ***)v9;
    v9[1] = (__int64 *)v7;
    v10 = v18;
    if ( *v18 != (__int64 *)&v17 )
      goto LABEL_18;
    v8[1] = v18;
    *v8 = &v17;
    *v10 = v8;
    v18 = (__int64 **)v8;
  }
  (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(a1 + 24),
    0LL);
  v11 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 36) = 4;
  DynamicLock_Release(v11);
  while ( 1 )
  {
    v13 = v17;
    if ( v17 == (__int64 *)&v17 )
      return Command_Initialize(a1);
    if ( (__int64 **)v17[1] != &v17 )
      goto LABEL_18;
    v14 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_18;
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 16),
      v12,
      7,
      59,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      (char)v13,
      (unsigned __int8)HIBYTE(*((_WORD *)v13 + 18)) >> 2);
    Etw_CommandCompleteError(v15, a1, v13, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v13[5])(v13, 3LL);
  }
}
