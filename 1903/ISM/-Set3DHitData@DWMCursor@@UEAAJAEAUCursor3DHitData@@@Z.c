/*
 * XREFs of ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180144B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18001FD14 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18007C3B0 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 */

__int64 __fastcall DWMCursor::Set3DHitData(DWMCursor *this, struct Cursor3DHitData *a2)
{
  RTL_SRWLOCK *Instance; // rax
  const char *v5; // r9
  _OWORD *v6; // rbx
  RTL_SRWLOCK *v7; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( !MPC3DStateHelper::Is3DCompositorRunning(Instance) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      350LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      v5);
    __debugbreak();
  }
  v6 = (_OWORD *)((char *)this + 168);
  *v6 = *(_OWORD *)a2;
  v6[1] = *((_OWORD *)a2 + 1);
  v6[2] = *((_OWORD *)a2 + 2);
  v6[3] = *((_OWORD *)a2 + 3);
  v6[4] = *((_OWORD *)a2 + 4);
  v6[5] = *((_OWORD *)a2 + 5);
  v6[6] = *((_OWORD *)a2 + 6);
  v6[7] = *((_OWORD *)a2 + 7);
  v6[8] = *((_OWORD *)a2 + 8);
  v6[9] = *((_OWORD *)a2 + 9);
  v6[10] = *((_OWORD *)a2 + 10);
  v7 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v7);
  return (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _OWORD *))(*(_QWORD *)PostProcessor + 48LL))(
           PostProcessor,
           v6);
}
