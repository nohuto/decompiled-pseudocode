/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180017900
 * Callers:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     LdrLoadAlternateResourceModule @ 0x18007C990 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     sub_18001ABAC @ 0x18001ABAC (sub_18001ABAC.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 *     sub_18007A034 @ 0x18007A034 (sub_18007A034.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C950 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180092520 (wcsrchr.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800D0184 @ 0x1800D0184 (sub_1800D0184.c)
 *     sub_1800E00A8 @ 0x1800E00A8 (sub_1800E00A8.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  PVOID *v6; // r15
  const wchar_t *v8; // rdi
  __int64 v9; // r14
  WCHAR *v10; // rsi
  __int64 v11; // rax
  ULONG v13; // r13d
  ULONG v14; // r12d
  int v15; // eax
  unsigned __int64 v16; // rax
  int appended; // edi
  int v18; // r15d
  const WCHAR *v19; // rdx
  int v20; // edi
  int v21; // r8d
  WCHAR *v22; // rdx
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rax
  WCHAR *i; // rcx
  PVOID Heap; // rax
  __int64 v32; // rax
  WCHAR *v33; // rax
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rcx
  char v37; // [rsp+50h] [rbp-AB8h] BYREF
  int v38; // [rsp+54h] [rbp-AB4h]
  char v39; // [rsp+58h] [rbp-AB0h]
  LANGID v40; // [rsp+5Ah] [rbp-AAEh]
  char v41; // [rsp+5Ch] [rbp-AACh]
  _UNICODE_STRING v42; // [rsp+60h] [rbp-AA8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-A98h] BYREF
  PVOID DllHandlea; // [rsp+78h] [rbp-A90h]
  void *v45; // [rsp+80h] [rbp-A88h] BYREF
  int v46; // [rsp+88h] [rbp-A80h]
  SIZE_T Size; // [rsp+8Ch] [rbp-A7Ch] BYREF
  PVOID *v48; // [rsp+98h] [rbp-A70h]
  ULONG_PTR v49; // [rsp+A0h] [rbp-A68h] BYREF
  _UNICODE_STRING Destination; // [rsp+A8h] [rbp-A60h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+B8h] [rbp-A50h] BYREF
  wchar_t *Str; // [rsp+C8h] [rbp-A40h] BYREF
  PVOID v53; // [rsp+D0h] [rbp-A38h]
  __int64 v54; // [rsp+D8h] [rbp-A30h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-A28h] BYREF
  PVOID v56; // [rsp+E8h] [rbp-A20h] BYREF
  PUNICODE_STRING v57; // [rsp+F0h] [rbp-A18h] BYREF
  WCHAR *v58; // [rsp+F8h] [rbp-A10h]
  PVOID BaseAddress; // [rsp+100h] [rbp-A08h]
  ULONG_PTR *v60; // [rsp+108h] [rbp-A00h]
  int v61; // [rsp+110h] [rbp-9F8h]
  __int64 v62; // [rsp+118h] [rbp-9F0h]
  int v63; // [rsp+120h] [rbp-9E8h]
  _WORD *v64; // [rsp+128h] [rbp-9E0h]
  _UNICODE_STRING DestinationString; // [rsp+130h] [rbp-9D8h] BYREF
  __int64 v66; // [rsp+140h] [rbp-9C8h] BYREF
  int v67; // [rsp+148h] [rbp-9C0h]
  _BYTE v68[64]; // [rsp+150h] [rbp-9B8h] BYREF
  WCHAR Source[352]; // [rsp+190h] [rbp-978h] BYREF
  char v70; // [rsp+450h] [rbp-6B8h] BYREF
  _WORD v71[352]; // [rsp+490h] [rbp-678h] BYREF
  char v72; // [rsp+750h] [rbp-3B8h] BYREF
  WCHAR SourceString[352]; // [rsp+800h] [rbp-308h] BYREF

  v60 = ResourceOffset;
  v6 = ResourceDllBase;
  v48 = ResourceDllBase;
  v40 = LanguageId;
  DllHandlea = DllHandle;
  v55 = 0LL;
  v46 = 0;
  v8 = 0LL;
  Str = 0LL;
  LODWORD(v43) = 0;
  BaseAddress = 0LL;
  v49 = 0LL;
  v57 = 0LL;
  v39 = 0;
  v66 = 72LL;
  v67 = 1;
  memset(v68, 0, 0x38uLL);
  v37 = 0;
  v53 = 0LL;
  v56 = 0LL;
  v41 = 1;
  v9 = 0LL;
  v54 = 0LL;
  v10 = SourceString;
  v58 = SourceString;
  Size = 0x1000002BELL;
  if ( !DllHandle || !v40 || !v6 )
    return -1073741811;
  v11 = sub_18001ABAC(DllHandle);
  if ( v11 == -1 )
  {
    v13 = Flags;
    v14 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v6 = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *v6 = (PVOID)v11;
      if ( ResourceOffset )
        *ResourceOffset = v49;
      v38 = 0;
      return 0;
    }
    v13 = Flags;
    v14 = Flags & 0x400000;
  }
  v45 = 0LL;
  if ( v14 )
  {
    v15 = -1073741767;
  }
  else
  {
    v15 = sub_180054AFC(DllHandlea, Source, (__int64)&Str, (__int64)&v43, (__int64)&v54);
    v8 = Str;
    v9 = v54;
  }
  if ( v15 < 0 )
  {
    appended = sub_180082DD0(DllHandlea, Source, (__int64)&v56, (__int64)&v43, (__int64)&v37);
    v38 = appended;
    if ( appended < 0 )
    {
LABEL_84:
      v23 = (int)DllHandlea;
      goto LABEL_41;
    }
    v8 = (const wchar_t *)v56;
    Str = (wchar_t *)v56;
  }
  v16 = v46 & 0xFFFFFFFE;
  if ( v16 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v16) = 0;
  if ( wcsrchr(v8, 0x7Eu) && (int)sub_1800E00A8(Source, v8) >= 0 )
  {
    v8 = (const wchar_t *)v53;
    Str = (wchar_t *)v53;
    v32 = -1LL;
    do
      ++v32;
    while ( *((_WORD *)v53 + v32) );
    LODWORD(v43) = 2 * v32;
  }
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&LocaleName.Length = 0LL;
  LocaleName.Buffer = 0LL;
  v64 = v71;
  v63 = 46006272;
  v62 = 0LL;
  v61 = 0;
  if ( (unsigned __int64)(unsigned int)v43 + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v43 + 10);
    BaseAddress = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
LABEL_93:
      v38 = appended;
LABEL_94:
      v6 = v48;
      goto LABEL_84;
    }
    Destination.Buffer = (PWCH)Heap;
    Destination.MaximumLength = 2 * (v43 + 5);
    v8 = Str;
    v9 = v54;
  }
  else
  {
    Destination.Buffer = (PWCH)&v70;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  appended = RtlAppendUnicodeToString(&Destination, v8);
  v38 = appended;
  if ( appended < 0 )
    goto LABEL_94;
  v18 = v13 & 0x1000000;
  v19 = L".mun";
  if ( (v13 & 0x1000000) == 0 )
    v19 = L".mui";
  v38 = RtlAppendUnicodeToString(&Destination, v19);
  appended = v38;
  if ( v38 < 0 )
    goto LABEL_94;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v66, v9);
  v20 = sub_1800772D8(&Destination, &v57);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v66);
  if ( v20 >= 0 )
  {
    v39 = 1;
    v42.Buffer = v57->Buffer;
    v42.Length = v57->Length;
    v42.MaximumLength = v57->MaximumLength;
  }
  if ( v39 )
  {
    HIDWORD(Size) = 0;
LABEL_36:
    v23 = (int)DllHandlea;
LABEL_37:
    LOBYTE(v21) = v37;
    v24 = sub_1800598B0(
            v23,
            (unsigned int)&v42,
            v21,
            v13,
            (__int64)LocaleName.Buffer,
            HIDWORD(Size),
            (__int64)&v55,
            (__int64)&v49,
            (__int64)&v45);
    appended = v24;
    v38 = v24;
    if ( !v18 && (v24 == -1073741766 || v24 == -1073741772) && (unsigned __int8)sub_18007A034(Source, v25, v71) )
    {
      v42.Buffer = v71;
      v34 = -1LL;
      do
        ++v34;
      while ( v71[v34] );
      v42.Length = 2 * v34;
      v42.MaximumLength = 702;
      RtlAppendUnicodeToString(&v42, "\\");
      RtlAppendUnicodeStringToString(&v42, &LocaleName);
      RtlAppendUnicodeToString(&v42, "\\");
      RtlAppendUnicodeToString(&v42, Destination.Buffer);
      LOBYTE(v35) = v37;
      appended = sub_1800598B0(
                   v23,
                   (unsigned int)&v42,
                   v35,
                   v13,
                   (__int64)LocaleName.Buffer,
                   HIDWORD(Size),
                   (__int64)&v55,
                   (__int64)&v49,
                   (__int64)&v45);
      v38 = appended;
    }
    goto LABEL_40;
  }
  v42.Buffer = v71;
  *(_DWORD *)&v42.Length = 46006272;
  if ( !v18 )
  {
    v22 = Source;
    goto LABEL_30;
  }
  v29 = -1LL;
  do
    ++v29;
  while ( Source[v29] );
  for ( i = (WCHAR *)&v68[2 * (unsigned int)v29 + 60]; i > Source && *i != 92; --i )
    ;
  if ( i <= Source )
  {
    appended = -1073741686;
    goto LABEL_93;
  }
  i[1] = 0;
  RtlAppendUnicodeToString(&v42, Source);
  v22 = L"SystemResources\\";
