/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400111C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140010398 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140034A34 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x14003DE0C (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance **v3; // r15
  const struct CPipeInstance *v7; // rsi
  CPipeInstance *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  CStreamInstance *v12; // rbx
  int v13; // eax
  _QWORD *Next; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct CPipeInstance **)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
    goto LABEL_2;
  v9 = CFormatConverterPipe::ConnectToRightSubmix(
         (CSubmixImpl *)((char *)this + 272),
         a2,
         a3,
         *((_DWORD *)this + 64) == 2);
  if ( v9 < 0 )
  {
    v15 = 809LL;
    goto LABEL_21;
  }
  v7 = *v3;
  if ( !*v3 )
LABEL_2:
    v7 = a3;
  v8 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( !v8 )
    goto LABEL_7;
  if ( v7 )
  {
    v9 = CPipeInstance::ConnectToRightPipe(v8, v7);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
             a2,
             *((_QWORD *)this + 3));
      if ( v9 >= 0 )
        goto LABEL_6;
      v15 = 827LL;
    }
    else
    {
      v15 = 824LL;
    }
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9,
      v17);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, *((_QWORD *)this + 3));
  if ( v9 < 0 )
  {
    v15 = 832LL;
    goto LABEL_21;
  }
LABEL_6:
  *((_BYTE *)this + 312) = 1;
LABEL_7:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v19 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v19 )
  {
    while ( 1 )
    {
      v12 = (CStreamInstance *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v10, &v19);
      (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
      v13 = CStreamInstance::ConnectToRightSubmix(v12, a2, v7);
      v9 = v13;
      if ( v13 < 0 )
        break;
      if ( !v19 )
        goto LABEL_8;
    }
    v16 = 845LL;
    goto LABEL_31;
  }
LABEL_8:
  v19 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v19 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v10, &v19);
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *, const struct CPipeInstance *))(**(_QWORD **)*Next + 144LL))(
              *(_QWORD *)*Next,
              a2,
              v7);
      v9 = v13;
      if ( v13 < 0 )
        break;
      if ( !v19 )
        goto LABEL_9;
    }
    v16 = 853LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v13,
      v17);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    return (unsigned int)v9;
  }
LABEL_9:
  if ( this != (CSubmixImpl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return 0LL;
}
