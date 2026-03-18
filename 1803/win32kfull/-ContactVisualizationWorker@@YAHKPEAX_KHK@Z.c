/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01A74D4
 * Callers:
 *     EditionContactVisualization @ 0x1C01A8240 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00C2030 (IsCurrentDesktopComposed.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A78D0 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01A7A84 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01A7B30 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01A7D50 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01A7F98 (-SwitchMouseCursors@@YAXHHH@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01A82B0 (FeedbackGetWindowSetting.c)
 *     _GetPointerDeviceType @ 0x1C01B8190 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C02416B4 (DwmAsyncSendTouchContacts.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, char *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r15
  char *v8; // rsi
  __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // rdi
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  char *v16; // rbx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // esi
  int v23; // r14d
  int v24; // r15d
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r14
  BOOL v30; // esi
  _BOOL8 v31; // rdx
  Feedback *v32; // rbx
  int v33; // eax
  __int64 i; // rsi
  int v35; // r14d
  void *v36; // rax
  struct tagDIGITIZER_CONTACT_INFO *v38; // [rsp+30h] [rbp-49h]
  unsigned int v39; // [rsp+38h] [rbp-41h]
  int v40; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v41; // [rsp+40h] [rbp-39h] BYREF
  int v42; // [rsp+44h] [rbp-35h]
  __int64 v43; // [rsp+48h] [rbp-31h]
  int v44; // [rsp+50h] [rbp-29h]
  _DWORD v45[4]; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v46[4]; // [rsp+68h] [rbp-11h] BYREF
  Feedback *v47; // [rsp+78h] [rbp-1h]
  int v48; // [rsp+D8h] [rbp+5Fh] BYREF
  char *v49; // [rsp+E0h] [rbp+67h]
  __int64 v50; // [rsp+E8h] [rbp+6Fh]
  int v51; // [rsp+F0h] [rbp+77h]

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  v44 = 0;
  v43 = 0LL;
  v8 = a2;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v42 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
  {
    v7 = Win32AllocPool(40 * v5, 1987081045LL);
    v43 = v7;
  }
  v13 = 0;
  v39 = 0;
  if ( (_DWORD)v5 )
  {
    v14 = v50;
    do
    {
      v41 = 0;
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              gpTouchProcessor,
                                              v8,
                                              &v41);
      v47 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v16 = (char *)ContactVisualizationPointerEventInt + 8;
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( *(_DWORD *)v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v16 + 2)) == 1 )
          {
            v17 = *((_DWORD *)v16 + 3);
            Feedback::gfIntegratedPenActive = (v17 >> 1) & 1;
            if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v17 & 0x10001) != 0 )
            {
              SwitchMouseCursors(1, 0, 0);
              v17 = *((_DWORD *)v16 + 3);
            }
            v45[1] = *((_DWORD *)v16 + 8);
            v18 = *((_DWORD *)v16 + 9);
            v45[0] = v17;
            v45[2] = v18;
            DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v16, (const struct tagPOINTERCURSORDATA *)v45);
          }
          else if ( !Feedback::gfIntegratedPenActive && (*((_DWORD *)v16 + 3) & 0x2000) != 0 )
          {
            v46[0] = *((_DWORD *)v16 + 3);
            v19 = 0;
            v46[1] = *((_DWORD *)v16 + 8);
            v46[2] = *((_DWORD *)v16 + 9);
            if ( (unsigned int)(*(_DWORD *)v16 - 2) <= 1 )
            {
              v20 = *((_QWORD *)v16 + 3);
              if ( v20 )
              {
                v21 = ValidateHwnd(v20);
                if ( v21 )
                {
                  if ( (unsigned int)FeedbackGetWindowSetting(v21, 13LL, 1LL, &v48) )
                    v19 = v48;
                }
              }
            }
            if ( (*((_DWORD *)v16 + 3) & 0x10001) != 0 )
            {
              v22 = 0;
              v23 = 0;
              v24 = v19;
              if ( *(_DWORD *)v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v16 + 2)) == 2 )
                v24 = 1;
              if ( !v24 )
              {
                v25 = *(_DWORD *)UPDWORDPointer(8216LL);
                if ( *(_DWORD *)v16 == 2 )
                {
                  v26 = *((_QWORD *)v16 + 3);
                  if ( v26 )
                  {
                    v27 = ValidateHwnd(v26);
                    if ( v27 )
                    {
                      if ( (unsigned int)FeedbackGetWindowSetting(v27, 12LL, 1LL, &v48) )
                        v22 = v48;
                    }
                  }
                }
                if ( *(_DWORD *)v16 == 3 || !v25 || !(unsigned int)IsCurrentDesktopComposed() || v22 )
                {
                  v22 = 1;
                  v23 = 0;
                }
                else
                {
                  v23 = 1;
                }
              }
              SwitchMouseCursors(v22, v23, v24);
              v8 = v49;
              v10 = v42;
            }
            if ( !v19 )
              DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v16, (const struct tagPOINTERCURSORDATA *)v46);
            v13 = v39;
          }
          if ( a5 == 3
            || (v40 = 0, *(_DWORD *)v16 == 2)
            && !(unsigned int)Feedback::GetWindowVisualizationSetting(
                                (Feedback *)v16,
                                (const struct tagPOINTER_INFO *)(v10 == 0),
                                a5 == 2,
                                v10 == 2,
                                (__int64)&v40,
                                (int *)v38)
            && !v40 )
          {
            v7 = v43;
          }
          else
          {
            v7 = v43;
            if ( v43 )
            {
              v28 = 5LL * v13++;
              v29 = v43 + 8 * v28;
              v30 = 1;
              v39 = v13;
              if ( *(_DWORD *)v16 == 3 )
                v30 = Feedback::GetWindowBarrelVisualizationSetting(
                        (Feedback *)v16,
                        (const struct tagPOINTER_INFO *)(v41 != 0),
                        v12) != 0;
              v31 = v51 && a5 == 2;
              v32 = v47;
              Feedback::PointerEventIntToDigitizerContactInfo(
                v47,
                (const struct tagPOINTEREVENTINT *)v31,
                v30,
                v40,
                v29,
                v38);
              v33 = *((_DWORD *)v32 + 5);
              if ( (v33 & 0x10000) != 0 )
              {
                EtwTraceContactVisualizationDown();
              }
              else if ( (v33 & 0x40000) != 0 )
              {
                EtwTraceContactVisualizationUp();
              }
              v8 = v49;
            }
          }
        }
      }
      v10 = v42;
      v8 += v14;
      v49 = v8;
      --v9;
    }
    while ( v9 );
    v6 = v44;
  }
  if ( v7 )
  {
    for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(v35 + i) )
    {
      v35 = v13 - i;
      if ( v13 - (unsigned int)i > 0xB )
        v35 = 11;
      v36 = (void *)ReferenceDwmApiPort(5 * i, v11, v12);
      v6 = DwmAsyncSendTouchContacts(v36);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v7);
  }
  return v6 >= 0;
}
