/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C01039FC
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C01038BC (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     AllocateAndLinkHidTLCInfo @ 0x1C0004C90 (AllocateAndLinkHidTLCInfo.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0005328 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C00061D4 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SearchHidTLCInfo @ 0x1C0102EF4 (SearchHidTLCInfo.c)
 *     PostDeviceNotification @ 0x1C0103C0C (PostDeviceNotification.c)
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
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
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
        v10 = (__int64)SearchHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
        if ( !v10 )
        {
          v10 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
          if ( !v10 )
          {
LABEL_36:
            UserSetLastError(8LL, v19, v20, v21);
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
      v11 = *((_QWORD *)a1 + 104) + 16LL;
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
      v11 = *((_QWORD *)a1 + 104) + 32LL;
      break;
    case 3:
      if ( !a5 )
      {
        v23 = (__int64)SearchHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
        if ( !v23 )
        {
          v23 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
          if ( !v23 )
            goto LABEL_36;
        }
        *((_QWORD *)a3 + 3) = v23;
        ++*(_DWORD *)(v23 + 36);
      }
      v11 = *((_QWORD *)a1 + 104) + 48LL;
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
    v16 = v13;
    if ( !a5 && (v13 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 104) + 80LL);
      ++gHidCounters[2];
      v16 = *((_DWORD *)a3 + 5);
    }
    v17 = v16 | 1;
    *((_DWORD *)a3 + 5) = v17;
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v18 = v17 | 2;
    else
      v18 = v17 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v18;
  }
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0);
  return 1LL;
}
