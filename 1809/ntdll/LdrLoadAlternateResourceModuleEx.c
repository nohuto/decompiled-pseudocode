/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18003E950
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x1800815E0 (LdrLoadAlternateResourceModule.c)
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
 *     LdrpGetFileDriverStoreRoot @ 0x18007FA78 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008F554 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090060 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180095C80 (wcsrchr.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D1A74 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E25E8 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  wchar_t *v7; // rdi
  unsigned __int64 v8; // r12
  wchar_t *v9; // r14
  _BYTE *v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v16; // r13d
  int v17; // r15d
  int DataModulePath; // eax
  unsigned __int64 v19; // rax
  int appended; // edi
  int v21; // edi
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  wchar_t *Heap; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34[4]; // [rsp+50h] [rbp-AB8h] BYREF
  int OverlayFilePath; // [rsp+54h] [rbp-AB4h]
  char v36; // [rsp+58h] [rbp-AB0h]
  unsigned __int16 v37; // [rsp+5Ah] [rbp-AAEh]
  char v38; // [rsp+5Ch] [rbp-AACh]
  unsigned int v39; // [rsp+60h] [rbp-AA8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-AA0h] BYREF
  __int64 v41; // [rsp+78h] [rbp-A90h]
  __int64 v42; // [rsp+80h] [rbp-A88h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-A80h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-A7Ch] BYREF
  int v45; // [rsp+90h] [rbp-A78h]
  __int64 v46; // [rsp+98h] [rbp-A70h] BYREF
  UNICODE_STRING v47; // [rsp+A0h] [rbp-A68h] BYREF
  wchar_t *Str; // [rsp+B0h] [rbp-A58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-A50h] BYREF
  wchar_t *v50; // [rsp+C8h] [rbp-A40h] BYREF
  HANDLE v51; // [rsp+D0h] [rbp-A38h] BYREF
  wchar_t *v52; // [rsp+D8h] [rbp-A30h] BYREF
  wchar_t *v53; // [rsp+E0h] [rbp-A28h]
  _QWORD *v54; // [rsp+E8h] [rbp-A20h]
  _BYTE *v55; // [rsp+F0h] [rbp-A18h]
  __int64 v56; // [rsp+F8h] [rbp-A10h] BYREF
  _QWORD *v57; // [rsp+100h] [rbp-A08h]
  wchar_t *v58; // [rsp+108h] [rbp-A00h]
  int v59; // [rsp+110h] [rbp-9F8h] BYREF
  __int64 v60; // [rsp+118h] [rbp-9F0h]
  int v61; // [rsp+120h] [rbp-9E8h] BYREF
  _WORD *v62; // [rsp+128h] [rbp-9E0h]
  __int128 v63; // [rsp+130h] [rbp-9D8h] BYREF
  __int64 v64; // [rsp+140h] [rbp-9C8h] BYREF
  int v65; // [rsp+148h] [rbp-9C0h]
  _BYTE v66[56]; // [rsp+150h] [rbp-9B8h] BYREF
  char v67; // [rsp+190h] [rbp-978h] BYREF
  WCHAR SourceString[352]; // [rsp+1D0h] [rbp-938h] BYREF
  _WORD v69[352]; // [rsp+490h] [rbp-678h] BYREF
  char v70; // [rsp+750h] [rbp-3B8h] BYREF
  _BYTE v71[704]; // [rsp+800h] [rbp-308h] BYREF

  v57 = a4;
  v54 = a3;
  v37 = a2;
  v41 = a1;
  v51 = 0LL;
  v43 = 0;
  v7 = 0LL;
  Str = 0LL;
  v39 = 0;
  v8 = 0LL;
  v58 = 0LL;
  v46 = 0LL;
  v56 = 0LL;
  v36 = 0;
  v64 = 72LL;
  v65 = 1;
  memset(v66, 0, sizeof(v66));
  v34[0] = 0;
  v53 = 0LL;
  v52 = 0LL;
  v38 = 1;
  v9 = 0LL;
  v50 = 0LL;
  v10 = v71;
  v55 = v71;
  v44 = 702;
  v45 = 1;
  if ( !a1 || !v37 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, v37, &v46, 4);
  v14 = -1LL;
  if ( v11 == (_DWORD *)-1LL )
  {
    v16 = a5;
    v17 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v54 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = v11;
      if ( v57 )
        *v57 = v46;
      OverlayFilePath = 0;
      return 0LL;
    }
    v16 = a5;
    v17 = a5 & 0x400000;
  }
  v42 = 0LL;
  if ( v17 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v41, SourceString, v13, &v43, &Str, &v39, &v50);
    v7 = Str;
    v9 = v50;
  }
  if ( DataModulePath >= 0 )
  {
LABEL_13:
    v19 = v43 & 0xFFFFFFFE;
    if ( v19 >= 0x2BE )
      _report_rangecheckfailure(v14, v12, v13);
    *(WCHAR *)((char *)SourceString + v19) = 0;
    if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v7) >= 0 )
    {
      v7 = v53;
      Str = v53;
      v29 = -1LL;
      do
        ++v29;
      while ( v53[v29] );
      v39 = 2 * v29;
    }
    RtlInitUnicodeString(&DestinationString, 0LL);
    RtlInitUnicodeString(&v47, 0LL);
    v62 = v69;
    v61 = 46006272;
    v60 = 0LL;
    v59 = 0;
    if ( (unsigned __int64)v39 + 12 > 0x3C )
    {
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v39 + 10);
      v8 = (unsigned __int64)Heap;
      v58 = Heap;
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
      v9 = v50;
    }
    else
    {
      DestinationString.Buffer = (wchar_t *)&v67;
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
      RtlActivateActivationContextUnsafeFast((__int64)&v64, (__int64)v9);
    v21 = LdrpQuerySxSMUIFile(&DestinationString, v37, &v61, &v59, &v56);
    if ( v9 )
      RtlDeactivateActivationContextUnsafeFast((__int64)&v64);
    if ( v21 >= 0 )
    {
      v36 = 1;
      *((_QWORD *)&v40 + 1) = *(_QWORD *)(v56 + 8);
      LODWORD(v40) = *(_DWORD *)v56;
    }
    if ( v36 )
    {
      v47.Buffer = 0LL;
      v45 = 0;
      goto LABEL_29;
    }
    *((_QWORD *)&v40 + 1) = v69;
    LODWORD(v40) = 46006272;
    RtlAppendUnicodeToString(&v40, SourceString);
    v47.Buffer = (wchar_t *)&v70;
    v47.MaximumLength = 170;
    if ( (int)RtlLcidToLocaleName(v37, &v47, 2LL, 0LL) >= 0 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v40, (__int16 *)&v47);
      RtlAppendUnicodeToString(&v40, L"\\");
      RtlAppendUnicodeToString(&v40, DestinationString.Buffer);
      OverlayFilePath = GetOverlayFilePath((__int64)v47.Buffer, *((__int64 *)&v40 + 1), (__int64)&v44, (__int64)v71);
      if ( OverlayFilePath == -1073741789 )
      {
        v30 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v44);
        v10 = (_BYTE *)v30;
        v55 = (_BYTE *)v30;
        if ( v30 )
          OverlayFilePath = GetOverlayFilePath((__int64)v47.Buffer, *((__int64 *)&v40 + 1), (__int64)&v44, v30);
      }
      if ( OverlayFilePath >= 0 && (int)RtlInitUnicodeStringEx((__int64)&v63, (__int64)v10) >= 0 )
      {
        v22 = v41;
        appended = LdrMapAndVerifyResourceFile(v41, &v63, v34[0], v16, (__int64)v47.Buffer, 2, &v51, &v46, &v42);
        OverlayFilePath = appended;
        if ( appended >= 0 )
        {
          RtlInitUnicodeStringEx((__int64)&v40, (__int64)v10);
          goto LABEL_32;
        }
        if ( appended != -1073741772 )
        {
          LOBYTE(v31) = v34[0];
          LdrpLogMapAndVerifyResourceFileFailure(appended, (unsigned int)&v63, v31, v16, (__int64)&v47);
        }
LABEL_30:
        v23 = LdrMapAndVerifyResourceFile(v22, &v40, v34[0], v16, (__int64)v47.Buffer, v45, &v51, &v46, &v42);
        appended = v23;
        OverlayFilePath = v23;
        if ( (v23 == -1073741766 || v23 == -1073741772)
          && (unsigned __int8)LdrpGetFileDriverStoreRoot(SourceString, v24, v69) )
        {
          *((_QWORD *)&v40 + 1) = v69;
          v32 = -1LL;
          do
            ++v32;
          while ( v69[v32] );
          LOWORD(v40) = 2 * v32;
          WORD1(v40) = 702;
          RtlAppendUnicodeToString(&v40, L"\\");
          RtlAppendUnicodeStringToString((unsigned __int16 *)&v40, (__int16 *)&v47);
          RtlAppendUnicodeToString(&v40, L"\\");
          RtlAppendUnicodeToString(&v40, DestinationString.Buffer);
          appended = LdrMapAndVerifyResourceFile(v22, &v40, v34[0], v16, (__int64)v47.Buffer, v45, &v51, &v46, &v42);
          OverlayFilePath = appended;
        }
        goto LABEL_32;
      }
