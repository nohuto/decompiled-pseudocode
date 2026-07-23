/*
 * XREFs of LdrpResGetResourceDirectory @ 0x180057270
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x180059350 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseOfImage,
        ULONG64 a2,
        __int16 a3,
        _QWORD *a4,
        PIMAGE_NT_HEADERS *a5)
{
  char v7; // r13
  char v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  char v12; // r12
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v14; // r10
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  char *v18; // rdx
  int v19; // r12d
  ULONG64 v20; // r13
  unsigned int *v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-168h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-158h] BYREF
  char *v28; // [rsp+48h] [rbp-150h]
  int v29; // [rsp+50h] [rbp-148h] BYREF
  const wchar_t *v30; // [rsp+58h] [rbp-140h]
  int v31; // [rsp+60h] [rbp-138h] BYREF
  const wchar_t *v32; // [rsp+68h] [rbp-130h]
  __int128 v33; // [rsp+70h] [rbp-128h]
  __int128 v34; // [rsp+80h] [rbp-118h]
  __int128 v35; // [rsp+90h] [rbp-108h]
  __int128 v36; // [rsp+A0h] [rbp-F8h]
  __int128 v37; // [rsp+B0h] [rbp-E8h]
  __int128 v38; // [rsp+C0h] [rbp-D8h]
  __int128 v39; // [rsp+D0h] [rbp-C8h]
  __int128 v40; // [rsp+E0h] [rbp-B8h]
  __int128 v41; // [rsp+F0h] [rbp-A8h]
  __int128 v42; // [rsp+100h] [rbp-98h]
  __int128 v43; // [rsp+110h] [rbp-88h]
  __int128 v44; // [rsp+120h] [rbp-78h]
  __int128 v45; // [rsp+130h] [rbp-68h]
  __int128 v46; // [rsp+140h] [rbp-58h]
  __int128 v47; // [rsp+150h] [rbp-48h]
  int v49; // [rsp+1B0h] [rbp+18h]

  v7 = 1;
  v8 = 1;
  v29 = 4456514;
  v30 = L"LdrpResGetResourceDirectory Enter";
  v31 = 4325440;
  v32 = L"LdrpResGetResourceDirectory Exit";
  v9 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    v7 = 1;
  }
  else
  {
    v10 = 2147353477LL;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v11 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->SharedData + 554;
      v7 = 1;
    }
    else
    {
      v25 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(&v29, *(unsigned __int8 *)v25);
  }
  else
  {
    v11 = 2147353476LL;
  }
  if ( !BaseOfImage || !a4 || !a5 )
    return -1073741811;
  if ( (BaseOfImage & 3) != 0 )
  {
    v12 = BaseOfImage & 1;
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
    v8 = v12 ^ 1;
  }
  v49 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v49 == 0, (PVOID)BaseOfImage, a2, &OutHeaders);
  if ( result >= 0 )
  {
    v14 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      v33 = *(_OWORD *)&p_OptionalHeader->Magic;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v43 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v44 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v45 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v46 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
    }
    else
    {
      if ( p_OptionalHeader->Magic != 523 )
      {
        v26 = -1073741701;
        goto LABEL_42;
      }
      v33 = *(_OWORD *)&p_OptionalHeader->Magic;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v43 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v44 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v45 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v46 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v47 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v7 = 0;
    }
    v16 = HIDWORD(v39);
    if ( v7 )
      v16 = HIDWORD(v38);
    if ( v16 <= 2 )
    {
      v26 = -1073741687;
    }
    else
    {
      v17 = v41;
      if ( v7 )
        v17 = v40;
      if ( v17 )
      {
        if ( v8 || v17 < HIDWORD(v36) )
        {
          v18 = (char *)(BaseOfImage + v17);
          if ( (unsigned __int64)v18 < BaseOfImage )
          {
            v26 = -1073741701;
            goto LABEL_42;
          }
          v28 = (char *)(BaseOfImage + v17);
          v19 = v49;
          v20 = a2;
        }
        else
        {
          v19 = v49;
          v20 = a2;
          v21 = (unsigned int *)LdrpSectionTableFromVirtualAddress(
                                  BaseOfImage,
                                  a2,
                                  (_DWORD)OutHeaders,
                                  0,
                                  v17,
                                  v49 != 0);
          if ( !v21 )
          {
            v26 = -1073741701;
            goto LABEL_42;
          }
          if ( !v21[4] )
          {
            v26 = -1073741687;
            goto LABEL_42;
          }
          v18 = (char *)(BaseOfImage + v21[5] - (unsigned __int64)v21[3] + v17);
          v28 = v18;
          v14 = OutHeaders;
        }
        if ( !v18 )
        {
          v26 = -1073741687;
          goto LABEL_42;
        }
        if ( !v19 )
          goto LABEL_41;
        if ( (unsigned __int64)v18 <= BaseOfImage )
          goto LABEL_47;
        v22 = (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) + v20;
        if ( (unsigned __int64)(v18 + 16) > v22 )
          goto LABEL_47;
        v23 = *((_WORD *)v18 + 6);
        v24 = *((_WORD *)v18 + 7);
        if ( !v23 && !v24 )
        {
          v26 = -1073741686;
          goto LABEL_42;
        }
        if ( (unsigned __int64)&v18[8 * v23 + 8 * v24] > v22 )
        {
LABEL_47:
          v26 = -1073741701;
        }
        else
        {
LABEL_41:
          *a4 = v18;
          *a5 = v14;
          v26 = 0;
        }
      }
      else
      {
        v26 = -1073741687;
      }
    }
LABEL_42:
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&v31, *(unsigned __int8 *)v11);
    }
    return v26;
  }
  return result;
}
