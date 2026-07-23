/*
 * XREFs of PipIommuValidateDeviceId @ 0x1407518D8
 * Callers:
 *     PipIommuRetrieveDeviceId @ 0x1407517FC (PipIommuRetrieveDeviceId.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall PipIommuValidateDeviceId(ULONG_PTR BugCheckParameter2, unsigned int *BugCheckParameter3, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r8
  unsigned __int16 v7; // cx
  ULONG_PTR BugCheckParameter4; // rax

  result = *BugCheckParameter3;
  if ( !(_DWORD)result || (int)result >= 7 )
  {
    BugCheckParameter4 = -1073741811LL;
    goto LABEL_13;
  }
  if ( (_DWORD)result != 1 )
    return result;
  v6 = *((_QWORD *)BugCheckParameter3 + 2);
  if ( !v6 || (v7 = *((_WORD *)BugCheckParameter3 + 7)) == 0 )
  {
    BugCheckParameter4 = -1073741306LL;
    goto LABEL_13;
  }
  if ( v6 < (unsigned __int64)(BugCheckParameter3 + 6) )
  {
    BugCheckParameter4 = -1073741503LL;
LABEL_13:
    KeBugCheckEx(0xCAu, 0x12uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  }
  result = (__int64)BugCheckParameter3 + a3;
  if ( v6 + v7 > (unsigned __int64)BugCheckParameter3 + a3 )
  {
    BugCheckParameter4 = -2147483643LL;
    goto LABEL_13;
  }
  return result;
}
