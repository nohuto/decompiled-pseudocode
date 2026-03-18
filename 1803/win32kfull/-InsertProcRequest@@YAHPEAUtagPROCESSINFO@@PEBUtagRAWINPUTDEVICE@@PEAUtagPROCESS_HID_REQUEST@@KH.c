/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C005A314
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C005A1DC (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C000585C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0005AA4 (AllocateAndLinkHidTLCInfo.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0006970 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SearchHidTLCInfo @ 0x1C0057E78 (SearchHidTLCInfo.c)
 *     PostDeviceNotification @ 0x1C005A518 (PostDeviceNotification.c)
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
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  struct DEVICEINFO *i; // rdi
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // ecx
  struct tagHID_PAGEONLY_REQUEST *v20; // rax
  __int64 v21; // rax
  char *v22; // [rsp+30h] [rbp-18h] BYREF
  struct tagWND *v23; // [rsp+38h] [rbp-10h]

  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
        goto LABEL_10;
      if ( !a5 )
      {
        v21 = (__int64)SearchHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
        if ( !v21 )
        {
          v21 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
          if ( !v21 )
            goto LABEL_27;
        }
        *((_QWORD *)a3 + 3) = v21;
        ++*(_DWORD *)(v21 + 36);
      }
      v12 = *((_QWORD *)a1 + 103) + 48LL;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        __fastfail(3u);
      goto LABEL_9;
    }
    v20 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
    if ( v20 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
    {
LABEL_22:
      v20 = 0LL;
    }
    else
    {
      while ( *((_WORD *)v20 + 8) != *((_WORD *)a3 + 8) )
      {
        v20 = *(struct tagHID_PAGEONLY_REQUEST **)v20;
        if ( v20 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
          goto LABEL_22;
      }
    }
    if ( v20 || (v20 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8))) != 0LL )
    {
      *((_QWORD *)a3 + 3) = v20;
      ++*((_DWORD *)v20 + 5);
      SetHidPOCountToTLCInfo();
      v22 = (char *)a3 + 32;
      v23 = a6;
      HMAssignmentLock(&v22);
      v12 = *((_QWORD *)a1 + 103) + 32LL;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        __fastfail(3u);
      goto LABEL_9;
    }
LABEL_27:
    UserSetLastError(8LL, v11);
    return 0LL;
  }
  if ( !a5 )
  {
    v10 = (__int64)SearchHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
    if ( v10 || (v10 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9))) != 0 )
    {
      *((_QWORD *)a3 + 3) = v10;
      ++*(_DWORD *)(v10 + 24);
      goto LABEL_6;
    }
    goto LABEL_27;
  }
LABEL_6:
  if ( !a7 )
  {
    v22 = (char *)a3 + 32;
    v23 = a6;
    HMAssignmentLock(&v22);
  }
  v12 = *((_QWORD *)a1 + 103) + 16LL;
  v13 = *(_QWORD *)v12;
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
    __fastfail(3u);
LABEL_9:
  *(_QWORD *)a3 = v13;
  *((_QWORD *)a3 + 1) = v12;
  *(_QWORD *)(v13 + 8) = a3;
  *(_QWORD *)v12 = a3;
LABEL_10:
  v14 = *((_DWORD *)a3 + 5) ^ (*((_DWORD *)a3 + 5) ^ (*((_DWORD *)a2 + 1) >> 11)) & 4;
  *((_DWORD *)a3 + 5) = v14;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    v17 = v14;
    if ( !a5 && (v14 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 103) + 80LL);
      ++gHidCounters[2];
      v17 = *((_DWORD *)a3 + 5);
    }
    v18 = v17 | 1;
    *((_DWORD *)a3 + 5) = v18;
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v19 = v18 | 2;
    else
      v19 = v18 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v19;
  }
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0);
  return 1LL;
}
