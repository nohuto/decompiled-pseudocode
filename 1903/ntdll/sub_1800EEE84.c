/*
 * XREFs of sub_1800EEE84 @ 0x1800EEE84
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     sub_180049EE0 @ 0x180049EE0 (sub_180049EE0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800F0AF4 @ 0x1800F0AF4 (sub_1800F0AF4.c)
 *     sub_1800F0CD8 @ 0x1800F0CD8 (sub_1800F0CD8.c)
 *     sub_180101388 @ 0x180101388 (sub_180101388.c)
 *     sub_180107738 @ 0x180107738 (sub_180107738.c)
 */

__int64 __fastcall sub_1800EEE84(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _PEB *v8; // rdi
  void (*v9)(void); // rax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF
  int v19; // [rsp+40h] [rbp+18h] BYREF

  memset(&qword_180163540, 0, 0x38uLL);
  qword_180163540 = sub_180049EE0(v3, v2, v4);
  qword_180163548 = sub_180049EE0(v6, v5, v7);
  qword_180163550 = (__int64)&unk_1801627F0;
  v8 = NtCurrentPeb();
  if ( (dword_180166070 & 0x10) != 0 || (unsigned int)sub_1800F0AF4(a1) )
  {
    byte_180166058 |= 1u;
    v9 = (void (*)(void))qword_180166960;
    if ( qword_180166960
      || (v9 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_180166960 = (__int64)v9) != 0) )
    {
      v9();
    }
  }
  v10 = dword_180163534;
  if ( (dword_180163534 & 0x40) != 0 )
  {
    DueTime.QuadPart = -10000000LL;
    sub_1800F0CD8(a1);
    v10 = dword_180163534;
  }
  dword_180163534 = v10 | 0x98;
  if ( RtlGetNtProductType(&NtProductType) && NtProductType != NtProductWinNt )
  {
    dword_180163534 |= 0x67u;
LABEL_14:
    DueTime.QuadPart = -10000000LL;
    goto LABEL_15;
  }
  if ( (int)RtlQueryResourcePolicy(0, 0, &v19, 4LL) >= 0 && v19 > 10 )
  {
    dword_180163534 |= 0x60u;
    goto LABEL_14;
  }
LABEL_15:
  if ( (dword_180166070 & 8) != 0 )
    byte_180166058 &= ~1u;
  dword_180166044 = sub_180101388();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v11 = dword_180166578;
    if ( dword_180166578 <= 1 )
      v11 = 2;
    v12 = 0;
    dword_180166578 = v11;
  }
  else
  {
    v12 = dword_180166044;
  }
  v13 = dword_180166554 & 1;
  v8->MaximumNumberOfHeaps = 16;
  v8->NumberOfHeaps = 0;
  dword_180166044 = v13 != 0 ? v12 : 0;
  v8->ProcessHeaps = (PVOID *)&unk_180163C40;
  RtlInitializeCriticalSectionEx(&stru_180163BE0, 0, 0x10000000u);
  qword_180166970 = sub_180049EE0(v15, v14, v16);
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    dword_180166070 |= 4u;
    qword_1801627A0 = 1024LL;
  }
  sub_180107738();
  return sub_1801070F4();
}
