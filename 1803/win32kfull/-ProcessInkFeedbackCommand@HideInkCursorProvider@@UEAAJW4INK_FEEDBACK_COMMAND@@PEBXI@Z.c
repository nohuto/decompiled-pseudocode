/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C020DD60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x1C00BC8A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C020D770 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C020D884 (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C020D960 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C020DB98 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C020E5E0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C020E62C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(
        HideInkCursorProvider *a1,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  int v6; // edi
  const CHAR *v7; // rdx
  char v8; // r10
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  const CHAR *v11; // rdx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  HideInkCursorProvider *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // eax
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v18; // rdx
  const GUID *v19; // r8
  const GUID *v20; // r9
  const CHAR *v21; // rdx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  HideInkCursorProvider *v24; // rcx
  const GUID *v25; // r8
  const GUID *v26; // r9
  int v27; // eax
  const GUID *v28; // r8
  const GUID *v29; // r9
  _QWORD *v30; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v31; // rdx
  const GUID *v32; // r8
  const GUID *v33; // r9
  _QWORD *v34; // r14
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  HideInkCursorProvider *v47; // [rsp+60h] [rbp-A0h] BYREF
  HideInkCursorProvider *v48; // [rsp+68h] [rbp-98h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+70h] [rbp-90h] BYREF
  HideInkCursorProvider *v50; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v51; // [rsp+80h] [rbp-80h] BYREF
  int *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  const char *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  const GUID *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v58; // [rsp+D0h] [rbp-30h] BYREF
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  const char *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  const GUID *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  const char *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  HideInkCursorProvider **v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  char *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v75; // [rsp+190h] [rbp+90h] BYREF
  int *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  const char *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1D0h] [rbp+D0h] BYREF
  HideInkCursorProvider **v81; // [rsp+1E0h] [rbp+E0h]
  __int64 v82; // [rsp+1E8h] [rbp+E8h]
  const GUID *v83; // [rsp+1F0h] [rbp+F0h]
  __int64 v84; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+200h] [rbp+100h] BYREF
  int *v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  const char *v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+240h] [rbp+140h] BYREF
  HideInkCursorProvider **v91; // [rsp+250h] [rbp+150h]
  __int64 v92; // [rsp+258h] [rbp+158h]
  const GUID *v93; // [rsp+260h] [rbp+160h]
  __int64 v94; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v95; // [rsp+270h] [rbp+170h] BYREF
  int *v96; // [rsp+290h] [rbp+190h]
  __int64 v97; // [rsp+298h] [rbp+198h]
  const char *v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v100; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v101; // [rsp+2D0h] [rbp+1D0h]
  __int64 v102; // [rsp+2D8h] [rbp+1D8h]
  const char *v103; // [rsp+2E0h] [rbp+1E0h]
  __int64 v104; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v105; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v106; // [rsp+310h] [rbp+210h]
  __int64 v107; // [rsp+318h] [rbp+218h]
  EVENT_DATA_DESCRIPTOR v108; // [rsp+320h] [rbp+220h] BYREF
  int *v109; // [rsp+340h] [rbp+240h]
  __int64 v110; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v111; // [rsp+350h] [rbp+250h] BYREF
  int *v112; // [rsp+370h] [rbp+270h]
  __int64 v113; // [rsp+378h] [rbp+278h]

  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v21 = (const CHAR *)*((_QWORD *)a1 + 6);
        v86 = &v43;
        v43 = 0;
        v88 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
        v87 = 4LL;
        v89 = 62LL;
        TlgCreateSz(&v90, v21);
        v50 = a1;
        v91 = &v50;
        v92 = 8LL;
        v93 = a3;
        v94 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3C69, v22, v23, 7u, &v85);
      }
      if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId((__int64)a1, 3, a3->Data1) )
      {
        v6 = -1073741823;
        if ( (unsigned int)v26 > 2 )
        {
          v44 = -1073741823;
          v59 = &v44;
          v61 = "The specified pointer id already has an active IFC_HIDE_INK_CURSOR_START command";
          v60 = 4LL;
          v62 = 81LL;
          v63 = a3;
          v64 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3C2C, v25, v26, 5u, &v58);
        }
      }
      else
      {
        v27 = HideInkCursorProvider::ValidatePointer(v24, (unsigned int)v25);
        v6 = v27;
        if ( v27 >= 0 )
        {
          v30 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
          v34 = v30;
          if ( v30 )
          {
            v30[2] = 0LL;
            v30[3] = 0LL;
            v30[1] = 0LL;
            *v30 = 0LL;
          }
          else
          {
            v34 = 0LL;
          }
          if ( v34 )
          {
            *((_DWORD *)v34 + 4) = 3;
            *((_DWORD *)v34 + 5) = a3->Data1;
            v34[3] = KeGetCurrentThread();
            v6 = HideInkCursorProvider::DoHideInkCursorStart(a1, v31);
            if ( v6 < 0 )
              Win32FreePool(v34);
            else
              InkFeedbackProviderBase::AddActiveCommand(a1, (struct InkFeedbackProviderBase::ActiveCommand *)v34);
          }
          else
          {
            v6 = -1073741801;
            if ( (unsigned int)pRelatedActivityId > 2 )
            {
              v46 = -1073741801;
              v112 = &v46;
              v113 = 4LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v32, v33, 3u, &v111);
            }
          }
        }
        else if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v45 = v27;
          v101 = &v45;
          v103 = "ValidatePointer failed";
          v102 = 4LL;
          v104 = 23LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v28, v29, 4u, &v100);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v42 = -1073741811;
        v109 = &v42;
        v110 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, a3, a4, 3u, &v108);
      }
    }
  }
  else if ( a2 == 4 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v11 = (const CHAR *)*((_QWORD *)a1 + 6);
        v76 = &v39;
        v39 = 0;
        v78 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_STOP...";
        v77 = 4LL;
        v79 = 61LL;
        TlgCreateSz(&v80, v11);
        v48 = a1;
        v81 = &v48;
        v82 = 8LL;
        v83 = a3;
        v84 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3C69, v12, v13, 7u, &v75);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          (__int64)a1,
                                                                                          3,
                                                                                          a3->Data1);
      if ( ActiveCommandByTargetPointerId )
      {
        v17 = HideInkCursorProvider::ValidatePointer(v14, (unsigned int)v15);
        v6 = v17;
        if ( v17 >= 0 )
        {
          v6 = HideInkCursorProvider::DoHideInkCursorStop(a1, v18);
          InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(a1, &ActiveCommandByTargetPointerId);
        }
        else if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v41 = v17;
          v96 = &v41;
          v98 = "ValidatePointer failed";
          v97 = 4LL;
          v99 = 23LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v19, v20, 4u, &v95);
        }
      }
      else
      {
        v6 = -1073741823;
        if ( (unsigned int)v16 > 2 )
        {
          v40 = -1073741823;
          v52 = &v40;
          v54 = "Active IFC_HIDE_INK_CURSOR_START command not found for the specified pointer id";
          v53 = 4LL;
          v55 = 80LL;
          v56 = a3;
          v57 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3C2C, v15, v16, 5u, &v51);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v38 = -1073741811;
        v106 = &v38;
        v107 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, a3, a4, 3u, &v105);
      }
    }
  }
  else
  {
    v6 = -1073741637;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v7 = (const CHAR *)*((_QWORD *)a1 + 6);
      v66 = &v37;
      v37 = -1073741637;
      v68 = "Unsupported command";
      v67 = 4LL;
      v69 = 20LL;
      TlgCreateSz(&pDesc, v7);
      v47 = a1;
      v71 = &v47;
      v73 = &v36;
      v72 = 8LL;
      v36 = v8;
      v74 = 1LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3EA7, v9, v10, 7u, &pData);
    }
  }
  return (unsigned int)v6;
}
