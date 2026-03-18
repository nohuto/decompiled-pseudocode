/*
 * XREFs of EtwTraceThreadWorkOnBehalfUpdate @ 0x140036B00
 * Callers:
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void EtwTraceThreadWorkOnBehalfUpdate()
{
  __int64 v0; // r8
  __int64 v1; // r9
  REGHANDLE v2; // r10
  __int64 v3; // r11
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  if ( EtwpPsProvRegHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpPsProvRegHandle + 32) + 96LL, 4u, 0x8000000000002000uLL)
     || *(_BYTE *)(v2 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, 4u, v0)) )
  {
    if ( v1 )
      v4 = *(_DWORD *)(v1 + 1616);
    else
      v4 = 0;
    v6 = v4;
    UserData.Ptr = (ULONGLONG)&v6;
    *(_QWORD *)&UserData.Size = 4LL;
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 1616);
    else
      v5 = 0;
    v7 = v5;
    v10 = 4LL;
    v9 = &v7;
    EtwWriteEx(v2, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
}