LABEL_29:
      v22 = v41;
      goto LABEL_30;
    }
    appended = -1073741811;
    goto LABEL_76;
  }
  appended = LdrpGetModuleInfoFromVirtualMemory(v41, SourceString, 702LL, &v43, &v52, &v39, v34);
  OverlayFilePath = appended;
  if ( appended >= 0 )
  {
    v7 = v52;
    Str = v52;
    goto LABEL_13;
  }
LABEL_67:
  v22 = v41;
LABEL_32:
  v25 = v42;
  if ( !v42 )
    v25 = -1LL;
  v42 = v25;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v26 = 0;
  else
    v26 = v38;
  if ( v26 )
    LdrpSetAlternateResourceModuleHandle(
      v22,
      &v42,
      (unsigned __int64 *)&v51,
      0LL,
      v37,
      v17 != 0 ? 33 : 1,
      appended,
      v46);
  if ( v42 == -1 )
  {
    *v54 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v27 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v27 = 2147353477LL;
    if ( (*(_BYTE *)v27 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v33 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v33 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v40, *(unsigned __int8 *)v33);
    }
    *v54 = v42;
    if ( v57 )
      *v57 = v46;
    appended = 0;
    OverlayFilePath = 0;
  }
  if ( v52 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
    appended = OverlayFilePath;
  }
  if ( v53 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v53);
    appended = OverlayFilePath;
  }
  if ( v8 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    appended = OverlayFilePath;
  }
  if ( v10 && v71 != v10 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
    return (unsigned int)OverlayFilePath;
  }
  return (unsigned int)appended;
}
