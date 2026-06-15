/*
 * XREFs of ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x14003DE0C
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400111C0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140034A34 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CFormatConverterPipe::ConnectToRightSubmix(
        CPipeInstance **this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3,
        char a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  CPipeInstance *v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = CPipeInstance::ConnectToRightPipe(*this, a3);
    if ( v6 < 0 )
    {
      v7 = 290LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, CPipeInstance *))(*(_QWORD *)a2 + 40LL))(a2, *this);
    if ( v6 < 0 )
    {
      v7 = 293LL;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = *(_QWORD *)a2;
    v10 = *this;
    if ( a4 )
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, CPipeInstance *))(v9 + 32))(a2, v10);
    else
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, CPipeInstance *))(v9 + 24))(a2, v10);
    v6 = v11;
    if ( v11 < 0 )
    {
      v7 = 298LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 24) = 1;
  return 0LL;
}
