/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18003E950
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x1800815F0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x180009C84 (LdrpGetFromMUIMemCache.c)
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002B5A0 (LdrpSetAlternateResourceModuleHandle.c)
 *     GetOverlayFilePath @ 0x180032BEC (GetOverlayFilePath.c)
 *     LdrpGetDataModulePath @ 0x180034A1C (LdrpGetDataModulePath.c)
 *     LdrMapAndVerifyResourceFile @ 0x18003A040 (LdrMapAndVerifyResourceFile.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x18007FA88 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008F564 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090070 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180095C90 (wcsrchr.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D1A74 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E25E8 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v7; // rdi
  wchar_t *v8; // r12
  __int64 v9; // r14
  WCHAR *v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  ULONG v16; // r13d
  ULONG v17; // r15d
  int DataModulePath; // eax
  unsigned __int64 v19; // rax
  int appended; // edi
  int v21; // edi
  PVOID v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  wchar_t *Heap; // rax
  __int64 v29; // rax
  WCHAR *v30; // rax
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // [rsp+50h] [rbp-AB8h] BYREF
  int OverlayFilePath; // [rsp+54h] [rbp-AB4h]
  char v36; // [rsp+58h] [rbp-AB0h]
  LANGID v37; // [rsp+5Ah] [rbp-AAEh]
  char v38; // [rsp+5Ch] [rbp-AACh]
  __int64 v39; // [rsp+60h] [rbp-AA8h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-AA0h] BYREF
  PVOID DllHandlea; // [rsp+78h] [rbp-A90h]
  void *v42; // [rsp+80h] [rbp-A88h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-A80h] BYREF
  SIZE_T Size; // [rsp+8Ch] [rbp-A7Ch] BYREF
  ULONG_PTR v45; // [rsp+98h] [rbp-A70h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+A0h] [rbp-A68h] BYREF
  wchar_t *Str; // [rsp+B0h] [rbp-A58h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-A50h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-A40h] BYREF
  HANDLE v50; // [rsp+D0h] [rbp-A38h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp-A30h] BYREF
  PVOID v52; // [rsp+E0h] [rbp-A28h]
  PVOID *v53; // [rsp+E8h] [rbp-A20h]
  WCHAR *v54; // [rsp+F0h] [rbp-A18h]
  PUNICODE_STRING v55; // [rsp+F8h] [rbp-A10h] BYREF
  ULONG_PTR *v56; // [rsp+100h] [rbp-A08h]
  wchar_t *v57; // [rsp+108h] [rbp-A00h]
  int v58; // [rsp+110h] [rbp-9F8h]
  __int64 v59; // [rsp+118h] [rbp-9F0h]
  int v60; // [rsp+120h] [rbp-9E8h]
  _WORD *v61; // [rsp+128h] [rbp-9E0h]
  _UNICODE_STRING v62; // [rsp+130h] [rbp-9D8h] BYREF
  __int64 v63; // [rsp+140h] [rbp-9C8h] BYREF
  int v64; // [rsp+148h] [rbp-9C0h]
  _BYTE v65[56]; // [rsp+150h] [rbp-9B8h] BYREF
  char v66; // [rsp+190h] [rbp-978h] BYREF
  WCHAR Source[352]; // [rsp+1D0h] [rbp-938h] BYREF
  _WORD v68[352]; // [rsp+490h] [rbp-678h] BYREF
  char v69; // [rsp+750h] [rbp-3B8h] BYREF
  WCHAR SourceString[352]; // [rsp+800h] [rbp-308h] BYREF

  v56 = ResourceOffset;
  v53 = ResourceDllBase;
  v37 = LanguageId;
  DllHandlea = DllHandle;
  v50 = 0LL;
  v43 = 0;
  v7 = 0LL;
  Str = 0LL;
  LODWORD(v39) = 0;
  v8 = 0LL;
  v57 = 0LL;
  v45 = 0LL;
  v55 = 0LL;
  v36 = 0;
  v63 = 72LL;
  v64 = 1;
  memset(v65, 0, sizeof(v65));
  v34 = 0;
  v52 = 0LL;
  BaseAddress = 0LL;
  v38 = 1;
  v9 = 0LL;
  v49 = 0LL;
  v10 = SourceString;
  v54 = SourceString;
  Size = 0x1000002BELL;
  if ( !DllHandle || !v37 || !ResourceDllBase )
    return -1073741811;
  v11 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, v37, &v45, 4);
  v14 = -1LL;
  if ( v11 == (_DWORD *)-1LL )
  {
    v16 = Flags;
    v17 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v53 = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *ResourceDllBase = v11;
      if ( v56 )
        *v56 = v45;
      OverlayFilePath = 0;
      return 0;
    }
    v16 = Flags;
    v17 = Flags & 0x400000;
  }
  v42 = 0LL;
  if ( v17 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(DllHandlea, Source, v13, &v43, &Str, &v39, (wchar_t **)&v49);
    v7 = Str;
    v9 = v49;
  }
  if ( DataModulePath >= 0 )
  {
LABEL_13:
    v19 = v43 & 0xFFFFFFFE;
    if ( v19 >= 0x2BE )
      _report_rangecheckfailure(v14, v12, v13);
    *(WCHAR *)((char *)Source + v19) = 0;
    if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v7) >= 0 )
    {
      v7 = (const wchar_t *)v52;
      Str = (wchar_t *)v52;
      v29 = -1LL;
      do
        ++v29;
      while ( *((_WORD *)v52 + v29) );
      LODWORD(v39) = 2 * v29;
    }
    RtlInitUnicodeString(&DestinationString, 0LL);
    RtlInitUnicodeString(&LocaleName, 0LL);
    v61 = v68;
    v60 = 46006272;
    v59 = 0LL;
    v58 = 0;
    if ( (unsigned __int64)(unsigned int)v39 + 12 > 0x3C )
    {
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v39 + 10);
      v8 = Heap;
      v57 = Heap;
      if ( !Heap )
      {
        appended = -1073741801;
LABEL_76:
        OverlayFilePath = appended;
        goto LABEL_67;
      }
      DestinationString.Buffer = Heap;
      DestinationString.MaximumLength = 2 * (v39 + 5);
      v7 = Str;
      v9 = v49;
    }
    else
    {
      DestinationString.Buffer = (wchar_t *)&v66;
      DestinationString.MaximumLength = 60;
    }
    DestinationString.Length = 0;
    appended = RtlAppendUnicodeToString(&DestinationString, v7);
    OverlayFilePath = appended;
    if ( appended < 0 )
      goto LABEL_67;
    appended = RtlAppendUnicodeToString(&DestinationString, L".mui");
    OverlayFilePath = appended;
    if ( appended < 0 )
      goto LABEL_67;
    if ( v9 )
      RtlActivateActivationContextUnsafeFast((__int64)&v63, v9);
    v21 = LdrpQuerySxSMUIFile(&DestinationString, &v55);
    if ( v9 )
      RtlDeactivateActivationContextUnsafeFast((__int64)&v63);
    if ( v21 >= 0 )
    {
      v36 = 1;
      Destination.Buffer = v55->Buffer;
      Destination.Length = v55->Length;
      Destination.MaximumLength = v55->MaximumLength;
    }
    if ( v36 )
    {
      LocaleName.Buffer = 0LL;
      HIDWORD(Size) = 0;
      goto LABEL_29;
    }
    Destination.Buffer = v68;
    *(_DWORD *)&Destination.Length = 46006272;
    RtlAppendUnicodeToString(&Destination, Source);
    LocaleName.Buffer = (wchar_t *)&v69;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName(v37, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&Destination, &LocaleName);
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
      OverlayFilePath = GetOverlayFilePath(
                          (__int64)LocaleName.Buffer,
                          Destination.Buffer,
                          (__int64)&Size,
                          (__int64)SourceString);
      if ( OverlayFilePath == -1073741789 )
      {
        v30 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
        v10 = v30;
        v54 = v30;
        if ( v30 )
          OverlayFilePath = GetOverlayFilePath(
                              (__int64)LocaleName.Buffer,
                              Destination.Buffer,
                              (__int64)&Size,
                              (__int64)v30);
      }
      if ( OverlayFilePath >= 0 && RtlInitUnicodeStringEx(&v62, v10) >= 0 )
      {
        v22 = DllHandlea;
        appended = LdrMapAndVerifyResourceFile(
                     (__int64)DllHandlea,
                     (__int128 *)&v62,
                     v34,
                     v16,
                     (__int64)LocaleName.Buffer,
                     2,
                     &v50,
                     &v45,
                     (unsigned __int64 *)&v42);
        OverlayFilePath = appended;
        if ( appended >= 0 )
        {
          RtlInitUnicodeStringEx(&Destination, v10);
          goto LABEL_32;
        }
        if ( appended != -1073741772 )
        {
          LOBYTE(v31) = v34;
          LdrpLogMapAndVerifyResourceFileFailure(appended, (unsigned int)&v62, v31, v16, (__int64)&LocaleName);
        }
LABEL_30:
        v23 = LdrMapAndVerifyResourceFile(
                (__int64)v22,
                (__int128 *)&Destination,
                v34,
                v16,
                (__int64)LocaleName.Buffer,
                SHIDWORD(Size),
                &v50,
                &v45,
                (unsigned __int64 *)&v42);
        appended = v23;
        OverlayFilePath = v23;
        if ( (v23 == -1073741766 || v23 == -1073741772) && (unsigned __int8)LdrpGetFileDriverStoreRoot(Source, v24, v68) )
        {
          Destination.Buffer = v68;
          v32 = -1LL;
          do
            ++v32;
          while ( v68[v32] );
          Destination.Length = 2 * v32;
          Destination.MaximumLength = 702;
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &LocaleName);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
          appended = LdrMapAndVerifyResourceFile(
                       (__int64)v22,
                       (__int128 *)&Destination,
                       v34,
                       v16,
                       (__int64)LocaleName.Buffer,
                       SHIDWORD(Size),
                       &v50,
                       &v45,
                       (unsigned __int64 *)&v42);
          OverlayFilePath = appended;
        }
        goto LABEL_32;
      }
