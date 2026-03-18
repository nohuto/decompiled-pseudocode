/*
 * XREFs of NtUserCallNextHookEx @ 0x1C014A020
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00B5C2C (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C014A0EC (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C0211350 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C02113A0 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C0211634 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C02116F4 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C0211770 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C02117D4 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C021184C (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C02118BC (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  struct tagRECT *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx

  EnterCrit(0LL, 1LL);
  v12 = 0LL;
  v13 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( v13 )
  {
    v9 = *(unsigned int *)(v13 + 48);
    if ( (int)v9 > 7 )
    {
      v19 = v9 - 9;
      if ( !v19 )
      {
        v14 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_6;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v9 = (unsigned int)(v21 - 2);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 != 1 )
              goto LABEL_7;
            v14 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
          }
          else
          {
            v14 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
          }
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      v16 = (struct tagRECT *)a3;
      v17 = a2;
      if ( a1 != 5 )
      {
LABEL_11:
        v14 = xxxCallNextHookEx();
        goto LABEL_6;
      }
      v18 = 5;
    }
    else
    {
      if ( (_DWORD)v9 == 7 )
        goto LABEL_20;
      if ( (_DWORD)v9 == -1 )
      {
LABEL_5:
        v14 = NtUserfnHkINLPMSG(v9, a1, a2, a3);
LABEL_6:
        v12 = v14;
        goto LABEL_7;
      }
      if ( (int)v9 < 0 )
        goto LABEL_7;
      if ( (int)v9 <= 1 )
      {
        v14 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
        goto LABEL_6;
      }
      if ( (_DWORD)v9 == 2 )
        goto LABEL_11;
      if ( (_DWORD)v9 == 3 )
        goto LABEL_5;
      if ( (_DWORD)v9 != 5 )
      {
        if ( (_DWORD)v9 != 6 )
          goto LABEL_7;
        goto LABEL_5;
      }
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v14 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_6;
        }
        if ( a1 == 5 )
        {
          v14 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_6;
        }
        if ( a1 != 6 )
          goto LABEL_11;
LABEL_20:
        v14 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_6;
      }
      v16 = (struct tagRECT *)a3;
      v17 = a2;
      v18 = 0;
    }
    v14 = NtUserfnHkINLPRECT(v18, v17, v16);
    goto LABEL_6;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
