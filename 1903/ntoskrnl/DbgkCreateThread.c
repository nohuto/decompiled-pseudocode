/*
 * XREFs of DbgkCreateThread @ 0x1405E6E8C
 * Callers:
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsQuerySystemDllInfo @ 0x1405C992C (PsQuerySystemDllInfo.c)
 *     PsCallImageNotifyRoutines @ 0x1405EB900 (PsCallImageNotifyRoutines.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsReferenceProcessFilePointer @ 0x140619870 (PsReferenceProcessFilePointer.c)
 *     PspReferenceSystemDll @ 0x140678EE4 (PspReferenceSystemDll.c)
 *     PsWow64GetProcessNtdllType @ 0x140679EDC (PsWow64GetProcessNtdllType.c)
 *     MmGetFileObjectForSection @ 0x14068A83C (MmGetFileObjectForSection.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140848A68 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x14084A5AC (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14084AFC8 (DbgkpSectionToFileHandle.c)
 */

LONG_PTR __fastcall DbgkCreateThread(_QWORD *a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rax
  char v4; // r12
  LONG_PTR result; // rax
  char v6; // r13
  PIMAGE_NT_HEADERS v7; // rax
  int i; // esi
  LONG_PTR v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  PVOID FileObjectForSection; // rax
  __int16 v12; // ax
  PIMAGE_NT_HEADERS v13; // rax
  char v14; // [rsp+20h] [rbp-1B8h]
  int v15; // [rsp+20h] [rbp-1B8h]
  PVOID Object; // [rsp+28h] [rbp-1B0h] BYREF
  int v17; // [rsp+30h] [rbp-1A8h]
  ULONG_PTR v18; // [rsp+38h] [rbp-1A0h]
  _QWORD *v19; // [rsp+40h] [rbp-198h]
  LONG_PTR v20; // [rsp+48h] [rbp-190h]
  PVOID v21[8]; // [rsp+50h] [rbp-188h] BYREF
  _QWORD v22[34]; // [rsp+90h] [rbp-148h] BYREF

  v19 = a1;
  memset(v22, 0, sizeof(v22));
  v2 = a1[23];
  v18 = v2;
  v3 = *(_QWORD *)(v2 + 1064);
  if ( v3 && ((v12 = *(_WORD *)(v3 + 8), v12 == 332) || v12 == 452) )
  {
    v4 = 1;
    v14 = 1;
  }
  else
  {
    v4 = 0;
    v14 = 0;
  }
  _m_prefetchw((const void *)(v2 + 780));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 780), 0x400001u);
  v6 = result;
  v17 = result;
  if ( (result & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
  {
    memset(v21, 0, 0x38uLL);
    Object = 0LL;
    LOBYTE(v21[1]) = 3;
    v21[2] = *(PVOID *)(v2 + 968);
    v21[4] = 0LL;
    v7 = RtlImageNtHeader(v21[2]);
    if ( v7 )
      v21[4] = (PVOID)v7->OptionalHeader.SizeOfImage;
    LODWORD(v21[3]) = 0;
    LODWORD(v21[5]) = 0;
    PsReferenceProcessFilePointer(v2, &Object);
    PsCallImageNotifyRoutines(*(_QWORD *)(v2 + 1128), v2, v21, Object, v14);
    result = ObfDereferenceObject(Object);
    for ( i = 0; ; ++i )
    {
      LODWORD(Object) = i;
      if ( i >= 6 )
        break;
      result = PsQuerySystemDllInfo(i);
      v9 = result;
      v20 = result;
      if ( result )
      {
        if ( i <= 0
          || *(_WORD *)(result + 2)
          && *(_QWORD *)(v2 + 1064)
          && (result = PsWow64GetProcessNtdllType(v2), i == (_DWORD)result) )
        {
          LODWORD(v21[1]) = 3;
          v21[2] = *(PVOID *)(v9 + 24);
          v21[4] = 0LL;
          v10 = RtlImageNtHeader(*(PVOID *)(v9 + 24));
          if ( v10 )
            v21[4] = (PVOID)v10->OptionalHeader.SizeOfImage;
          LODWORD(v21[3]) = 0;
          LODWORD(v21[5]) = 0;
          v20 = PspReferenceSystemDll(v9 - 16);
          FileObjectForSection = (PVOID)MmGetFileObjectForSection(v20);
          Object = FileObjectForSection;
          if ( v20 )
          {
            ObFastDereferenceObject((signed __int64 *)(v9 - 16), v20);
            FileObjectForSection = Object;
          }
          PsCallImageNotifyRoutines(v9 + 8, v2, v21, FileObjectForSection, v15);
          result = ObfDereferenceObject(Object);
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 1056) )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( (a1[220] & 4) == 0 )
      {
        memset(v22, 0, 0x40uLL);
        v22[7] = a1[212];
        v22[0] = 0x800400018LL;
        LODWORD(v22[5]) = 1;
        DbgkpSendApiMessage(v2);
      }
    }
    else
    {
      memset(v22, 0, 0x60uLL);
      v22[7] = DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 960));
      v22[8] = *(_QWORD *)(v2 + 968);
      v22[11] = 0LL;
      v22[9] = 0LL;
      v13 = RtlImageNtHeader(*(PVOID *)(v2 + 968));
      if ( v13 )
      {
        if ( v4 )
          v22[11] = v13->OptionalHeader.AddressOfEntryPoint + HIDWORD(v13->OptionalHeader.ImageBase);
        else
          v22[11] = v13->OptionalHeader.ImageBase + v13->OptionalHeader.AddressOfEntryPoint;
        v22[9] = *(_QWORD *)&v13->FileHeader.PointerToSymbolTable;
      }
      v22[0] = 0x800600038LL;
      LODWORD(v22[5]) = 2;
      DbgkpSendApiMessage(v2);
      if ( v22[7] )
        ObCloseHandle((HANDLE)v22[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 441);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages((PVOID)v2, a1, 0LL);
  }
  return result;
}
