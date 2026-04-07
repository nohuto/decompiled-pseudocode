/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z @ 0x1800835F4
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x180083A00 (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083AE0 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
        CProjectionBorderManager *this,
        unsigned int a2,
        int a3,
        int a4)
{
  int v8; // eax
  unsigned int *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  CBaseObject *v13; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v14[2]; // [rsp+28h] [rbp-70h] BYREF
  double v15; // [rsp+48h] [rbp-50h]
  double v16; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13 = 0LL;
  v8 = CResource::Create(0x15u, *((_QWORD *)this + 54), &v13);
  v9 = (unsigned int *)v13;
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 1031LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  v14[0] = _xmm;
  v14[1] = _xmm;
  v15 = (double)a3;
  v16 = (double)a4;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**((_QWORD **)v13 + 2) + 1160LL))(
         *((_QWORD *)v13 + 2),
         *((unsigned int *)v13 + 6),
         v14);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 1043LL;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 1264LL))(
         *((_QWORD *)this + 54),
         a2,
         v9[6]);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 1047LL;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_9:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
  return v10;
}
