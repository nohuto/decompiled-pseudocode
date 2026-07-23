/*
 * XREFs of sub_180077CE4 @ 0x180077CE4
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_180077DBC @ 0x180077DBC (sub_180077DBC.c)
 */

void sub_180077CE4()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  sub_180035F18(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))sub_180077DBC(i);
    if ( !v1 )
      break;
    v2 = BYTE5(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction);
    if ( v1 == RtlRaiseException )
      v2 = i;
    BYTE5(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction) = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    *((_QWORD *)&LdrSystemDllInitBlock + v5 + 40) = v3;
    v8 = v4 + EndAddress;
    *((_QWORD *)&LdrSystemDllInitBlock + v5 + 39) = v4;
    v9 = qword_18017A3F8;
    if ( v7 < qword_18017A3F8 )
      v9 = v7;
    qword_18017A3F8 = v9;
    v10 = qword_18017A400;
    if ( v8 > qword_18017A400 )
      v10 = v8;
    qword_18017A400 = v10;
  }
  LODWORD(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction) = i;
  sub_180035F18(1);
}
