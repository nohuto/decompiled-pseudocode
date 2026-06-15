/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140012550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004644 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140012698 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140039E20 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x14004159C (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance *v6; // rsi
  CPipeInstance *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  CStreamInstance *v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // edi
  _QWORD *Next; // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v26; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 34) )
    goto LABEL_2;
  v17 = CFormatConverterPipe::ConnectToRightSubmix(
          (CSubmixImpl *)((char *)this + 272),
          a2,
          a3,
          *((_DWORD *)this + 64) == 2);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x324,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v17,
      v24);
    return v18;
  }
  v6 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
  if ( !v6 )
  {
LABEL_2:
    v6 = 0LL;
    if ( a3 )
      v6 = a3;
  }
  v7 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( v6 )
    {
      v19 = CPipeInstance::ConnectToRightPipe(v7, v6);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x333,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v19,
          v24);
        return v20;
      }
      v21 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
              a2,
              *((_QWORD *)this + 3));
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x336,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v21,
          v24);
        return v22;
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             *((_QWORD *)this + 3));
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v8,
          v24);
        return v9;
      }
    }
    *((_BYTE *)this + 312) = 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v26 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v26 )
  {
    while ( 1 )
    {
      v12 = (CStreamInstance *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v10, &v26);
      (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
      v14 = CStreamInstance::ConnectToRightSubmix(v12, a2, v6, v13);
      v15 = v14;
      if ( v14 < 0 )
        break;
      if ( !v26 )
        goto LABEL_9;
    }
    v23 = 840LL;
  }
  else
  {
LABEL_9:
    v26 = (_QWORD *)*((_QWORD *)this + 15);
    if ( !v26 )
    {
LABEL_10:
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      return 0LL;
    }
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v10, &v26);
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *, const struct CPipeInstance *))(**(_QWORD **)*Next + 144LL))(
              *(_QWORD *)*Next,
              a2,
              v6);
      v15 = v14;
      if ( v14 < 0 )
        break;
      if ( !v26 )
        goto LABEL_10;
    }
    v23 = 848LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v14,
    v24);
  if ( this != (CSubmixImpl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return v15;
}
