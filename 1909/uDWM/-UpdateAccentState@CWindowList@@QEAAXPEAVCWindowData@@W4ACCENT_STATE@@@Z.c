/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180023298
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180019230 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002319C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     wistd::__function::__func__lambda_1b9da9ded00159f51f4465bab3a3fb36__void___cdecl(int_const_&)_::operator() @ 0x18004D790 (wistd--__function--__func__lambda_1b9da9ded00159f51f4465bab3a3fb36__void___cdecl(in_ea_18004D790.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BB00 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

char __fastcall CWindowList::UpdateAccentState(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  unsigned int v4; // edi
  __int64 v8; // rdx
  struct CWindowData *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  CAccentBlurBehind *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 560) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 536);
      LOBYTE(v3) = 2 * v4;
      if ( *(_DWORD *)(v8 + 16LL * v4 + 8) != a3 )
        goto LABEL_3;
      v9 = *(struct CWindowData **)(v8 + 16LL * v4);
      v10 = *((_QWORD *)v9 + 50);
      if ( !v10 )
        goto LABEL_3;
      if ( a2 )
      {
        v3 = *(_UNKNOWN ***)(a2 + 120);
        if ( *((_UNKNOWN ***)v9 + 15) != v3 )
          goto LABEL_3;
      }
      v11 = *(_QWORD *)(v10 + 264);
      if ( !v11 )
        goto LABEL_3;
      if ( a3 == 3 )
        break;
      LOBYTE(v3) = a3 - 4;
      if ( (unsigned int)(a3 - 4) <= 1 )
      {
        v12 = 4096LL;
LABEL_11:
        LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v12);
      }
LABEL_3:
      if ( ++v4 >= *(_DWORD *)(a1 + 560) )
        return (char)v3;
    }
    v13 = *(CAccentBlurBehind **)(v11 + 336);
    if ( !v13 )
      goto LABEL_3;
    if ( *((_QWORD *)v9 + 5) != *(_QWORD *)(v11 + 400) )
    {
      LOBYTE(v3) = CAccentBlurBehind::IsBlurBehindDirty(
                     v13,
                     v9,
                     (const struct tagRECT *)(v11 + 616),
                     *(_QWORD *)(v11 + 408),
                     *(HWND *)(v11 + 400));
      if ( !(_BYTE)v3 )
        goto LABEL_3;
    }
    v12 = 0x10000LL;
    goto LABEL_11;
  }
  return (char)v3;
}
