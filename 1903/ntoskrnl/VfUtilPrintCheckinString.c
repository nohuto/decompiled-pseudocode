/*
 * XREFs of VfUtilPrintCheckinString @ 0x1409646B4
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x14027BD8C (__report_rangecheckfailure.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 *     RtlUpcaseUnicodeChar @ 0x140657800 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VfUtilPrintCheckinString(unsigned __int16 *a1)
{
  unsigned int v1; // edi
  unsigned int v3; // esi
  unsigned int v4; // r14d
  __int64 v5; // r13
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  unsigned int v8; // r8d
  int v9; // r10d
  __int64 *v10; // r11
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  int *v18; // rbx
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-41h]
  __int64 v21; // [rsp+48h] [rbp-39h] BYREF
  int v22; // [rsp+50h] [rbp-31h]
  int v23; // [rsp+54h] [rbp-2Dh]
  _WORD v24[40]; // [rsp+58h] [rbp-29h] BYREF

  v1 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v3 = 0;
  v21 = 0LL;
  v4 = *a1;
  v5 = *((_QWORD *)a1 + 1);
  HIDWORD(v21) = MmVerifierData;
  v6 = v4 >> 1;
  v7 = v6;
  LODWORD(v21) = -(KernelVersionBump != 1) - 268417093;
  v22 = 0;
  v23 = 123456789 * v21 * (MmVerifierData + 1);
  if ( v6 < 0x10 )
    v7 = 16;
  if ( v7 )
  {
    do
    {
      *((_BYTE *)&v21 + (v3 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v5 + 2LL * (v3 % v6)));
      ++v3;
    }
    while ( v3 < v7 );
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = 1;
    v10 = &v21;
    LODWORD(v11) = 0;
    v12 = 16LL;
    do
    {
      v13 = *(unsigned __int8 *)v10 + ((_DWORD)v11 << 8);
      v14 = v13 / 0x3E;
      *(_BYTE *)v10 = v13 / 0x3E;
      v11 = v13 % 0x3E;
      v15 = 0;
      if ( !(_BYTE)v14 )
        v15 = v9;
      v10 = (__int64 *)((char *)v10 + 1);
      v9 = v15;
      --v12;
    }
    while ( v12 );
    v16 = v8;
    result = Printable[v11];
    ++v8;
    v24[v16] = result;
    if ( v8 >= 0x21 )
      break;
    if ( v9 )
    {
      if ( 2 * (unsigned __int64)v8 >= 0x42 )
        _report_rangecheckfailure();
      v24[v8] = 0;
      v20 = v24;
      WORD1(v19) = 2 * v8;
      LOWORD(v19) = 2 * v8;
      if ( (VfRuleClasses[0] & 0x100000) == 0 )
        return VfUtilDbgPrint(
                 "Driver Verifier: Enabled for %wZ, flags 0x%x, build %ld, key %wZ\n",
                 a1,
                 (unsigned int)MmVerifierData,
                 18363 - (unsigned int)(KernelVersionBump != 1),
                 &v19);
      VfUtilDbgPrint("Driver Verifier: Enabled for %wZ", a1);
      v18 = VfRuleClasses;
      do
        VfUtilDbgPrint(", %d:0x%x", v1++, *v18++);
      while ( v1 < 2 );
      return VfUtilDbgPrint(", build %ld, key %wZ\n", 18363 - (unsigned int)(KernelVersionBump != 1), &v19);
    }
  }
  return result;
}
