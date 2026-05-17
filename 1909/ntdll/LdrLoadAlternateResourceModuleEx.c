/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180017900
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800173F0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D030 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     LdrpGetFromMUIMemCache @ 0x18001ABAC (LdrpGetFromMUIMemCache.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetDataModulePath @ 0x180054B9C (LdrpGetDataModulePath.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrMapAndVerifyResourceFile @ 0x180059950 (LdrMapAndVerifyResourceFile.c)
 *     GetOverlayFilePath @ 0x18005BC10 (GetOverlayFilePath.c)
 *     LdrpQuerySxSMUIFile @ 0x180077758 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x18007A6D4 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180083470 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008CFF0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180092BC0 (wcsrchr.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D0244 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0198 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, __int64 *a3, _QWORD *a4, int a5)
{
  __int64 *v6; // r15
  wchar_t *v8; // rdi
  __int64 v9; // r14
  _BYTE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  int v14; // r13d
  int v15; // r12d
  int DataModulePath; // eax
  unsigned __int64 v17; // rax
  int ModuleInfoFromVirtualMemory; // edi
  int v19; // r15d
  wchar_t *v20; // rdx
  int v21; // edi
  int v22; // r8d
  WCHAR *v23; // rdx
  int v24; // r14d
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  WCHAR *i; // rcx
  _WORD *Heap; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r8d
  __int64 v37; // rcx
  char v38[4]; // [rsp+50h] [rbp-AB8h] BYREF
  int appended; // [rsp+54h] [rbp-AB4h]
  char v40; // [rsp+58h] [rbp-AB0h]
  unsigned __int16 v41; // [rsp+5Ah] [rbp-AAEh]
  char v42; // [rsp+5Ch] [rbp-AACh]
  int v43; // [rsp+60h] [rbp-AA8h] BYREF
  _WORD *v44; // [rsp+68h] [rbp-AA0h]
  unsigned int v45; // [rsp+70h] [rbp-A98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-A90h]
  __int64 v47; // [rsp+80h] [rbp-A88h] BYREF
  int v48; // [rsp+88h] [rbp-A80h] BYREF
  unsigned int v49; // [rsp+8Ch] [rbp-A7Ch] BYREF
  int v50; // [rsp+90h] [rbp-A78h]
  __int64 *v51; // [rsp+98h] [rbp-A70h]
  __int64 v52; // [rsp+A0h] [rbp-A68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-A60h] BYREF
  char *v54; // [rsp+B0h] [rbp-A58h]
  __int64 v55; // [rsp+B8h] [rbp-A50h] BYREF
  char *v56; // [rsp+C0h] [rbp-A48h]
  wchar_t *Str; // [rsp+C8h] [rbp-A40h] BYREF
  wchar_t *v58; // [rsp+D0h] [rbp-A38h]
  __int64 v59; // [rsp+D8h] [rbp-A30h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-A28h] BYREF
  wchar_t *v61; // [rsp+E8h] [rbp-A20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-A18h] BYREF
  _BYTE *v63; // [rsp+F8h] [rbp-A10h]
  _WORD *v64; // [rsp+100h] [rbp-A08h]
  _QWORD *v65; // [rsp+108h] [rbp-A00h]
  int v66; // [rsp+110h] [rbp-9F8h] BYREF
  __int64 v67; // [rsp+118h] [rbp-9F0h]
  int v68; // [rsp+120h] [rbp-9E8h] BYREF
  _WORD *v69; // [rsp+128h] [rbp-9E0h]
  _BYTE v70[16]; // [rsp+130h] [rbp-9D8h] BYREF
  __int64 v71; // [rsp+140h] [rbp-9C8h] BYREF
  int v72; // [rsp+148h] [rbp-9C0h]
  _BYTE v73[64]; // [rsp+150h] [rbp-9B8h] BYREF
  WCHAR SourceString[352]; // [rsp+190h] [rbp-978h] BYREF
  char v75; // [rsp+450h] [rbp-6B8h] BYREF
  _WORD v76[352]; // [rsp+490h] [rbp-678h] BYREF
  char v77; // [rsp+750h] [rbp-3B8h] BYREF
  _BYTE v78[704]; // [rsp+800h] [rbp-308h] BYREF

  v65 = a4;
  v6 = a3;
  v51 = a3;
  v41 = a2;
  v46 = a1;
  v60 = 0LL;
  v48 = 0;
  v8 = 0LL;
  Str = 0LL;
  v45 = 0;
  v64 = 0LL;
  v52 = 0LL;
  v62 = 0LL;
  v40 = 0;
  v71 = 72LL;
  v72 = 1;
  memset(v73, 0, 0x38uLL);
  v38[0] = 0;
  v58 = 0LL;
  v61 = 0LL;
  v42 = 1;
  v9 = 0LL;
  v59 = 0LL;
  v10 = v78;
  v63 = v78;
  v49 = 702;
  v50 = 1;
  if ( !a1 || !v41 || !v6 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, v41, &v52, 4LL);
  if ( v11 == -1 )
  {
    v14 = a5;
    v15 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v6 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *v6 = v11;
      if ( a4 )
        *a4 = v52;
      appended = 0;
      return 0LL;
    }
    v14 = a5;
    v15 = a5 & 0x400000;
  }
  v47 = 0LL;
  if ( v15 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v46, SourceString, v12, &v48, &Str, &v45, &v59);
    v8 = Str;
    v9 = v59;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v46, SourceString, 702LL, &v48, &v61, &v45, v38);
    appended = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
    {
LABEL_84:
      v24 = v46;
      goto LABEL_41;
    }
    v8 = v61;
    Str = v61;
  }
  v17 = v48 & 0xFFFFFFFE;
  if ( v17 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + v17) = 0;
  if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v8) >= 0 )
  {
    v8 = v58;
    Str = v58;
    v33 = -1LL;
    do
      ++v33;
    while ( v58[v33] );
    v45 = 2 * v33;
  }
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v69 = v76;
  v68 = 46006272;
  v67 = 0LL;
  v66 = 0;
  if ( (unsigned __int64)v45 + 12 > 0x3C )
  {
    Heap = (_WORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2LL * v45 + 10);
    v64 = Heap;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_93:
      appended = ModuleInfoFromVirtualMemory;
LABEL_94:
      v6 = v51;
      goto LABEL_84;
    }
    v54 = (char *)Heap;
    WORD1(v53) = 2 * (v45 + 5);
    v8 = Str;
    v9 = v59;
  }
  else
  {
    v54 = &v75;
    WORD1(v53) = 60;
  }
  LOWORD(v53) = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString((unsigned __int16 *)&v53, v8);
  appended = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_94;
  v19 = v14 & 0x1000000;
  v20 = L".mun";
  if ( (v14 & 0x1000000) == 0 )
    v20 = L".mui";
  appended = RtlAppendUnicodeToString((unsigned __int16 *)&v53, v20);
  ModuleInfoFromVirtualMemory = appended;
  if ( appended < 0 )
    goto LABEL_94;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v71, v9);
  v21 = LdrpQuerySxSMUIFile(&v53, v41, &v68, &v66, &v62);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v71);
  if ( v21 >= 0 )
  {
    v40 = 1;
    v44 = *(_WORD **)(v62 + 8);
    v43 = *(_DWORD *)v62;
  }
  if ( v40 )
  {
    v50 = 0;
LABEL_36:
    v24 = v46;
LABEL_37:
    LOBYTE(v22) = v38[0];
    v25 = LdrMapAndVerifyResourceFile(
            v24,
            (unsigned int)&v43,
            v22,
            v14,
            (__int64)v56,
            v50,
            (__int64)&v60,
            (__int64)&v52,
            (__int64)&v47);
    ModuleInfoFromVirtualMemory = v25;
    appended = v25;
    if ( !v19
      && (v25 == -1073741766 || v25 == -1073741772)
      && (unsigned __int8)LdrpGetFileDriverStoreRoot(SourceString, v26, v76) )
    {
      v44 = v76;
      v35 = -1LL;
      do
        ++v35;
      while ( v76[v35] );
      LOWORD(v43) = 2 * v35;
      HIWORD(v43) = 702;
      RtlAppendUnicodeToString((unsigned __int16 *)&v43, L"\\");
      RtlAppendUnicodeStringToString(&v43, &v55);
      RtlAppendUnicodeToString((unsigned __int16 *)&v43, L"\\");
      RtlAppendUnicodeToString((unsigned __int16 *)&v43, v54);
      LOBYTE(v36) = v38[0];
      ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                      v24,
                                      (unsigned int)&v43,
                                      v36,
                                      v14,
                                      (__int64)v56,
                                      v50,
                                      (__int64)&v60,
                                      (__int64)&v52,
                                      (__int64)&v47);
      appended = ModuleInfoFromVirtualMemory;
    }
    goto LABEL_40;
  }
  v44 = v76;
  v43 = 46006272;
  if ( !v19 )
  {
    v23 = SourceString;
    goto LABEL_30;
  }
  v30 = -1LL;
  do
    ++v30;
  while ( SourceString[v30] );
  for ( i = (WCHAR *)&v73[2 * (unsigned int)v30 + 60]; i > SourceString && *i != 92; --i )
    ;
  if ( i <= SourceString )
  {
    ModuleInfoFromVirtualMemory = -1073741686;
    goto LABEL_93;
  }
  i[1] = 0;
  RtlAppendUnicodeToString((unsigned __int16 *)&v43, SourceString);
  v23 = L"SystemResources\\";
