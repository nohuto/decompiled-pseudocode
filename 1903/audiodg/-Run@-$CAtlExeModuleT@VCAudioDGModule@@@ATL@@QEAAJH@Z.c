/*
 * XREFs of ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B858
 * Callers:
 *     WinMain @ 0x14002C17C (WinMain.c)
 * Callees:
 *     _lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator() @ 0x140029EA8 (_lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_--operator().c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002AED0 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002B8C4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14002BAD8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::Run(CAudioDGModule *this, int a2)
{
  int v3; // eax
  void *v4; // rdx
  wil::details *v5; // rcx
  int v6; // ebx
  bool v7; // sf
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v9[0] = this;
  v10 = a2;
  v9[1] = &v10;
  v3 = lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator()(v9);
  v5 = (wil::details *)*((_QWORD *)this + 16);
  *((_DWORD *)this + 28) = v3;
  if ( v5 )
    wil::details::SetEvent(v5, v4);
  v6 = *((_DWORD *)this + 28);
  v7 = v6 < 0;
  if ( !v6 )
  {
    CAudioDGModule::RunMessageLoop(this);
    v7 = 0;
  }
  if ( !v7 )
    return (unsigned int)CAudioDGModule::PostMessageLoop(this);
  return (unsigned int)v6;
}
