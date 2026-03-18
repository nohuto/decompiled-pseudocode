/*
 * XREFs of _pLoadAdditinalMode @ 0x1C015B450
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C015B2AC (_pGetAdditionalTiming.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _pReadDetailTimingFromReg @ 0x1C015B7D4 (_pReadDetailTimingFromReg.c)
 *     _pPopulateProgressiveTimingList @ 0x1C0297014 (_pPopulateProgressiveTimingList.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const WCHAR *v11; // rdx
  NTSTATUS appended; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r12d
  __int64 v27; // rcx
  _QWORD *v28; // rsi
  __int64 v29; // rcx
  wchar_t *v30; // r13
  ULONG v31; // r15d
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int16 v36; // ax
  NTSTATUS v37; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  void *KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  _DWORD KeyInformation[12]; // [rsp+90h] [rbp-1h] BYREF

  v4 = (int)a1;
  v5 = WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = v4;
  WdLogEvent5_WdDmmEvent(v5);
  if ( (_DWORD)v4 == -2 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v39);
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1C008FA10;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( (int)v4 > 5 )
  {
    switch ( (_DWORD)v4 )
    {
      case 6:
        v11 = L"LVDS";
        goto LABEL_11;
      case 8:
        v11 = L"D_JPN";
        goto LABEL_11;
      case 9:
        v11 = L"SDI";
        goto LABEL_11;
    }
    if ( (int)v4 > 9 )
    {
      if ( (int)v4 <= 11 )
      {
        v11 = L"DISPLAYPORT";
        goto LABEL_11;
      }
      if ( (int)v4 <= 13 )
      {
        v11 = L"UDI";
        goto LABEL_11;
      }
      if ( (_DWORD)v4 == 14 )
      {
        v11 = L"SDTVDONGLE";
        goto LABEL_11;
      }
    }
    goto LABEL_58;
  }
  switch ( (_DWORD)v4 )
  {
    case 5:
      v11 = L"HDTV";
      goto LABEL_11;
    case 0x80000000:
      v11 = L"INTERNAL";
      goto LABEL_11;
    case 0xFFFFFFFF:
      v11 = L"OTHER";
      goto LABEL_11;
  }
  if ( (_DWORD)v4 )
  {
    switch ( (_DWORD)v4 )
    {
      case 1:
        v11 = L"SVIDEO";
        goto LABEL_11;
      case 2:
        v11 = L"COMPOSITE";
        goto LABEL_11;
      case 3:
        v11 = L"COMPONENT";
        goto LABEL_11;
      case 4:
        v11 = L"DVI";
        goto LABEL_11;
    }
LABEL_58:
    v41 = WdLogNewEntry5_WdDmmEvent(v8, v7, v9, v10);
    *(_QWORD *)(v41 + 24) = v4;
    WdLogEvent5_WdDmmEvent(v41);
    return 3221226021LL;
  }
  v11 = L"HD15";
LABEL_11:
  appended = RtlAppendUnicodeToString(&Destination, v11);
  v14 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v42);
    }
    v43 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v43 + 24) = v4;
    *(_QWORD *)(v43 + 32) = v14;
    WdLogEvent5_WdError(v43);
    return (unsigned int)v14;
  }
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v14 = v15;
  if ( v15 < 0 )
  {
    v44 = WdLogNewEntry5_WdDmmEvent(v17, v16, v18, v19);
    *(_QWORD *)(v44 + 24) = v4;
    *(_QWORD *)(v44 + 32) = v14;
    WdLogEvent5_WdDmmEvent(v44);
    return (unsigned int)v14;
  }
  v20 = KeyHandle;
  if ( !KeyHandle )
  {
    v45 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v45);
    v20 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v21 = ZwQueryKey(v20, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v14 = v21;
  if ( v21 < 0 )
  {
    v52 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v52 + 24) = v4;
    *(_QWORD *)(v52 + 32) = v14;
    WdLogEvent5_WdWarning(v52);
    goto LABEL_35;
  }
  if ( !KeyInformation[5] )
  {
    v51 = WdLogNewEntry5_WdDmmEvent(0LL, v22, v24, v25);
    *(_QWORD *)(v51 + 24) = v4;
    WdLogEvent5_WdDmmEvent(v51);
    LODWORD(v14) = -1073741275;
    goto LABEL_35;
  }
  v26 = 0;
  v28 = operator new((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v28 )
  {
    v46 = WdLogNewEntry5_WdLowResource(v27);
    WdLogEvent5_WdLowResource(v46);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v30 = (wchar_t *)operator new(0x96uLL, 0x4D677844u, PagedPool);
  if ( !v30 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v29);
    WdLogEvent5_WdLowResource(v47);
    operator delete[](v28);
    LODWORD(v14) = -1073741801;
    goto LABEL_35;
  }
  v31 = 0;
  if ( !KeyInformation[5] )
    goto LABEL_74;
  while ( 1 )
  {
    v32 = ZwEnumerateKey(KeyHandle, v31, KeyBasicInformation, v30, 0x96u, &ResultLength);
    v14 = v32;
    if ( v32 == -2147483643 || v32 == -1073741789 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
      goto LABEL_70;
    }
    if ( v32 == -2147483622 )
      break;
    if ( v32 >= 0 )
    {
      v36 = v30[6];
      Handle = 0LL;
      Destination.MaximumLength = v36;
      Destination.Length = v36;
      Destination.Buffer = v30 + 8;
      memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v37 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v14 = v37;
      if ( v37 >= 0 )
      {
        LODWORD(v14) = pReadDetailTimingFromReg(Handle);
        if ( (int)v14 >= 0 )
          ++v26;
        ZwClose(Handle);
        goto LABEL_28;
      }
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
    v48[5] = v14;
LABEL_70:
    v48[4] = v31;
    v48[3] = v4;
    WdLogEvent5_WdWarning(v48);
LABEL_28:
    if ( ++v31 >= KeyInformation[5] )
      goto LABEL_29;
  }
  v49 = WdLogNewEntry5_WdWarning(v34, v33, v35);
  *(_QWORD *)(v49 + 24) = v4;
  WdLogEvent5_WdWarning(v49);
LABEL_29:
  if ( !v26 )
  {
LABEL_74:
    operator delete[](v28);
    goto LABEL_34;
  }
  *v28 = qword_1C008EDF0;
  *((_DWORD *)v28 + 2) = v4;
  *((_DWORD *)v28 + 4) = v26;
  *((_BYTE *)v28 + 12) = 0;
  qword_1C008EDF0 = v28;
  if ( (int)v4 < 0 || (int)v4 > 3 && (_DWORD)v4 != 14 )
  {
    v50 = (_QWORD *)pPopulateProgressiveTimingList(v28);
    if ( v50 )
    {
      *v50 = qword_1C008EDF0;
      qword_1C008EDF0 = v50;
    }
  }
  LODWORD(v14) = 0;
LABEL_34:
  operator delete[](v30);
LABEL_35:
  ZwClose(KeyHandle);
  return (unsigned int)v14;
}
