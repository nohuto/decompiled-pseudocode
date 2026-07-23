/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1406A5F20
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     PsGetProcessSessionId @ 0x140092250 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400CCC30 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmGetSessionCreateTime @ 0x1405B4894 (MmGetSessionCreateTime.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14066DBAC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066DF0C (EtwpQueryTokenPackageInfo.c)
 *     PsAcquireProcessExitSynchronization @ 0x1406A6250 (PsAcquireProcessExitSynchronization.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *a2,
        size_t Size,
        char a4,
        unsigned int *a5)
{
  SIZE_T v5; // r12
  void *v8; // r15
  int v9; // ebx
  const void **v10; // rax
  const void **v11; // rcx
  PACCESS_TOKEN v12; // r13
  int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  char *v18; // rdi
  unsigned __int16 *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  char *v22; // rbx
  ULONG Sizea; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  __int64 v27; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-2A0h] BYREF
  void *v29; // [rsp+40h] [rbp-298h]
  const void **v30; // [rsp+48h] [rbp-290h]
  unsigned int *v31; // [rsp+50h] [rbp-288h]
  __int64 v32; // [rsp+58h] [rbp-280h]
  PACCESS_TOKEN v33; // [rsp+60h] [rbp-278h]
  __int64 v34; // [rsp+68h] [rbp-270h]
  size_t PackageSize; // [rsp+70h] [rbp-268h] BYREF
  size_t v36; // [rsp+78h] [rbp-260h]
  char v37[256]; // [rsp+80h] [rbp-258h] BYREF
  char v38[144]; // [rsp+180h] [rbp-158h] BYREF
  _BYTE v39[48]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Size;
  v34 = BugCheckParameter1;
  v31 = a5;
  v28 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0;
  v27 = 0LL;
  v10 = *(const void ***)(BugCheckParameter1 + 1128);
  v11 = (const void **)&EmptyUnicodeString;
  if ( v10 )
    v11 = v10;
  v30 = v11;
  v12 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v33 = v12;
  Sizea = 0;
  EtwpQueryTokenPackageInfo(v12, (WCHAR *)&PackageSize, &Sizea);
  v13 = SeQueryUserSidToken((__int64)v12, Src, 0x44u, &Sizea);
  if ( v13 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v39);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v27);
      EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)&v28);
      KiUnstackDetachProcess((__int64)v39, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      v8 = v29;
      v9 = v27;
    }
    v14 = Sizea + 100 + PackageSize + v36 + *(unsigned __int16 *)v30 + (unsigned __int16)v28;
    v15 = v14;
    v32 = v14;
    if ( v31 )
      *v31 = v14;
    if ( a4 )
    {
      ProbeForWrite(a2, v5, 4u);
      v15 = v32;
    }
    if ( v14 >= (unsigned int)v5 )
      v15 = v5;
    memset(a2, 0, v15);
    if ( (unsigned int)v5 < 0x60 )
    {
      v13 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 736);
      *((_QWORD *)a2 + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 776);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1872);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1880);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1864);
      *((_QWORD *)a2 + 6) = MmGetSessionCreateTime(v16);
      *((_DWORD *)a2 + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)a2 + 16) = v9;
      *((_DWORD *)a2 + 17) = HIDWORD(v27);
      if ( (unsigned int)v5 >= v14 )
      {
        *((_DWORD *)a2 + 18) = 96;
        v17 = Sizea;
        memmove(a2 + 96, Src, Sizea);
        v18 = &a2[v17 + 96];
        *((_DWORD *)a2 + 19) = v17 + 96;
        v19 = (unsigned __int16 *)v30;
        memmove(v18, v30[1], *(unsigned __int16 *)v30);
        v20 = &v18[*v19 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v20 - (_DWORD)a2;
        memmove(v20, v37, PackageSize);
        v21 = &v20[PackageSize];
        *((_DWORD *)a2 + 21) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, v38, v36);
        v22 = &v21[v36];
        *((_DWORD *)a2 + 22) = (_DWORD)v22 - (_DWORD)a2;
        memmove(v22, v8, (unsigned __int16)v28);
        v13 = 0;
      }
      else
      {
        v13 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v12 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v12);
  return (unsigned int)v13;
}
