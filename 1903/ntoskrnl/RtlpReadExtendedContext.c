/*
 * XREFs of RtlpReadExtendedContext @ 0x1405E76E4
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B14B0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C9B9C (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140016918 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x140016F90 (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpReadExtendedContextLayout @ 0x1405E74E8 (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int *a6)
{
  int v7; // esi
  __int64 v8; // rdi
  int *v9; // r15
  __int64 result; // rax
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  int v15; // r12d
  __int64 v16; // rsi
  unsigned int v17; // edi
  unsigned int *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  int v25; // [rsp+48h] [rbp-60h] BYREF
  __int64 v26; // [rsp+50h] [rbp-58h]
  _BYTE v27[24]; // [rsp+58h] [rbp-50h] BYREF

  v26 = a3;
  v7 = 0;
  memset(v27, 0, sizeof(v27));
  v8 = 0LL;
  v9 = (int *)v27;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, &v25);
  if ( (int)result < 0 )
    return result;
  v11 = v25;
  result = RtlpReadExtendedContextLayout(1, a4, a5, v25, v9);
  if ( (int)result < 0 )
    return result;
  if ( (a4 & 0x10000) != 0 )
  {
    v7 = 4;
    v8 = a5 + 716;
  }
  else
  {
    if ( (a4 & 0x100000) != 0 )
    {
      v8 = a5 + 1232;
    }
    else
    {
      if ( (a4 & 0x200000) != 0 )
      {
        v7 = 8;
        v8 = a5 + 416;
        goto LABEL_9;
      }
      if ( (a4 & 0x400000) == 0 )
        goto LABEL_9;
      v8 = a5 + 912;
    }
    v7 = 16;
  }
LABEL_9:
  if ( (v11 & 1) != 0 )
  {
    v12 = (unsigned int)v9[3];
    if ( (_DWORD)v12 )
    {
      v13 = v9[2];
      if ( ((unsigned int)(v7 - 1) & (unsigned __int64)(v13 + v8)) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = v8 + v13 + v12;
      if ( v14 > 0x7FFFFFFF0000LL || v14 < v13 + v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v15 = v11 & 2;
  if ( v15 )
  {
    v20 = (unsigned int)v9[5];
    if ( (_DWORD)v20 )
    {
      v21 = v9[4];
      v22 = v21 + v8;
      if ( (((_BYTE)v21 + (_BYTE)v8) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = v8 + v20 + v21;
      if ( v23 > 0x7FFFFFFF0000LL || v23 < v22 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v16 = v26;
  result = RtlpCopyExtendedContext(a2, v26, 0LL, a4, v8, (__int64)v9);
  v17 = result;
  if ( (int)result >= 0 )
  {
    v18 = (unsigned int *)(v16 + *(int *)(v16 + 8));
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v18[12] = a4;
LABEL_19:
        if ( v15 )
        {
          v19 = (_QWORD *)(v16 + *(int *)(v16 + 16));
          *v19 &= (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            v19[1] &= MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
          else
            v19[1] = 0LL;
          memset(v19 + 2, 0, 0x30uLL);
        }
        return v17;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_19;
    }
    *v18 = a4;
    goto LABEL_19;
  }
  return result;
}
