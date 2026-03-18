/*
 * XREFs of _pLoadAdditinalMode @ 0x1C017B90C
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C017B768 (_pGetAdditionalTiming.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     _pReadDetailTimingFromReg @ 0x1C017BC78 (_pReadDetailTimingFromReg.c)
 *     _pPopulateProgressiveTimingList @ 0x1C02CDB48 (_pPopulateProgressiveTimingList.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r15d
  const WCHAR *v9; // rdx
  NTSTATUS appended; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int16 *v33; // r13
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  NTSTATUS v39; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  void *KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  _DWORD KeyInformation[12]; // [rsp+90h] [rbp-1h] BYREF

  v2 = (int)a1;
  v3 = WdLogNewEntry5_WdDmmEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = v2;
  WdLogEvent5_WdDmmEvent(v3);
  if ( (_DWORD)v2 == -2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v41);
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1C00A3A40;
  v8 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( (int)v2 > 5 )
  {
    switch ( (_DWORD)v2 )
    {
      case 6:
        v9 = L"LVDS";
        goto LABEL_11;
      case 8:
        v9 = L"D_JPN";
        goto LABEL_11;
      case 9:
        v9 = L"SDI";
        goto LABEL_11;
    }
    if ( (int)v2 > 9 )
    {
      if ( (int)v2 <= 11 )
      {
        v9 = L"DISPLAYPORT";
        goto LABEL_11;
      }
      if ( (int)v2 <= 13 )
      {
        v9 = L"UDI";
        goto LABEL_11;
      }
      if ( (_DWORD)v2 == 14 )
      {
        v9 = L"SDTVDONGLE";
        goto LABEL_11;
      }
    }
    goto LABEL_58;
  }
  switch ( (_DWORD)v2 )
  {
    case 5:
      v9 = L"HDTV";
      goto LABEL_11;
    case 0x80000000:
      v9 = L"INTERNAL";
      goto LABEL_11;
    case 0xFFFFFFFF:
      v9 = L"OTHER";
      goto LABEL_11;
  }
  if ( (_DWORD)v2 )
  {
    switch ( (_DWORD)v2 )
    {
      case 1:
        v9 = L"SVIDEO";
        goto LABEL_11;
      case 2:
        v9 = L"COMPOSITE";
        goto LABEL_11;
      case 3:
        v9 = L"COMPONENT";
        goto LABEL_11;
      case 4:
        v9 = L"DVI";
        goto LABEL_11;
    }
LABEL_58:
    v43 = WdLogNewEntry5_WdDmmEvent(v7, v6);
    *(_QWORD *)(v43 + 24) = v2;
    WdLogEvent5_WdDmmEvent(v43);
    return 3221226021LL;
  }
  v9 = L"HD15";
LABEL_11:
  appended = RtlAppendUnicodeToString(&Destination, v9);
  v14 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v44);
    }
    v45 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v45 + 24) = v2;
    *(_QWORD *)(v45 + 32) = v14;
    WdLogEvent5_WdError(v45);
    return (unsigned int)v14;
  }
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v14 = v15;
  if ( v15 < 0 )
  {
    v46 = WdLogNewEntry5_WdDmmEvent(v17, v16);
    *(_QWORD *)(v46 + 24) = v2;
    *(_QWORD *)(v46 + 32) = v14;
    WdLogEvent5_WdDmmEvent(v46);
    return (unsigned int)v14;
  }
  v18 = KeyHandle;
  if ( !KeyHandle )
  {
    v47 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v47);
    v18 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v19 = ZwQueryKey(v18, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v14 = v19;
  if ( v19 < 0 )
  {
    v54 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v54 + 24) = v2;
    *(_QWORD *)(v54 + 32) = v14;
    WdLogEvent5_WdWarning(v54);
    goto LABEL_35;
  }
  if ( !KeyInformation[5] )
  {
    v53 = WdLogNewEntry5_WdDmmEvent(0LL, v20);
    *(_QWORD *)(v53 + 24) = v2;
    WdLogEvent5_WdDmmEvent(v53);
    LODWORD(v14) = -1073741275;
    goto LABEL_35;
  }
  v23 = 0;
  v26 = operator new[]((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v26 )
  {
    v48 = WdLogNewEntry5_WdLowResource(v25, v24, v27, v28);
    WdLogEvent5_WdLowResource(v48);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v33 = (unsigned __int16 *)operator new[](0x96uLL, 0x4D677844u, PagedPool);
  if ( !v33 )
  {
    v49 = WdLogNewEntry5_WdLowResource(v30, v29, v31, v32);
    WdLogEvent5_WdLowResource(v49);
    operator delete[](v26);
    LODWORD(v14) = -1073741801;
    goto LABEL_35;
  }
  if ( !KeyInformation[5] )
    goto LABEL_74;
  while ( 1 )
  {
    v34 = ZwEnumerateKey(KeyHandle, v8, KeyBasicInformation, v33, 0x96u, &ResultLength);
    v14 = v34;
    if ( v34 == -2147483643 || v34 == -1073741789 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
      goto LABEL_70;
    }
    if ( v34 == -2147483622 )
      break;
    v38 = 0LL;
    if ( v34 >= 0 )
    {
      Destination.MaximumLength = v33[6];
      Destination.Length = Destination.MaximumLength;
      Handle = 0LL;
      Destination.Buffer = v33 + 8;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = &Destination;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v39 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v14 = v39;
      if ( v39 >= 0 )
      {
        LODWORD(v14) = pReadDetailTimingFromReg(Handle);
        if ( (int)v14 >= 0 )
          ++v23;
        ZwClose(Handle);
        goto LABEL_28;
      }
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v35, v37);
    v50[5] = v14;
LABEL_70:
    v50[4] = v8;
    v50[3] = v2;
    WdLogEvent5_WdWarning(v50);
LABEL_28:
    if ( ++v8 >= KeyInformation[5] )
      goto LABEL_29;
  }
  v51 = WdLogNewEntry5_WdWarning(v36, v35, v37);
  *(_QWORD *)(v51 + 24) = v2;
  WdLogEvent5_WdWarning(v51);
LABEL_29:
  if ( !v23 )
  {
LABEL_74:
    operator delete[](v26);
    goto LABEL_34;
  }
  *v26 = qword_1C00A2E10;
  *((_DWORD *)v26 + 2) = v2;
  *((_DWORD *)v26 + 4) = v23;
  *((_BYTE *)v26 + 12) = 0;
  qword_1C00A2E10 = v26;
  if ( (int)v2 < 0 || (int)v2 > 3 && (_DWORD)v2 != 14 )
  {
    v52 = (_QWORD *)pPopulateProgressiveTimingList(v26);
    if ( v52 )
    {
      *v52 = qword_1C00A2E10;
      qword_1C00A2E10 = v52;
    }
  }
  LODWORD(v14) = 0;
LABEL_34:
  operator delete[](v33);
LABEL_35:
  ZwClose(KeyHandle);
  return (unsigned int)v14;
}
