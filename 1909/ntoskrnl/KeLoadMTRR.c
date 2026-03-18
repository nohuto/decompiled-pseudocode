/*
 * XREFs of KeLoadMTRR @ 0x14059DCE0
 * Callers:
 *     KiLoadMTRRTarget @ 0x1405A31D0 (KiLoadMTRRTarget.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14017D400 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiLockStepExecution @ 0x14059DEC8 (KiLockStepExecution.c)
 *     KiWriteFixedMtrr @ 0x14059DF0C (KiWriteFixedMtrr.c)
 *     KiReadFixedMtrr @ 0x14059E018 (KiReadFixedMtrr.c)
 *     KiCompareVarMtrr @ 0x14059E124 (KiCompareVarMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  __int64 v2; // rdx
  PVOID v3; // r8
  _QWORD *v4; // rcx
  bool v5; // di
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // r9
  unsigned int v12; // r10d
  _QWORD *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE v18[96]; // [rsp+20h] [rbp-98h] BYREF
  int v19; // [rsp+B0h] [rbp-8h]

  if ( byte_140446D90 )
  {
    if ( !(unsigned __int8)KiCompareVarMtrr() )
      KeMtrrComparisonFailed = 1;
    if ( qword_140446DA0 )
    {
      KiReadFixedMtrr(v18);
      v3 = qword_140446DA0;
      if ( !KeGetCurrentPrcb()->Number )
      {
        v2 = 0LL;
        v3 = (PVOID)((_BYTE *)qword_140446DA0 - v18);
        v4 = v18;
        while ( *(_QWORD *)((char *)v4 + (_QWORD)v3) == *v4 )
        {
          v2 = (unsigned int)(v2 + 1);
          ++v4;
          if ( (unsigned int)v2 >= 0xB )
            goto LABEL_11;
        }
        KeMtrrComparisonFailed = 1;
      }
    }
LABEL_11:
    _disable();
    v5 = (v19 & 0x200) != 0;
    KiLockStepExecution(a1, v2, v3);
    v6 = __readcr0();
    __writecr0(v6 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v7 = __readcr4();
    if ( (v7 & 0x80) != 0 )
      __writecr4(v7 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v8 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    v9 = (KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL) >> 32;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    v10 = 0;
    if ( (_BYTE)qword_140446D88 )
    {
      v11 = 0LL;
      v12 = 513;
      do
      {
        v13 = qword_140446D98;
        v14 = 2 * v11;
        __writemsr(v12 - 1, *((_QWORD *)qword_140446D98 + v14));
        v9 = HIDWORD(v13[v14 + 1]);
        __writemsr(v12, v13[v14 + 1]);
        v11 = ++v10;
        v12 += 2;
      }
      while ( v10 < (unsigned __int64)(unsigned __int8)qword_140446D88 );
    }
    if ( qword_140446DA0 )
      KiWriteFixedMtrr(qword_140446DA0, v9);
    __writemsr(0x2FFu, v8 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v6);
    if ( (v7 & 0x80) != 0 )
      __writecr4(v7);
    KiLockStepExecution(a1, v15, v16);
    if ( v5 )
      _enable();
  }
  return 0LL;
}
