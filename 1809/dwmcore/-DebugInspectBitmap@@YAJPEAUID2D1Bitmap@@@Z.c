/*
 * XREFs of ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1801E10DC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall DebugInspectBitmap(__int64 (__fastcall ***a1)(struct ID2D1Bitmap *, GUID *, __int64 *))
{
  __int64 (__fastcall **v1)(struct ID2D1Bitmap *, GUID *, __int64 *); // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct ID3D11Texture2D *v9; // [rsp+30h] [rbp+10h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+38h] [rbp+18h] BYREF
  __int64 v11; // [rsp+40h] [rbp+20h] BYREF

  v1 = *a1;
  v11 = 0LL;
  v2 = (*v1)((struct ID2D1Bitmap *)a1, &GUID_a898a84c_3873_4588_b08b_ebbf978df041, &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v11 + 104LL))(
           v11,
           &v10);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v4);
LABEL_12:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v10);
      goto LABEL_13;
    }
    v9 = 0LL;
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v9);
    v5 = (**v10)(v10, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v9);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v5 = DebugInspectTexture(v9, 0);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v6 = 173LL;
    }
    else
    {
      v6 = 171LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v5);
LABEL_11:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v9);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v2);
LABEL_13:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
  return v3;
}
