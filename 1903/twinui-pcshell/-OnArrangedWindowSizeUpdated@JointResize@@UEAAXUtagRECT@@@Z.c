/*
 * XREFs of ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1803D0960
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1803CF758 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1803CFB08 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x1803D15E8 (-UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z.c)
 *     ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x1803D1718 (-UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeUpdated(JointResize *this, struct tagRECT *a2)
{
  struct tagRECT v4; // xmm0
  JointResize *v5; // rsi
  LONG v6; // edx
  LONG v7; // eax
  unsigned __int64 left; // rcx
  LONG v9; // r8d
  LONG v10; // edx
  LONG top; // eax
  __int64 (__fastcall ***v12)(ApplicationViewHelpers *, GUID *, __int64 *); // r8
  struct tagRECT *v13; // rax
  struct tagRECT v14; // xmm0
  int updated; // eax
  struct tagPOINT *v16; // rax
  JointResize *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  struct tagRECT v21; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct tagRECT v24; // [rsp+50h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 136) && *((_QWORD *)this + 11) )
  {
    v4 = *a2;
    v5 = (JointResize *)((char *)this - 88);
    v21 = *a2;
    JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v24, &v21.left);
    v6 = *((_DWORD *)this + 44);
    v7 = v6;
    left = (unsigned int)v24.left;
    v9 = *((_DWORD *)this + 46);
    if ( v24.left > v6 )
      v7 = v24.left;
    if ( v7 >= v9 )
    {
      left = (unsigned int)v9;
      v24.left = *((_DWORD *)this + 46);
    }
    else if ( v24.left <= v6 )
    {
      left = (unsigned int)v6;
      v24.left = *((_DWORD *)this + 44);
    }
    v10 = *((_DWORD *)this + 45);
    top = v10;
    if ( v24.top > v10 )
      top = v24.top;
    if ( top >= *((_DWORD *)this + 47) )
    {
      v24.top = *((_DWORD *)this + 47);
    }
    else if ( v24.top <= v10 )
    {
      v24.top = *((_DWORD *)this + 45);
    }
    if ( (_DWORD)left != *((_DWORD *)this + 48) )
    {
      v12 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 13);
      *((_QWORD *)this + 24) = *(_QWORD *)&v24.left;
      v21 = v4;
      v13 = JointResize::ComputeExtendedViewRect((JointResize *)left, &v22, v12, &v21);
      v14 = *v13;
      *a2 = *v13;
      v21 = v14;
      updated = JointResize::UpdateDropFeedback(v5, &v21);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13F,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)updated);
      v21 = *a2;
      v16 = (struct tagPOINT *)JointResize::CalculatePointFromRect(v5, &v24, &v21.left);
      JointResize::UpdateGhostDivider(v17, *v16);
      if ( !*((_BYTE *)this + 336) )
      {
        v18 = *((_QWORD *)this + 16);
        v19 = *((_QWORD *)this + 14);
        v20 = *((_QWORD *)this + 13);
        *((_BYTE *)this + 336) = 1;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v20, v19);
      }
    }
  }
}
