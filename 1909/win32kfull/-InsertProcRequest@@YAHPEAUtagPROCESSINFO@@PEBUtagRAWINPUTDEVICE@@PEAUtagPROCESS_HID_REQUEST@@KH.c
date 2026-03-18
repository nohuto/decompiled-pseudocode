/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00E7B70
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00E7A28 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     AllocateAndLinkHidTLCInfo @ 0x1C00075E8 (AllocateAndLinkHidTLCInfo.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0007F0C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0009BA0 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PostDeviceNotification @ 0x1C00E7D84 (PostDeviceNotification.c)
 *     SearchHidTLCInfo @ 0x1C00E7EEC (SearchHidTLCInfo.c)
 */

__int64 __fastcall InsertProcRequest(
        struct tagPROCESSINFO *a1,
        const struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        int a4,
        int a5,
        struct tagWND *a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  struct DEVICEINFO *i; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // ecx
  struct tagHID_PAGEONLY_REQUEST *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // [rsp+30h] [rbp-18h] BYREF
  struct tagWND *v26; // [rsp+38h] [rbp-10h]

  switch ( a4 )
  {
    case 1:
      if ( !a5 )
      {
        v10 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v10 )
        {
          v10 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
          if ( !v10 )
          {
LABEL_36:
            UserSetLastError(8LL, v16, v17, v18);
            return 0LL;
          }
        }
        *((_QWORD *)a3 + 3) = v10;
        ++*(_DWORD *)(v10 + 24);
      }
      if ( !a7 )
      {
        v25 = (char *)a3 + 32;
        v26 = a6;
        HMAssignmentLock(&v25);
      }
      v11 = *((_QWORD *)a1 + 103) + 16LL;
      break;
    case 2:
      v22 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
      if ( v22 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
      {
LABEL_25:
        v22 = 0LL;
      }
      else
      {
        while ( *((_WORD *)v22 + 8) != *((_WORD *)a3 + 8) )
        {
          v22 = *(struct tagHID_PAGEONLY_REQUEST **)v22;
          if ( v22 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
            goto LABEL_25;
        }
      }
      if ( !v22 )
      {
        v22 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8));
        if ( !v22 )
          goto LABEL_36;
      }
      *((_QWORD *)a3 + 3) = v22;
      ++*((_DWORD *)v22 + 5);
      SetHidPOCountToTLCInfo();
      v25 = (char *)a3 + 32;
      v26 = a6;
      HMAssignmentLock(&v25);
      v11 = *((_QWORD *)a1 + 103) + 32LL;
      break;
    case 3:
      if ( !a5 )
      {
        v23 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v23 )
        {
          v23 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
          if ( !v23 )
            goto LABEL_36;
        }
        *((_QWORD *)a3 + 3) = v23;
        ++*(_DWORD *)(v23 + 36);
      }
      v11 = *((_QWORD *)a1 + 103) + 48LL;
      v24 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
      {
        *(_QWORD *)a3 = v24;
        *((_QWORD *)a3 + 1) = v11;
        *(_QWORD *)(v24 + 8) = a3;
        goto LABEL_10;
      }
LABEL_40:
      __fastfail(3u);
    default:
      goto LABEL_11;
  }
  v12 = *(_QWORD *)v11;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
    goto LABEL_40;
  *(_QWORD *)a3 = v12;
  *((_QWORD *)a3 + 1) = v11;
  *(_QWORD *)(v12 + 8) = a3;
LABEL_10:
  *(_QWORD *)v11 = a3;
LABEL_11:
  v13 = *((_DWORD *)a3 + 5) ^ (*((_DWORD *)a3 + 5) ^ (*((_DWORD *)a2 + 1) >> 11)) & 4;
  *((_DWORD *)a3 + 5) = v13;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    v19 = v13;
    if ( !a5 && (v13 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 103) + 80LL);
      ++gHidCounters[2];
      v19 = *((_DWORD *)a3 + 5);
    }
    v20 = v19 | 1;
    *((_DWORD *)a3 + 5) = v20;
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v21 = v20 | 2;
    else
      v21 = v20 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v21;
  }
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0);
  return 1LL;
}
