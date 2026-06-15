/*
 * XREFs of ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140017C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004644 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140013028 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectPipesFromRightSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CStreamInstance *v5; // rcx
  int v6; // edi
  _QWORD *Next; // rax
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  CStreamInstance **v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v17 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)v5, &v17);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *))(**(_QWORD **)*Next + 152LL))(
             *(_QWORD *)*Next,
             a2);
      v10 = v9;
      if ( v9 < 0 )
        break;
      if ( !v17 )
        goto LABEL_2;
    }
    v11 = 952LL;
  }
  else
  {
LABEL_2:
    v17 = (_QWORD *)*((_QWORD *)this + 9);
    if ( !v17 )
    {
LABEL_3:
      if ( v2 )
        LeaveCriticalSection(v2);
      if ( *((_QWORD *)this + 3) && *((_BYTE *)this + 312) )
      {
        v6 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2);
        if ( v6 < 0 )
        {
          v13 = 970LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v6,
            v15);
          return (unsigned int)v6;
        }
        *((_BYTE *)this + 312) = 0;
      }
      if ( *((_QWORD *)this + 34)
        && *((_BYTE *)this + 296)
        && (v14 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2), v6 = v14, v14 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x134,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v14,
          v15);
      }
      else
      {
        *((_BYTE *)this + 296) = 0;
        v6 = 0;
      }
      if ( v6 >= 0 )
        return 0LL;
      v13 = 975LL;
      goto LABEL_27;
    }
    while ( 1 )
    {
      v12 = (CStreamInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                  (__int64)v5,
                                  &v17);
      v5 = *v12;
      if ( *((_BYTE *)*v12 + 17) )
      {
        v9 = CStreamInstance::DisconnectFromRightSubmix(v5, a2);
        v10 = v9;
        if ( v9 < 0 )
          break;
      }
      if ( !v17 )
        goto LABEL_3;
    }
    v11 = 962LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v9,
    v15);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v10;
}
