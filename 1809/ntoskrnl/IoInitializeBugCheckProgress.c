/*
 * XREFs of IoInitializeBugCheckProgress @ 0x1402801C4
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140297514 (KeFrozenProcessorCount.c)
 */

__int64 __fastcall IoInitializeBugCheckProgress(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  unsigned int *v5; // r8
  const wchar_t *v6; // rcx
  _QWORD v7[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+30h] BYREF
  int v10; // [rsp+78h] [rbp+38h] BYREF

  v8 = a2;
  v7[0] = 0LL;
  v9 = 0;
  v10 = 8;
  result = KeFrozenProcessorCount();
  if ( (unsigned int)(KeNumberProcessors_0 - result) <= 1 )
  {
    result = off_1403FF680[0]();
    if ( (_BYTE)result != 1 && a1 != 265 )
    {
      if ( BugCheckProgressEFICalled )
        return result;
      BugCheckProgressEFICalled = 1;
      if ( CrashdmpDumpBlock )
      {
        LODWORD(v7[0]) = a1;
        WORD2(v7[0]) = MEMORY[0xFFFFF780000002C4];
        HIWORD(v7[0]) = *(_WORD *)(CrashdmpDumpBlock + 1408) + 1;
        ((void (__fastcall *)(const wchar_t *, void *, _QWORD *, __int64, int))IopReportBugCheckProgress)(
          L"BugCheckCode",
          &BUGCHECK_EFI_GUID,
          v7,
          8LL,
          1);
        v4 = 8LL;
        v5 = (unsigned int *)&v8;
        v6 = L"BugCheckParameter1";
      }
      else
      {
        result = HalGetEnvironmentVariableEx(L"BugCheckCode", &BUGCHECK_EFI_GUID, v7, &v10, 0LL);
        if ( (_DWORD)result )
        {
LABEL_10:
          BugCheckProgressEFICalled = 0;
          return result;
        }
        LODWORD(v7[0]) = a1;
        ++HIWORD(v7[0]);
        WORD2(v7[0]) = MEMORY[0xFFFFF780000002C4];
        v9 = v9 & 0xFFFBFE00 | 0x4004F;
        ((void (__fastcall *)(const wchar_t *, void *, _QWORD *, __int64, int))IopReportBugCheckProgress)(
          L"BugCheckCode",
          &BUGCHECK_EFI_GUID,
          v7,
          8LL,
          1);
        ((void (__fastcall *)(const wchar_t *, void *, __int64 *, __int64, int))IopReportBugCheckProgress)(
          L"BugCheckParameter1",
          &BUGCHECK_EFI_GUID,
          &v8,
          8LL,
          1);
        v4 = 4LL;
        v5 = &v9;
        v6 = L"BugCheckProgress";
      }
      result = ((__int64 (__fastcall *)(const wchar_t *, void *, unsigned int *, __int64, int))IopReportBugCheckProgress)(
                 v6,
                 &BUGCHECK_EFI_GUID,
                 v5,
                 v4,
                 1);
      goto LABEL_10;
    }
    BugCheckProgressEFICalled = 1;
  }
  return result;
}
