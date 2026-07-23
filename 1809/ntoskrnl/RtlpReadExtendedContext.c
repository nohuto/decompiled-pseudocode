/*
 * XREFs of RtlpReadExtendedContext @ 0x140621F80
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400A234C (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x14029A3A0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1406A9558 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1400A1FB0 (RtlpValidateContextFlags.c)
 *     RtlpCopyExtendedContext @ 0x1400A204C (RtlpCopyExtendedContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpReadExtendedContextLayout @ 0x14062225C (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, int a4, __int64 a5, __int64 *a6)
{
  int v7; // esi
  __int64 v8; // rdi
  __int64 *v9; // r15
  __int64 result; // rax
  int v11; // ecx
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // r12d
  __int64 v17; // rsi
  unsigned int v18; // edi
  int *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  int v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h] BYREF

  v27 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = &v28;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, &v26);
  if ( (int)result < 0 )
    return result;
  v12 = v26;
  LOBYTE(v11) = 1;
  result = RtlpReadExtendedContextLayout(v11, a4, a5, v26, (__int64)v9);
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
  if ( (v12 & 1) != 0 )
  {
    v13 = *((unsigned int *)v9 + 3);
    if ( (_DWORD)v13 )
    {
      v14 = *((int *)v9 + 2);
      if ( ((unsigned int)(v7 - 1) & (unsigned __int64)(v14 + v8)) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v8 + v14 + v13;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 + v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v16 = v12 & 2;
  if ( v16 )
  {
    v21 = *((unsigned int *)v9 + 5);
    if ( (_DWORD)v21 )
    {
      v22 = *((int *)v9 + 4);
      v23 = v22 + v8;
      if ( (((_BYTE)v22 + (_BYTE)v8) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v8 + v21 + v22;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v17 = v27;
  result = RtlpCopyExtendedContext(a2, v27, 0LL, a4, v8, (__int64)v9);
  v18 = result;
  if ( (int)result >= 0 )
  {
    v19 = (int *)(v17 + *(int *)(v17 + 8));
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v19[12] = a4;
LABEL_19:
        if ( v16 )
        {
          v20 = (_QWORD *)(v17 + *(int *)(v17 + 16));
          *v20 &= (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            v20[1] &= MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
          else
            v20[1] = 0LL;
          memset(v20 + 2, 0, 0x30uLL);
        }
        return v18;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_19;
    }
    *v19 = a4;
    goto LABEL_19;
  }
  return result;
}
