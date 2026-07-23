/*
 * XREFs of PspInitializeFullProcessImageName @ 0x14065FCD4
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspSetProcessShortName @ 0x14065FC58 (PspSetProcessShortName.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  ULONG_PTR v4; // r14
  int NameStringMode; // eax
  int v6; // edi
  char *v7; // rax
  PVOID PoolWithTag; // rax
  PVOID v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v14[12]; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0LL;
  if ( (*(_DWORD *)(a2 + 1740) & 1) != 0 )
    goto LABEL_17;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 952);
    if ( !v11 )
    {
      v6 = -1073741637;
      goto LABEL_11;
    }
    v12 = MiSectionControlArea(v11);
    v4 = MiReferenceControlAreaFile(v12);
  }
  *(_OWORD *)v14 = *(_OWORD *)(v4 + 88);
  PspSetProcessShortName(a2, v14);
  Src[0] = 0LL;
  Src[1] = 0LL;
  LODWORD(NumberOfBytes) = 272;
  NameStringMode = ObQueryNameStringMode(v4, (unsigned int)Src, 272, (unsigned int)&NumberOfBytes, 0);
  v6 = NameStringMode;
  if ( NameStringMode == -2147483643 || NameStringMode == -1073741789 || NameStringMode == -1073741820 )
  {
    if ( (unsigned int)NumberOfBytes <= 0x110 )
      goto LABEL_17;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_17;
    v6 = ObQueryNameStringMode(v4, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
    if ( v6 >= 0 )
      goto LABEL_12;
    ExFreePoolWithTag(v2, 0);
LABEL_11:
    if ( v6 >= 0 )
      goto LABEL_12;
    goto LABEL_17;
  }
  if ( NameStringMode >= 0 && (unsigned int)(NumberOfBytes - 17) <= 0xFF )
  {
    v7 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v2 = v7;
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)Src;
      *((_QWORD *)v7 + 1) = v7 + 16;
      memmove(v7 + 16, Src[1], WORD1(Src[0]));
      goto LABEL_11;
    }
  }
LABEL_17:
  LODWORD(NumberOfBytes) = 16;
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v2 = v10;
  if ( v10 )
  {
    memset(v10, 0, (unsigned int)NumberOfBytes);
    v6 = 0;
  }
  else
  {
    v6 = -1073741801;
  }
LABEL_12:
  *(_QWORD *)(a2 + 1128) = v2;
  return (unsigned int)v6;
}
