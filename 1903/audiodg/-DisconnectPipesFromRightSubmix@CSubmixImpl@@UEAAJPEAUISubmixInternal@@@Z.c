/*
 * XREFs of ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x14003E030 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectPipesFromRightSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CStreamInstance *v5; // rcx
  _QWORD *Next; // rax
  int v7; // eax
  unsigned int v8; // esi
  CStreamInstance **v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v16 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)v5, &v16);
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *))(**(_QWORD **)*Next + 152LL))(
             *(_QWORD *)*Next,
             a2);
      v8 = v7;
      if ( v7 < 0 )
        break;
      if ( !v16 )
        goto LABEL_4;
    }
    v13 = 957LL;
    goto LABEL_17;
  }
LABEL_4:
  v16 = (_QWORD *)*((_QWORD *)this + 9);
  if ( !v16 )
  {
LABEL_8:
    if ( v2 )
      LeaveCriticalSection(v2);
    if ( *((_QWORD *)this + 3) && *((_BYTE *)this + 312) )
    {
      v10 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2);
      if ( v10 < 0 )
      {
        v11 = 975LL;
        goto LABEL_14;
      }
      *((_BYTE *)this + 312) = 0;
    }
    if ( *((_QWORD *)this + 34)
      && *((_BYTE *)this + 296)
      && (v14 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2), v10 = v14, v14 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v14);
    }
    else
    {
      *((_BYTE *)this + 296) = 0;
      v10 = 0;
    }
    if ( v10 >= 0 )
      return 0LL;
    v11 = 980LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  while ( 1 )
  {
    v9 = (CStreamInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                               (__int64)v5,
                               &v16);
    v5 = *v9;
    if ( *((_BYTE *)*v9 + 17) )
    {
      v7 = CStreamInstance::DisconnectFromRightSubmix(v5, a2);
      v8 = v7;
      if ( v7 < 0 )
        break;
    }
    if ( !v16 )
      goto LABEL_8;
  }
  v13 = 967LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v7);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v8;
}
