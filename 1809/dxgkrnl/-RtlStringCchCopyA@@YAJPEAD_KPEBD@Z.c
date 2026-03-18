/*
 * XREFs of ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C003BEB4
 * Callers:
 *     ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z @ 0x1C020DE8C (-AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z @ 0x1C025F6E0 (-Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C025F798 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C003BEFC (RtlStringCopyWorkerA.c)
 */

__int64 __fastcall RtlStringCchCopyA(char *a1, size_t a2, const char *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerA(a1, a2, 0LL, a3, v5);
  }
  return (unsigned int)v3;
}