LABEL_29:
      v22 = DllHandlea;
      goto LABEL_30;
    }
    appended = -1073741811;
    goto LABEL_76;
  }
  appended = LdrpGetModuleInfoFromVirtualMemory(DllHandlea, Source, (__int64)&BaseAddress, (__int64)&v39, (__int64)&v34);
  OverlayFilePath = appended;
  if ( appended >= 0 )
  {
    v7 = (const wchar_t *)BaseAddress;
    Str = (wchar_t *)BaseAddress;
    goto LABEL_13;
  }
LABEL_67:
  v22 = DllHandlea;
LABEL_32:
  v25 = (__int64)v42;
  if ( !v42 )
    v25 = -1LL;
  v42 = (void *)v25;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v26 = 0;
  else
    v26 = v38;
  if ( v26 )
    LdrpSetAlternateResourceModuleHandle((__int64)v22, &v42, &v50, 0LL, v37, v17 != 0 ? 33 : 1, appended, v45);
  if ( v42 == (void *)-1LL )
  {
    *v53 = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v27 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v27 = 2147353477LL;
    if ( (*(_BYTE *)v27 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v33 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v33 = 2147353476LL;
      LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v33);
    }
    *v53 = v42;
    if ( v56 )
      *v56 = v45;
    appended = 0;
    OverlayFilePath = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    appended = OverlayFilePath;
  }
  if ( v52 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v52);
    appended = OverlayFilePath;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    appended = OverlayFilePath;
  }
  if ( v10 && SourceString != v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return OverlayFilePath;
  }
  return appended;
}
