/*
 * XREFs of MiInitializeSessionIds @ 0x140A20B9C
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectType @ 0x140759A60 (ObCreateObjectType.c)
 */

__int64 MiInitializeSessionIds()
{
  _RTL_BITMAP *PoolWithTag; // rax
  __int64 result; // rax
  UNICODE_STRING v2; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter3[16]; // [rsp+40h] [rbp-39h] BYREF

  *(_QWORD *)&v2.Length = 1048590LL;
  v2.Buffer = L"Session";
  memset(BugCheckParameter3, 0, 0x78uLL);
  qword_1404659B0 = 0LL;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20206D4Du);
  qword_140466990 = PoolWithTag;
  if ( !PoolWithTag
    || (PoolWithTag->SizeOfBitMap = 128, PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap, !qword_140466990) )
  {
    KeBugCheckEx(0x7Du, qword_14046A350, qword_14046A340, qword_14046A348, 0x200uLL);
  }
  memset(
    qword_140466990->Buffer,
    0,
    4 * ((qword_140466990->SizeOfBitMap >> 5) + ((qword_140466990->SizeOfBitMap & 0x1F) != 0)));
  qword_1404659E0 = 0LL;
  memset(BugCheckParameter3, 0, 0x78uLL);
  LODWORD(BugCheckParameter3[1]) = 0;
  BYTE2(BugCheckParameter3[0]) |= 0xCu;
  LOWORD(BugCheckParameter3[0]) = 120;
  HIDWORD(BugCheckParameter3[4]) = 512;
  HIDWORD(BugCheckParameter3[5]) = 40;
  *(_OWORD *)((char *)&BugCheckParameter3[1] + 4) = MiSessionMapping;
  HIDWORD(BugCheckParameter3[3]) = 983043;
  BugCheckParameter3[9] = (ULONG_PTR)MiSessionObjectDelete;
  result = ObCreateObjectType(&v2, (__int64)BugCheckParameter3, 0LL, (__int64)&MmSessionObjectType);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1Au, 0x1237uLL, (int)result, (ULONG_PTR)BugCheckParameter3, 0LL);
  return result;
}
