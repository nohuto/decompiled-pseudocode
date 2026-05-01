/*
 * XREFs of ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18032B7D0
 * Callers:
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180321444 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18032ADE8 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18032C6F0 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x18032CA38 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18032DAC0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted(
        RTL_SRWLOCK *this,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _DWORD *v9; // r14
  RTL_SRWLOCK *v10; // r13
  __int64 v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *Ptr; // r8
  char *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rax
  HMONITOR CurrentMonitor; // rax
  HMONITOR v21; // rdi
  KeyboardHosting::MonitorInformation *v22; // rcx
  KeyboardHosting::MonitorInformation *v23; // rcx
  int PositionAndSizeOptions; // eax
  unsigned int v25; // edi
  __int64 v26; // rdx
  char v27; // r14
  char v28; // si
  __int128 v30; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v34; // [rsp+B8h] [rbp+48h] BYREF

  v34 = a2;
  *a4 = 0LL;
  v9 = a5;
  *a5 = 0;
  v10 = this + 53;
  AcquireSRWLockShared(this + 53);
  v11 = 0xCBF29CE484222325uLL;
  v12 = &v34;
  v13 = 4LL;
  do
  {
    v11 = 0x100000001B3LL * (*(unsigned __int8 *)v12 ^ (unsigned __int64)v11);
    v12 = (unsigned int *)((char *)v12 + 1);
    --v13;
  }
  while ( v13 );
  Ptr = this[48].Ptr;
  v14 = v11 & (__int64)this[51].Ptr;
  v16 = (char *)Ptr[2 * v14];
  v17 = 2 * v14;
  v18 = (__int64)this[46].Ptr;
  while ( 1 )
  {
    v19 = Ptr[v17] == v18 ? (char *)this[46].Ptr : *(char **)Ptr[v17 + 1];
    if ( v16 == v19 )
      break;
    if ( *((_DWORD *)v16 + 4) == a2 )
      goto LABEL_11;
    v16 = *(char **)v16;
  }
  v16 = (char *)this[46].Ptr;
LABEL_11:
  if ( v16 == (char *)v18 )
    goto LABEL_35;
  v31 = *(_OWORD *)(v16 + 20);
  v32 = *(_OWORD *)(v16 + 36);
  v30 = *(_OWORD *)a3;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v18, &v30);
  v21 = CurrentMonitor;
  v22 = (KeyboardHosting::MonitorInformation *)&this[27];
  if ( this[27].Ptr != CurrentMonitor )
  {
    *(_QWORD *)v22 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v22);
  }
  if ( BYTE4(this[60].Ptr) )
  {
    v23 = (KeyboardHosting::MonitorInformation *)&this[33];
    if ( this[33].Ptr != v21 )
    {
      *(_QWORD *)v23 = v21;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v23);
    }
  }
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                             (KeyboardHosting::TabTipAdapterPolicy *)this,
                             a4);
  v25 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions < 0 )
  {
    v26 = 203LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    goto LABEL_36;
  }
  *v9 = 3;
  v27 = BYTE13(v32);
  v28 = BYTE12(v32);
  if ( (a2 & 0xFFFFFFFA) == 0 && a2 != 1 && DWORD1(v31) == 1 )
  {
    if ( ((DWORD2(v32) - 1) & 0xFFFFFFF6) != 0 || DWORD2(v32) == 9 || !WORD6(v32) )
      goto LABEL_34;
    a5 = *(_DWORD **)a3;
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                               (KeyboardHosting::TabTipAdapterPolicy *)this,
                               (const struct Windows::Foundation::Point *)&a5,
                               a2);
    v25 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      v26 = 216LL;
      goto LABEL_27;
    }
    if ( !BYTE4(this[60].Ptr) )
      goto LABEL_34;
    KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
      (KeyboardHosting::TabTipAdapterPolicy *)this,
      (const struct Windows::Foundation::Point *)&a5);
  }
  if ( DWORD1(v31) == 2 && (v28 || v27) )
  {
    HIDWORD(this[54].Ptr) = *(_DWORD *)a3;
    LODWORD(this[55].Ptr) = *(_DWORD *)(a3 + 4);
    BYTE4(this[55].Ptr) = 1;
    LODWORD(this[60].Ptr) = a2;
  }
LABEL_34:
  LOBYTE(this[54].Ptr) = 1;
LABEL_35:
  v25 = 0;
LABEL_36:
  if ( v10 )
    ReleaseSRWLockShared(v10);
  return v25;
}
