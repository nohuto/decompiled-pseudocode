/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024F760
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C024F124 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C024F23C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C024F340 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C024F590 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C0250040 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C025009C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(HideInkCursorProvider *a1, int a2, int *a3, int a4)
{
  int v6; // edi
  const CHAR *v7; // rdx
  char v8; // r10
  const CHAR *v9; // rdx
  HideInkCursorProvider *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  int v13; // eax
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v14; // rdx
  const CHAR *v15; // rdx
  HideInkCursorProvider *v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  int v19; // eax
  _QWORD *v20; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v21; // rdx
  _QWORD *v22; // r14
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  HideInkCursorProvider *v35; // [rsp+60h] [rbp-A0h] BYREF
  HideInkCursorProvider *v36; // [rsp+68h] [rbp-98h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+70h] [rbp-90h] BYREF
  HideInkCursorProvider *v38; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+80h] [rbp-80h] BYREF
  int *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  const char *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  int *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+D0h] [rbp-30h] BYREF
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  const char *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  int *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  const char *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  HideInkCursorProvider **v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  char *v61; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v63; // [rsp+190h] [rbp+90h] BYREF
  int *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]
  const char *v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1D0h] [rbp+D0h] BYREF
  HideInkCursorProvider **v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1E8h] [rbp+E8h]
  int *v71; // [rsp+1F0h] [rbp+F0h]
  __int64 v72; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR v73; // [rsp+200h] [rbp+100h] BYREF
  int *v74; // [rsp+220h] [rbp+120h]
  __int64 v75; // [rsp+228h] [rbp+128h]
  const char *v76; // [rsp+230h] [rbp+130h]
  __int64 v77; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+240h] [rbp+140h] BYREF
  HideInkCursorProvider **v79; // [rsp+250h] [rbp+150h]
  __int64 v80; // [rsp+258h] [rbp+158h]
  int *v81; // [rsp+260h] [rbp+160h]
  __int64 v82; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v83; // [rsp+270h] [rbp+170h] BYREF
  int *v84; // [rsp+290h] [rbp+190h]
  __int64 v85; // [rsp+298h] [rbp+198h]
  const char *v86; // [rsp+2A0h] [rbp+1A0h]
  __int64 v87; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v88; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v89; // [rsp+2D0h] [rbp+1D0h]
  __int64 v90; // [rsp+2D8h] [rbp+1D8h]
  const char *v91; // [rsp+2E0h] [rbp+1E0h]
  __int64 v92; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v93; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v94; // [rsp+310h] [rbp+210h]
  __int64 v95; // [rsp+318h] [rbp+218h]
  EVENT_DATA_DESCRIPTOR v96; // [rsp+320h] [rbp+220h] BYREF
  int *v97; // [rsp+340h] [rbp+240h]
  __int64 v98; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+350h] [rbp+250h] BYREF
  int *v100; // [rsp+370h] [rbp+270h]
  __int64 v101; // [rsp+378h] [rbp+278h]

  if ( a2 == 3 )
  {
    if ( a4 == 4 )
    {
      if ( dword_1C031F298 > 4u )
      {
        v15 = (const CHAR *)*((_QWORD *)a1 + 6);
        v74 = &v31;
        v31 = 0;
        v76 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
        v75 = 4LL;
        v77 = 62LL;
        TlgCreateSz(&v78, v15);
        v38 = a1;
        v79 = &v38;
        v80 = 8LL;
        v81 = a3;
        v82 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8969, 0LL, 0LL, 7u, &v73);
      }
      if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId((__int64)a1, 3, *a3) )
      {
        v6 = -1073741823;
        if ( v18 > 2 )
        {
          v32 = -1073741823;
          v47 = &v32;
          v49 = "The specified pointer id already has an active IFC_HIDE_INK_CURSOR_START command";
          v48 = 4LL;
          v50 = 81LL;
          v51 = a3;
          v52 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E892C, 0LL, 0LL, 5u, &v46);
        }
      }
      else
      {
        v19 = HideInkCursorProvider::ValidatePointer(v16, v17);
        v6 = v19;
        if ( v19 >= 0 )
        {
          v20 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
          v22 = v20;
          if ( v20 )
          {
            v20[2] = 0LL;
            v20[3] = 0LL;
            v20[1] = 0LL;
            *v20 = 0LL;
          }
          else
          {
            v22 = 0LL;
          }
          if ( v22 )
          {
            *((_DWORD *)v22 + 4) = 3;
            *((_DWORD *)v22 + 5) = *a3;
            v22[3] = KeGetCurrentThread();
            v6 = HideInkCursorProvider::DoHideInkCursorStart(a1, v21);
            if ( v6 < 0 )
              Win32FreePool(v22);
            else
              InkFeedbackProviderBase::AddActiveCommand(a1, (struct InkFeedbackProviderBase::ActiveCommand *)v22);
          }
          else
          {
            v6 = -1073741801;
            if ( dword_1C031F298 > 2u )
            {
              v34 = -1073741801;
              v100 = &v34;
              v101 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v99);
            }
          }
        }
        else if ( dword_1C031F298 > 2u )
        {
          v33 = v19;
          v89 = &v33;
          v91 = "ValidatePointer failed";
          v90 = 4LL;
          v92 = 23LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &v88);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( dword_1C031F298 > 2u )
      {
        v30 = -1073741811;
        v97 = &v30;
        v98 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v96);
      }
    }
  }
  else if ( a2 == 4 )
  {
    if ( a4 == 4 )
    {
      if ( dword_1C031F298 > 4u )
      {
        v9 = (const CHAR *)*((_QWORD *)a1 + 6);
        v64 = &v27;
        v27 = 0;
        v66 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_STOP...";
        v65 = 4LL;
        v67 = 61LL;
        TlgCreateSz(&v68, v9);
        v36 = a1;
        v69 = &v36;
        v70 = 8LL;
        v71 = a3;
        v72 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8969, 0LL, 0LL, 7u, &v63);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          (__int64)a1,
                                                                                          3,
                                                                                          *a3);
      if ( ActiveCommandByTargetPointerId )
      {
        v13 = HideInkCursorProvider::ValidatePointer(v10, v11);
        v6 = v13;
        if ( v13 >= 0 )
        {
          v6 = HideInkCursorProvider::DoHideInkCursorStop(a1, v14);
          InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(a1, &ActiveCommandByTargetPointerId);
        }
        else if ( dword_1C031F298 > 2u )
        {
          v29 = v13;
          v84 = &v29;
          v86 = "ValidatePointer failed";
          v85 = 4LL;
          v87 = 23LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &v83);
        }
      }
      else
      {
        v6 = -1073741823;
        if ( v12 > 2 )
        {
          v28 = -1073741823;
          v40 = &v28;
          v42 = "Active IFC_HIDE_INK_CURSOR_START command not found for the specified pointer id";
          v41 = 4LL;
          v43 = 80LL;
          v44 = a3;
          v45 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E892C, 0LL, 0LL, 5u, &v39);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( dword_1C031F298 > 2u )
      {
        v26 = -1073741811;
        v94 = &v26;
        v95 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v93);
      }
    }
  }
  else
  {
    v6 = -1073741637;
    if ( dword_1C031F298 > 2u )
    {
      v7 = (const CHAR *)*((_QWORD *)a1 + 6);
      v54 = &v25;
      v25 = -1073741637;
      v56 = "Unsupported command";
      v55 = 4LL;
      v57 = 20LL;
      TlgCreateSz(&pDesc, v7);
      v35 = a1;
      v59 = &v35;
      v61 = &v24;
      v60 = 8LL;
      v24 = v8;
      v62 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E88CE, 0LL, 0LL, 7u, &pData);
    }
  }
  return (unsigned int)v6;
}
