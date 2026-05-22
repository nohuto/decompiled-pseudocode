/*
 * XREFs of ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801051FC
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CD2A0 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z @ 0x180105104 (-SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x18010517C (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::OnInputReport(
        SessionBasedPointerDeviceArbitration *this,
        struct InputInfo *a2)
{
  char v4; // si
  char v5; // r14
  __int64 v6; // r10
  int *v7; // r9
  int v8; // r8d
  char v9; // cl
  char v10; // cl
  int v11; // edx
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  char v14; // al
  int IsNonPrimaryDeviceInActiveSession; // ebp
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_BYTE *)a2 & 0x3B) != 0 )
  {
    v4 = 0;
    v5 = 0;
    if ( !*((_BYTE *)a2 + 516) && *((_DWORD *)a2 + 12) )
    {
      v6 = *((unsigned int *)a2 + 12);
      v7 = (int *)((char *)a2 + 60);
      do
      {
        v8 = *v7;
        v9 = v4 + 1;
        v7 += 8;
        if ( (v8 & 2) == 0 )
          v9 = v4;
        v4 = v9;
        v10 = v5 + 1;
        if ( (v8 & 1) == 0 )
          v10 = v5;
        v5 = v10;
        --v6;
      }
      while ( v6 );
    }
    v11 = *((_DWORD *)a2 + 1);
    if ( v11 == *((_DWORD *)this + 26) )
      goto LABEL_19;
    v12 = 0;
    v13 = (_DWORD *)((char *)this + 24);
    while ( *v13 != v11 )
    {
      ++v12;
      ++v13;
      if ( v12 >= 0x14 )
      {
        v14 = 0;
        goto LABEL_16;
      }
    }
    v14 = 1;
LABEL_16:
    if ( !*((_BYTE *)this + 108) && !v14 )
    {
      *((_DWORD *)this + 26) = v11;
      goto LABEL_19;
    }
    if ( v4 )
    {
      if ( !v14 )
      {
        if ( *((_BYTE *)this + 109) )
        {
          IsNonPrimaryDeviceInActiveSession = SessionBasedPointerDeviceArbitration::EndCurrentSession(this, 0);
          if ( IsNonPrimaryDeviceInActiveSession < 0 )
          {
            v16 = 184LL;
LABEL_27:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v16,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\arbitration\\sessionbased\\lib\\sessionbasedp"
                       "ointerdevicearbitration.cpp",
              (const char *)(unsigned int)IsNonPrimaryDeviceInActiveSession);
            return (unsigned int)IsNonPrimaryDeviceInActiveSession;
          }
          *((_DWORD *)this + 26) = *((_DWORD *)a2 + 1);
        }
        else
        {
          IsNonPrimaryDeviceInActiveSession = SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(
                                                this,
                                                v11,
                                                1);
          if ( IsNonPrimaryDeviceInActiveSession < 0 )
          {
            v16 = 195LL;
            goto LABEL_27;
          }
        }
      }
    }
    else if ( v14 )
    {
      IsNonPrimaryDeviceInActiveSession = SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(
                                            this,
                                            v11,
                                            0);
      if ( IsNonPrimaryDeviceInActiveSession < 0 )
      {
        v16 = 206LL;
        goto LABEL_27;
      }
    }
LABEL_19:
    if ( *((_DWORD *)a2 + 1) == *((_DWORD *)this + 26) )
    {
      if ( v4 )
      {
        *((_WORD *)this + 54) = 1;
      }
      else if ( v5 )
      {
        *((_WORD *)this + 54) = 257;
      }
      else
      {
        *((_WORD *)this + 54) = 0;
      }
      (*(void (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), a2);
    }
  }
  return 0LL;
}
