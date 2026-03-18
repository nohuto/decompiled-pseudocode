/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0078C74
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003370C (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0078F88 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0079214 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C00A6B68 (_wcsupr.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01847F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  char v3; // r13
  wchar_t *v4; // rsi
  void *v5; // r14
  PACCESS_TOKEN v6; // r12
  const char *v7; // rdx
  __int64 v8; // rcx
  void *ProcessSectionBaseAddress; // rdi
  int v10; // eax
  const char *v11; // rdx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  int v14; // edi
  PIMAGE_NT_HEADERS v15; // rax
  DWORD TimeDateStamp; // edi
  DWORD CheckSum; // eax
  struct _CIT_PROGRAM_ID *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned int v21; // r8d
  int v22; // ecx
  wchar_t *String; // [rsp+38h] [rbp-220h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-218h] BYREF
  void *v25; // [rsp+48h] [rbp-210h]
  size_t Size; // [rsp+50h] [rbp-208h] BYREF
  size_t v27; // [rsp+58h] [rbp-200h] BYREF
  struct _CIT_PROGRAM_ID *v28; // [rsp+60h] [rbp-1F8h]
  __int64 v29; // [rsp+68h] [rbp-1F0h]
  PACCESS_TOKEN v30; // [rsp+70h] [rbp-1E8h]
  DWORD v31; // [rsp+78h] [rbp-1E0h]
  DWORD v32; // [rsp+7Ch] [rbp-1DCh]
  _BYTE v33[144]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+120h] [rbp-138h] BYREF

  v28 = a2;
  v3 = 0;
  pImageFileName = 0LL;
  v4 = 0LL;
  String = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*a1);
  v25 = ProcessSectionBaseAddress;
  if ( !ProcessSectionBaseAddress )
  {
    v14 = -1073741637;
    v21 = 2354;
    goto LABEL_30;
  }
  if ( a1 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8) )
  {
    KeAttachProcess(*a1);
    v3 = 1;
  }
  if ( (*((_DWORD *)a1 + 205) & 0x30) == 0x10 )
  {
    v6 = PsReferencePrimaryToken(*a1);
    v30 = v6;
    Size = 256LL;
    v27 = 130LL;
    v10 = RtlQueryPackageIdentity(v6, Src, &Size, v33, &v27, 0LL);
    if ( v10 >= 0 )
    {
      v4 = (wchar_t *)Win32AllocPool(Size, 0x49637355u);
      String = v4;
      v12 = Win32AllocPool(v27, 0x49637355u);
      v5 = (void *)v12;
      v29 = v12;
      if ( v4 && v12 )
      {
        memmove(v4, Src, Size);
        wcsupr(v4);
        memmove(v5, v33, v27);
        goto LABEL_9;
      }
      v14 = -1073741670;
      v21 = 2396;
LABEL_30:
      v22 = v14;
LABEL_32:
      CitpLogFailureWorker(v22, v7, v21);
      goto LABEL_17;
    }
    CitpLogFailureWorker(v10, v11, 0x967u);
  }
LABEL_9:
  if ( v4 )
    goto LABEL_14;
  v13 = SeLocateProcessImageName(*a1, &pImageFileName);
  v14 = v13;
  if ( v13 < 0 )
  {
    pImageFileName = 0LL;
    v21 = 2420;
    v22 = v13;
    goto LABEL_32;
  }
  if ( !pImageFileName->Length )
  {
    v14 = -1073741637;
    goto LABEL_17;
  }
  v14 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v4 = String;
  if ( v14 < 0 )
    goto LABEL_17;
  wcsupr(String);
  ProcessSectionBaseAddress = v25;
LABEL_14:
  v15 = RtlImageNtHeader(ProcessSectionBaseAddress);
  TimeDateStamp = v15->FileHeader.TimeDateStamp;
  v31 = TimeDateStamp;
  CheckSum = v15->OptionalHeader.CheckSum;
  LODWORD(v25) = CheckSum;
  v32 = CheckSum;
  if ( v5 )
  {
    wcsupr((wchar_t *)v5);
    CheckSum = (unsigned int)v25;
  }
  v18 = v28;
  *(_QWORD *)v28 = v4;
  v4 = 0LL;
  *((_QWORD *)v18 + 1) = v5;
  v5 = 0LL;
  *((_DWORD *)v18 + 6) = TimeDateStamp;
  *((_DWORD *)v18 + 7) = CheckSum;
  *((_DWORD *)v18 + 8) = (*((_DWORD *)a1 + 205) >> 4) & 3;
  v19 = CitpProgramIdCalculateHash(v18);
  *((_QWORD *)v28 + 2) = v19;
  v14 = 0;
LABEL_17:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v4 )
    Win32FreePool((__int64)v4);
  if ( v5 )
    Win32FreePool((__int64)v5);
  if ( v3 )
    KeDetachProcess();
  return (unsigned int)v14;
}
