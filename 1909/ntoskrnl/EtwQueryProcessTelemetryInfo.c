/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1406C9A78
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessSessionId @ 0x1400C8670 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400C9AF0 (PsGetProcessStartKey.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     MmGetSessionCreateTime @ 0x14063A4A8 (MmGetSessionCreateTime.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x140684530 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1406846BC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1406846FC (EtwpQueryProcessCommandLine.c)
 *     PsAcquireProcessExitSynchronization @ 0x1406C9DE0 (PsAcquireProcessExitSynchronization.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(__int64 BugCheckParameter1, char *a2, size_t Size, char a4, ULONG *a5)
{
  SIZE_T v5; // r12
  void *v8; // r15
  int v9; // ebx
  const void **v10; // rcx
  PACCESS_TOKEN v11; // r13
  int v12; // edi
  ULONG v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rdi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  ULONG Sizea; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  __int64 v26; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-2A0h] BYREF
  void *v28; // [rsp+40h] [rbp-298h]
  const void **v29; // [rsp+48h] [rbp-290h]
  ULONG *v30; // [rsp+50h] [rbp-288h]
  __int64 v31; // [rsp+58h] [rbp-280h]
  PACCESS_TOKEN v32; // [rsp+60h] [rbp-278h]
  __int64 v33; // [rsp+68h] [rbp-270h]
  size_t PackageSize[52]; // [rsp+70h] [rbp-268h] BYREF
  _BYTE v35[48]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Size;
  v33 = BugCheckParameter1;
  v30 = a5;
  memset(v35, 0, sizeof(v35));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  v27 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  v9 = 0;
  v26 = 0LL;
  v10 = (const void **)&EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1128) )
    v10 = *(const void ***)(BugCheckParameter1 + 1128);
  v29 = v10;
  v11 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v32 = v11;
  Sizea = 0;
  EtwpQueryTokenPackageInfo(v11, (WCHAR *)PackageSize, &Sizea);
  v12 = SeQueryUserSidToken((__int64)v11, Src, 0x44u, &Sizea);
  if ( v12 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v35);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v26);
      EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)&v27);
      KiUnstackDetachProcess((struct _KTHREAD *)v35, 0);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
      v8 = v28;
      v9 = v26;
    }
    v13 = Sizea
        + 100
        + LODWORD(PackageSize[0])
        + LODWORD(PackageSize[1])
        + *(unsigned __int16 *)v29
        + (unsigned __int16)v27;
    v14 = v13;
    v31 = v13;
    if ( v30 )
      *v30 = v13;
    if ( a4 )
    {
      ProbeForWrite(a2, v5, 4u);
      v14 = v31;
    }
    if ( v13 >= (unsigned int)v5 )
      v14 = v5;
    memset(a2, 0, v14);
    if ( (unsigned int)v5 < 0x60 )
    {
      v12 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 744);
      *((_QWORD *)a2 + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 784);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1920);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1928);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1912);
      *((_QWORD *)a2 + 6) = MmGetSessionCreateTime(v15);
      *((_DWORD *)a2 + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)a2 + 16) = v9;
      *((_DWORD *)a2 + 17) = HIDWORD(v26);
      if ( (unsigned int)v5 >= v13 )
      {
        *((_DWORD *)a2 + 18) = 96;
        v16 = Sizea;
        memmove(a2 + 96, Src, Sizea);
        v17 = &a2[v16 + 96];
        *((_DWORD *)a2 + 19) = v16 + 96;
        v18 = (unsigned __int16 *)v29;
        memmove(v17, v29[1], *(unsigned __int16 *)v29);
        v19 = &v17[*v18 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v19 - (_DWORD)a2;
        memmove(v19, &PackageSize[2], PackageSize[0]);
        v20 = &v19[PackageSize[0]];
        *((_DWORD *)a2 + 21) = (_DWORD)v20 - (_DWORD)a2;
        memmove(v20, &PackageSize[34], PackageSize[1]);
        v21 = &v20[PackageSize[1]];
        *((_DWORD *)a2 + 22) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, v8, (unsigned __int16)v27);
        v12 = 0;
      }
      else
      {
        v12 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 864), (unsigned __int64)v11);
  return (unsigned int)v12;
}
