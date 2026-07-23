/*
 * XREFs of NtRaiseHardError @ 0x1408D7F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x1408D7BA0 (ExpRaiseHardError.c)
 */

NTSTATUS __stdcall NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int i; // eax
  __int64 v12; // r8
  _OWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r9
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  NTSTATUS v19; // edx
  ULONG v21; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-F4h]
  NTSTATUS v23; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v25[15]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = NumberOfParameters;
  if ( NumberOfParameters > 5 )
    return -1073741584;
  if ( Parameters )
  {
    if ( NumberOfParameters )
      goto LABEL_6;
    return -1073741584;
  }
  if ( NumberOfParameters )
    return -1073741584;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ValidResponseOptions > 8 )
      return -1073741582;
    v9 = (__int64)Response;
    if ( (unsigned __int64)Response >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( Parameters )
    {
      v10 = NumberOfParameters;
      if ( v10 * 8 )
      {
        if ( ((unsigned __int8)Parameters & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Parameters[v10] > 0x7FFFFFFF0000LL || &Parameters[v10] < Parameters )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(Src, Parameters, 8LL * NumberOfParameters);
      memmove(v25, Src, 8 * v7);
      if ( UnicodeStringParameterMask )
      {
        for ( i = 0; ; ++i )
        {
          v22 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest((const int *)&UnicodeStringParameterMask, i) )
          {
            v12 = i;
            v13 = (_OWORD *)Src[i];
            if ( ((unsigned __int8)v13 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v14 = 2LL * i;
            v15 = &v25[v14 + 5];
            *(_OWORD *)&v25[v14 + 5] = *v13;
            v16 = WORD1(v25[v14 + 5]);
            if ( v16 )
            {
              v17 = v25[v14 + 6];
              v18 = v17 + v16;
              if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v25[v12] = v15;
            i = v22;
          }
        }
      }
    }
    v19 = ExpRaiseHardError(ErrorStatus, v7, UnicodeStringParameterMask, Src, (__int64)v25, ValidResponseOptions, &v21);
    v23 = v19;
    *Response = v21;
  }
  else
  {
    v19 = ExRaiseHardError(
            ErrorStatus,
            NumberOfParameters,
            UnicodeStringParameterMask,
            (char *)Parameters,
            ValidResponseOptions,
            (int *)&v21);
    *Response = v21;
  }
  return v19;
}