LABEL_30:
  RtlAppendUnicodeToString((unsigned __int16 *)&v43, v23);
  if ( !v19 )
  {
    v56 = &v77;
    WORD1(v55) = 170;
    if ( (int)RtlLcidToLocaleName(v41, (__int64)&v55, 2, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v43, &v55);
      RtlAppendUnicodeToString((unsigned __int16 *)&v43, L"\\");
      goto LABEL_33;
    }
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_93;
  }
LABEL_33:
  RtlAppendUnicodeToString((unsigned __int16 *)&v43, v54);
  if ( v19 )
    goto LABEL_36;
  appended = GetOverlayFilePath(v56, v44, &v49, v78);
  if ( appended == -1073741789 )
  {
    v34 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v49);
    v10 = (_BYTE *)v34;
    v63 = (_BYTE *)v34;
    if ( v34 )
      appended = GetOverlayFilePath(v56, v44, &v49, v34);
  }
  if ( appended < 0 || (int)RtlInitUnicodeStringEx(v70, v10) < 0 )
    goto LABEL_36;
  LOBYTE(v22) = v38[0];
  v24 = v46;
  ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                  v46,
                                  (unsigned int)v70,
                                  v22,
                                  v14,
                                  (__int64)v56,
                                  2,
                                  (__int64)&v60,
                                  (__int64)&v52,
                                  (__int64)&v47);
  appended = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
  {
    if ( ModuleInfoFromVirtualMemory != -1073741772 )
    {
      LOBYTE(v22) = v38[0];
      LdrpLogMapAndVerifyResourceFileFailure(ModuleInfoFromVirtualMemory, (unsigned int)v70, v22, v14, (__int64)&v55);
    }
    goto LABEL_37;
  }
  RtlInitUnicodeStringEx(&v43, v10);
LABEL_40:
  v6 = v51;
LABEL_41:
  v27 = v47;
  if ( !v47 )
    v27 = -1LL;
  v47 = v27;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v28 = 0;
  }
  else
  {
    v28 = v42;
  }
  if ( v28 )
    LdrpSetAlternateResourceModuleHandle(
      v24,
      (unsigned int)&v47,
      (unsigned int)&v60,
      0,
      v41,
      v15 != 0 ? 33 : 1,
      ModuleInfoFromVirtualMemory,
      v52);
  if ( v47 == -1 )
  {
    *v6 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v29 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v29 = 2147353477LL;
    if ( (*(_BYTE *)v29 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v37 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v37 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v37);
    }
    *v6 = v47;
    if ( v65 )
      *v65 = v52;
    ModuleInfoFromVirtualMemory = 0;
    appended = 0;
  }
  if ( v61 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v61);
    ModuleInfoFromVirtualMemory = appended;
  }
  if ( v58 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v58);
    ModuleInfoFromVirtualMemory = appended;
  }
  if ( v64 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v64);
    ModuleInfoFromVirtualMemory = appended;
  }
  if ( v10 && v78 != v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
    return (unsigned int)appended;
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
