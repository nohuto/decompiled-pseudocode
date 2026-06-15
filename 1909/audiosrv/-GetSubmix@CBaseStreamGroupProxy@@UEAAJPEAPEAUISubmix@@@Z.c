/*
 * XREFs of ?GetSubmix@CBaseStreamGroupProxy@@UEAAJPEAPEAUISubmix@@@Z @ 0x1800EF160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetSubmix(CBaseStreamGroupProxy *this, struct ISubmix **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct ISubmix *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmix *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
         *((_QWORD *)this + 10),
         &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a,
         (__int64 *)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v9 + 8LL))(v9);
      v6 = v9;
    }
    *a2 = v6;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x330,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
  return v5;
}
