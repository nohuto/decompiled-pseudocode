/*
 * XREFs of ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x1801444A8
 * Callers:
 *     _lambda_9b9f0c840769002edef58b55115a0dea_::operator() @ 0x1801434A8 (_lambda_9b9f0c840769002edef58b55115a0dea_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x1800195E8 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedOrientationAnimationData@DWMCursor@@AEAAJXZ @ 0x180144824 (-FeedOrientationAnimationData@DWMCursor@@AEAAJXZ.c)
 *     ?FeedPositionAnimationData@DWMCursor@@AEAAJXZ @ 0x180144930 (-FeedPositionAnimationData@DWMCursor@@AEAAJXZ.c)
 */

__int64 __fastcall DWMCursor::CreateAnimationForProcess(
        DWMCursor *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD); // rcx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v21)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  char v22; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v9 = (char *)(*(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
                 AnimationDataProvider,
                 &v21,
                 a2);
  v10 = 0LL;
  if ( &v22 != v9 )
  {
    v10 = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
  }
  v11 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*v12)[1](v12);
  }
  if ( *((_QWORD *)this + 10) )
  {
    v14 = DWMCursor::FeedPositionAnimationData(this);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        194LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v14);
    v15 = DWMCursor::FeedOrientationAnimationData(this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        195LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    v17 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
    *a3 = v16;
    v18 = *(_QWORD *)AnimationDataProvider;
    v21 = v17;
    v19 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(v18 + 40);
    if ( v17 )
      (**v17)(v17);
    *a4 = v19(AnimationDataProvider, &v21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