LABEL_30:
  RtlAppendUnicodeToString(&v42, v22);
  if ( !v18 )
  {
    LocaleName.Buffer = (PWCH)&v72;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName(v40, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v42, &LocaleName);
      RtlAppendUnicodeToString(&v42, "\\");
      goto LABEL_33;
    }
    appended = -1073741811;
    goto LABEL_93;
  }
LABEL_33:
  RtlAppendUnicodeToString(&v42, Destination.Buffer);
  if ( v18 )
    goto LABEL_36;
  v38 = sub_18005BB70(LocaleName.Buffer, v42.Buffer, &Size, SourceString);
  if ( v38 == -1073741789 )
  {
    v33 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    v10 = v33;
    v58 = v33;
    if ( v33 )
      v38 = sub_18005BB70(LocaleName.Buffer, v42.Buffer, &Size, v33);
  }
  if ( v38 < 0 || RtlInitUnicodeStringEx(&DestinationString, v10) < 0 )
    goto LABEL_36;
  LOBYTE(v21) = v37;
  v23 = (int)DllHandlea;
  appended = sub_1800598B0(
               (_DWORD)DllHandlea,
               (unsigned int)&DestinationString,
               v21,
               v13,
               (__int64)LocaleName.Buffer,
               2,
               (__int64)&v55,
               (__int64)&v49,
               (__int64)&v45);
  v38 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741772 )
    {
      LOBYTE(v21) = v37;
      sub_1800D0184(appended, (unsigned int)&DestinationString, v21, v13, (__int64)&LocaleName);
    }
    goto LABEL_37;
  }
  RtlInitUnicodeStringEx(&v42, v10);
LABEL_40:
  v6 = v48;
LABEL_41:
  v26 = (__int64)v45;
  if ( !v45 )
    v26 = -1LL;
  v45 = (void *)v26;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v27 = 0;
  else
    v27 = v41;
  if ( v27 )
    sub_1800593F0(v23, (unsigned int)&v45, (unsigned int)&v55, 0, v40, v14 != 0 ? 33 : 1, appended, v49);
  if ( v45 == (void *)-1LL )
  {
    *v6 = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v28 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    else
      v28 = 2147353477LL;
    if ( (*(_BYTE *)v28 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v36 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      else
        v36 = 2147353476LL;
      sub_1800E0820(&v42, *(unsigned __int8 *)v36);
    }
    *v6 = v45;
    if ( v60 )
      *v60 = v49;
    appended = 0;
    v38 = 0;
  }
  if ( v56 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v56);
    appended = v38;
  }
  if ( v53 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v53);
    appended = v38;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    appended = v38;
  }
  if ( v10 && SourceString != v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v38;
  }
  return appended;
}
