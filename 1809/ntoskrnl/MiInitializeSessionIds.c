/*
 * XREFs of MiInitializeSessionIds @ 0x1409BB3DC
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 */

__int64 MiInitializeSessionIds()
{
  _RTL_BITMAP *PoolWithTag; // rax
  __int64 result; // rax
  UNICODE_STRING v2; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter3[16]; // [rsp+40h] [rbp-39h] BYREF

  qword_14043B058 = 0LL;
  *(_DWORD *)&v2.Length = 1048590;
  v2.Buffer = L"Session";
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20206D4Du);
  qword_14043C010 = PoolWithTag;
  if ( !PoolWithTag
    || (PoolWithTag->SizeOfBitMap = 128, PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap, !qword_14043C010) )
  {
    KeBugCheckEx(0x7Du, qword_14043F5D0, qword_14043F5C0, qword_14043F5C8, 0x200uLL);
  }
  memset(
    qword_14043C010->Buffer,
    0,
    4 * ((qword_14043C010->SizeOfBitMap >> 5) + ((qword_14043C010->SizeOfBitMap & 0x1F) != 0)));
  qword_14043B088 = 0LL;
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
