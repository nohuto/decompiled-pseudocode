/*
 * XREFs of ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18002CAD8
 * Callers:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002BF20 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180043B64 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18002CBF8 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnSizeChanged(CSplashScreen *this, const struct tagRECT *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int128 v5; // xmm6
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h]

  *((float *)this + 34) = (float)(a2->bottom - a2->top);
  *((float *)this + 33) = (float)(a2->right - a2->left);
  CSplashScreen::_get_ImageLocationInternal(this, &v8);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v3 != v4 )
  {
    v5 = v8;
    do
    {
      v6 = *v3;
      v10 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v9 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 40LL))(
             v6,
             &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
             &v9) >= 0 )
      {
        v8 = v5;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v8);
      }
      v7 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v3;
    }
    while ( v3 != v4 );
  }
}
