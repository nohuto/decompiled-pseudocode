/*
 * XREFs of DbgkCreateThread @ 0x1405F8028
 * Callers:
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsCallImageNotifyRoutines @ 0x1405F60F0 (PsCallImageNotifyRoutines.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     PspReferenceSystemDll @ 0x140678CE8 (PspReferenceSystemDll.c)
 *     PsWow64GetProcessNtdllType @ 0x1406795B4 (PsWow64GetProcessNtdllType.c)
 *     PsQuerySystemDllInfo @ 0x14068327C (PsQuerySystemDllInfo.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x1408103A4 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1408127A8 (DbgkpSectionToFileHandle.c)
 */

LONG_PTR __fastcall DbgkCreateThread(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  LONG_PTR result; // rax
  char v5; // r12
  PIMAGE_NT_HEADERS v6; // rax
  int i; // r14d
  LONG_PTR v8; // r15
  PIMAGE_NT_HEADERS v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  void *v12; // rax
  __int16 v13; // ax
  PIMAGE_NT_HEADERS v14; // rax
  bool v15; // [rsp+20h] [rbp-1B8h]
  PVOID Object; // [rsp+28h] [rbp-1B0h] BYREF
  int v17; // [rsp+30h] [rbp-1A8h]
  __int64 v18; // [rsp+38h] [rbp-1A0h]
  _QWORD *v19; // [rsp+40h] [rbp-198h]
  _BYTE v20[8]; // [rsp+48h] [rbp-190h] BYREF
  int v21; // [rsp+50h] [rbp-188h]
  PVOID v22; // [rsp+58h] [rbp-180h]
  int v23; // [rsp+60h] [rbp-178h]
  __int64 SizeOfImage; // [rsp+68h] [rbp-170h]
  int v25; // [rsp+70h] [rbp-168h]
  LONG_PTR v26; // [rsp+80h] [rbp-158h]
  _QWORD v27[12]; // [rsp+90h] [rbp-148h] BYREF

  v19 = a1;
  v2 = a1[23];
  v18 = v2;
  v3 = *(_QWORD *)(v2 + 1064);
  v15 = 0;
  if ( v3 )
  {
    v13 = *(_WORD *)(v3 + 8);
    if ( v13 == 332 || v13 == 452 )
      v15 = 1;
  }
  _m_prefetchw((const void *)(v2 + 772));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 772), 0x400001u);
  v5 = result;
  v17 = result;
  if ( (result & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
  {
    Object = 0LL;
    v21 = 3;
    v22 = *(PVOID *)(v2 + 960);
    SizeOfImage = 0LL;
    v6 = RtlImageNtHeader(v22);
    if ( v6 )
      SizeOfImage = v6->OptionalHeader.SizeOfImage;
    v23 = 0;
    v25 = 0;
    PsReferenceProcessFilePointer(v2, &Object);
    PsCallImageNotifyRoutines(*(_BYTE **)(v2 + 1128), v2, (__int64)v20, (__int64)Object);
    result = ObfDereferenceObject(Object);
    for ( i = 0; ; ++i )
    {
      LODWORD(Object) = i;
      if ( i >= 6 )
        break;
      result = PsQuerySystemDllInfo((unsigned int)i);
      v8 = result;
      v26 = result;
      if ( result )
      {
        if ( i <= 0
          || *(_WORD *)(result + 2)
          && *(_QWORD *)(v2 + 1064)
          && (result = PsWow64GetProcessNtdllType(v2), i == (_DWORD)result) )
        {
          v21 = 3;
          v22 = *(PVOID *)(v8 + 24);
          SizeOfImage = 0LL;
          v9 = RtlImageNtHeader(*(PVOID *)(v8 + 24));
          if ( v9 )
            SizeOfImage = v9->OptionalHeader.SizeOfImage;
          v23 = 0;
          v25 = 0;
          v10 = PspReferenceSystemDll(v8 - 16);
          v11 = MiSectionControlArea(v10);
          v12 = (void *)MiReferenceControlAreaFile(v11);
          Object = v12;
          if ( v10 )
          {
            ObFastDereferenceObject((signed __int64 *)(v8 - 16), v10);
            v12 = Object;
          }
          PsCallImageNotifyRoutines((_BYTE *)(v8 + 8), v2, (__int64)v20, (__int64)v12);
          result = ObfDereferenceObject(Object);
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 1056) )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( (a1[218] & 4) == 0 )
      {
        memset(v27, 0, 0x40uLL);
        LODWORD(v27[6]) = 0;
        v27[7] = a1[210];
        v27[0] = 0x800400018LL;
        LODWORD(v27[5]) = 1;
        DbgkpSendApiMessage((PVOID)v2);
      }
    }
    else
    {
      memset(v27, 0, sizeof(v27));
      LODWORD(v27[10]) = 0;
      LODWORD(v27[6]) = 0;
      v27[7] = DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 952));
      v27[8] = *(_QWORD *)(v2 + 960);
      v27[11] = 0LL;
      v27[9] = 0LL;
      v14 = RtlImageNtHeader(*(PVOID *)(v2 + 960));
      if ( v14 )
      {
        if ( v15 )
          v27[11] = v14->OptionalHeader.AddressOfEntryPoint + HIDWORD(v14->OptionalHeader.ImageBase);
        else
          v27[11] = v14->OptionalHeader.ImageBase + v14->OptionalHeader.AddressOfEntryPoint;
        v27[9] = *(_QWORD *)&v14->FileHeader.PointerToSymbolTable;
      }
      v27[0] = 0x800600038LL;
      LODWORD(v27[5]) = 2;
      DbgkpSendApiMessage((PVOID)v2);
      if ( v27[7] )
        ObCloseHandle((HANDLE)v27[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 437);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages((PVOID)v2, a1, 0LL);
  }
  return result;
}
