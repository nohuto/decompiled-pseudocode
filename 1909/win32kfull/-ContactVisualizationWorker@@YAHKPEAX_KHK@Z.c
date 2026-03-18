/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01DCF2C
 * Callers:
 *     EditionContactVisualization @ 0x1C01DDC50 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018C40 (IsCurrentDesktopComposed.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD32C (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DD4D0 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DD590 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01DD72C (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01DD9F0 (-SwitchMouseCursors@@YAXK_N@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01DDCCC (FeedbackGetWindowSetting.c)
 *     _GetPointerDeviceType @ 0x1C01F0298 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C0272300 (DwmAsyncSendTouchContacts.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, char *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // edi
  char *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // rdi
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  char *v16; // rbx
  int PointerDeviceType; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // r14
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r14
  BOOL v30; // esi
  _BOOL8 v31; // rdx
  Feedback *v32; // rbx
  int v33; // eax
  __int64 i; // rsi
  int v35; // r14d
  void *v36; // rax
  struct tagDIGITIZER_CONTACT_INFO *v38; // [rsp+28h] [rbp-50h]
  unsigned int v39; // [rsp+30h] [rbp-48h]
  int v40; // [rsp+34h] [rbp-44h] BYREF
  int v41; // [rsp+38h] [rbp-40h] BYREF
  int v42; // [rsp+3Ch] [rbp-3Ch]
  int v43; // [rsp+40h] [rbp-38h]
  Feedback *v44; // [rsp+48h] [rbp-30h]
  _DWORD v45[4]; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v46[6]; // [rsp+60h] [rbp-18h] BYREF
  int v47; // [rsp+C0h] [rbp+48h] BYREF
  char *v48; // [rsp+C8h] [rbp+50h]
  __int64 v49; // [rsp+D0h] [rbp+58h]
  int v50; // [rsp+D8h] [rbp+60h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v5 = a1;
  v6 = 0;
  v43 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v42 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = Win32AllocPool(40 * v5, 1987081045LL);
  v13 = 0;
  v39 = 0;
  if ( (_DWORD)v5 )
  {
    v14 = v49;
    while ( 1 )
    {
      v41 = 0;
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              gpTouchProcessor,
                                              v7,
                                              &v41);
      v44 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v16 = (char *)ContactVisualizationPointerEventInt + 8;
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          break;
        }
      }
LABEL_58:
      v10 = v42;
      v7 += v14;
      v48 = v7;
      if ( !--v9 )
      {
        v6 = v43;
        goto LABEL_60;
      }
    }
    if ( *(_DWORD *)v16 == 3 )
    {
      PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v16 + 2));
      v11 = 1LL;
      if ( PointerDeviceType == 1 )
      {
        v18 = *((_DWORD *)v16 + 3);
        Feedback::gfIntegratedPenActive = (v18 >> 1) & 1;
        if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v18 & 0x10001) != 0 )
        {
          SwitchMouseCursors(3u, 0);
          v18 = *((_DWORD *)v16 + 3);
        }
        v45[1] = *((_DWORD *)v16 + 8);
        v19 = *((_DWORD *)v16 + 9);
        v45[0] = v18;
        v45[2] = v19;
        DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v16, (const struct tagPOINTERCURSORDATA *)v45);
LABEL_42:
        if ( a5 != 3 )
        {
          v40 = 0;
          if ( *(_DWORD *)v16 != 2
            || (unsigned int)Feedback::GetWindowVisualizationSetting(
                               (Feedback *)v16,
                               (const struct tagPOINTER_INFO *)(v10 == 0),
                               a5 == 2,
                               v10 == 2,
                               (__int64)&v40,
                               (int *)v38)
            || v40 )
          {
            if ( v8 )
            {
              v28 = 5LL * v13++;
              v29 = v8 + 8 * v28;
              v39 = v13;
              v30 = 1;
              if ( *(_DWORD *)v16 == 3 )
                v30 = Feedback::GetWindowBarrelVisualizationSetting(
                        (Feedback *)v16,
                        (const struct tagPOINTER_INFO *)(v41 != 0),
                        v12) != 0;
              v31 = v50 && a5 == 2;
              v32 = v44;
              Feedback::PointerEventIntToDigitizerContactInfo(
                v44,
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
              v7 = v48;
            }
          }
        }
        goto LABEL_58;
      }
    }
    else
    {
      v11 = 1LL;
    }
    if ( !Feedback::gfIntegratedPenActive && (*((_DWORD *)v16 + 3) & 0x2000) != 0 )
    {
      v46[0] = *((_DWORD *)v16 + 3);
      v20 = 0;
      v46[1] = *((_DWORD *)v16 + 8);
      v46[2] = *((_DWORD *)v16 + 9);
      if ( (unsigned int)(*(_DWORD *)v16 - 2) <= 1 )
      {
        v21 = *((_QWORD *)v16 + 3);
        if ( v21 )
        {
          v22 = ValidateHwnd(v21);
          if ( v22 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v22, 13LL, 1LL, &v47) )
              v20 = v47;
          }
        }
      }
      if ( (*((_DWORD *)v16 + 3) & 0x10001) != 0 )
      {
        v23 = 0;
        v24 = v20;
        if ( *(_DWORD *)v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v16 + 2)) == 2 )
          v24 = 1;
        if ( v24 )
        {
          v27 = 4;
        }
        else
        {
          v23 = *(_DWORD *)v16 == 2
             && (v25 = *((_QWORD *)v16 + 3)) != 0
             && (v26 = ValidateHwnd(v25)) != 0
             && (unsigned int)FeedbackGetWindowSetting(v26, 12LL, 1LL, &v47)
             && v47
             || !(unsigned int)IsCurrentDesktopComposed();
          v27 = *(_DWORD *)v16;
        }
        SwitchMouseCursors(v27, v23);
        v7 = v48;
        v10 = v42;
      }
      if ( !v20 )
        DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v16, (const struct tagPOINTERCURSORDATA *)v46);
      v13 = v39;
    }
    goto LABEL_42;
  }
LABEL_60:
  if ( v8 )
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
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
