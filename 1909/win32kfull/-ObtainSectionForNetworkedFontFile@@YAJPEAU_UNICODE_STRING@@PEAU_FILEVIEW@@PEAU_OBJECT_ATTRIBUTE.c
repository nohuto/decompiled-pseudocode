/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0285E7C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0122DDC (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0095D40 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ZwWin32CreateSection @ 0x1C012322C (ZwWin32CreateSection.c)
 *     ZwWin32CreateSectionRetainHandle @ 0x1C0123280 (ZwWin32CreateSectionRetainHandle.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C0286190 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C0286728 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

__int64 __fastcall ObtainSectionForNetworkedFontFile(
        PCUNICODE_STRING SourceString,
        struct _FILEVIEW *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        bool a5)
{
  unsigned int v6; // r12d
  int SectionRetainHandle; // esi
  HANDLE *v9; // rax
  HANDLE *SectionHandle; // rdi
  unsigned int v11; // edi
  struct _UNICODE_STRING *v12; // rbx
  HANDLE *inserted; // rax
  void **v14; // r15
  __int64 v15; // rdx
  int v16; // edx
  unsigned int v17; // ecx
  int v19; // [rsp+28h] [rbp-69h]
  int v20; // [rsp+28h] [rbp-69h]
  void *v21; // [rsp+38h] [rbp-59h]
  void *v22; // [rsp+38h] [rbp-59h]
  int v23; // [rsp+40h] [rbp-51h]
  PVOID Object; // [rsp+50h] [rbp-41h] BYREF
  __int64 v25; // [rsp+58h] [rbp-39h] BYREF
  PVOID v26; // [rsp+60h] [rbp-31h] BYREF
  int v27[2]; // [rsp+68h] [rbp-29h]
  _BYTE Buffer[40]; // [rsp+70h] [rbp-21h] BYREF

  *(_QWORD *)v27 = a4;
  v6 = -1073741823;
  Object = a3;
  SectionRetainHandle = -1073741823;
  v25 = *(_QWORD *)gpxsGlobals;
  GreAcquireSemaphore(v25);
  memset(Buffer, 0, sizeof(Buffer));
  RtlInitUnicodeStringEx((PUNICODE_STRING)&Buffer[16], SourceString->Buffer);
  v9 = (HANDLE *)RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), Buffer);
  SectionHandle = v9;
  if ( v9 )
  {
    ++*((_DWORD *)v9 + 8);
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    GreEnterCriticalRegionAndAcquirePushLockShared(SectionHandle + 1);
    GreLeaveCriticalRegionAndReleasePushLockShared(SectionHandle + 1);
    if ( *SectionHandle )
    {
      SectionRetainHandle = ObReferenceObjectByHandle(*SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &v26, 0LL);
      *((_QWORD *)a2 + 4) = v26;
      if ( SectionRetainHandle >= 0 )
        goto LABEL_21;
    }
    bUnreferenceNetworkedFontFileNode(SectionHandle);
LABEL_20:
    if ( SectionRetainHandle < 0 )
    {
LABEL_23:
      v6 = SectionRetainHandle;
      goto LABEL_24;
    }
LABEL_21:
    v17 = *((_DWORD *)a2 + 10) & 0xFFFFFFFB | (4 * a5);
    *((_QWORD *)a2 + 7) = SectionHandle;
    *((_DWORD *)a2 + 10) = v17;
    if ( (v17 & 4) == 0 )
    {
      ZwClose(*((HANDLE *)a2 + 6));
      *((_QWORD *)a2 + 6) = 0LL;
    }
    goto LABEL_23;
  }
  v11 = 2 * SourceString->Length + 36;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v26, v11);
  v12 = (struct _UNICODE_STRING *)v26;
  if ( v26 )
  {
    *((_DWORD *)v26 + 8) = 1;
    v12[1].Buffer = &v12[2].MaximumLength + 1;
    v12[1].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(v12 + 1, SourceString);
    inserted = (HANDLE *)RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), v12, v11, 0LL);
    SectionHandle = inserted;
    if ( inserted )
    {
      inserted[3] = (char *)inserted + 36;
      GreInitializePushLock(inserted + 1);
      GreEnterCriticalRegionAndAcquirePushLockExclusive(SectionHandle + 1);
      SEMOBJ::vUnlock((SEMOBJ *)&v25);
      v14 = (void **)((char *)a2 + 32);
      SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                              (_QWORD *)a2 + 4,
                              v15,
                              (struct _OBJECT_ATTRIBUTES *)Object,
                              *(union _LARGE_INTEGER **)v27,
                              4u,
                              v19,
                              0LL,
                              v21,
                              v23,
                              SectionHandle);
      if ( SectionRetainHandle < 0 )
      {
        *v14 = 0LL;
        *SectionHandle = 0LL;
      }
      else
      {
        SectionRetainHandle = ZwWin32CreateSection(
                                (int)&Object,
                                v16,
                                (int)Object,
                                v27[0],
                                2u,
                                v20,
                                *((void **)a2 + 6),
                                v22);
        if ( SectionRetainHandle >= 0 )
        {
          if ( !(unsigned int)bCopySection(*v14, Object, *((unsigned int *)a2 + 6)) )
            SectionRetainHandle = -1073741823;
          ObfDereferenceObject(Object);
        }
      }
      GreLeaveCriticalRegionAndReleasePushLockExclusive(SectionHandle + 1);
      if ( SectionRetainHandle < 0 )
      {
        if ( *v14 )
        {
          ObfDereferenceObject(*v14);
          *v14 = 0LL;
        }
        bUnreferenceNetworkedFontFileNode(SectionHandle);
      }
      Win32FreePool(v12);
      goto LABEL_20;
    }
    v6 = -1073741801;
    Win32FreePool(v12);
  }
LABEL_24:
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  return v6;
}
