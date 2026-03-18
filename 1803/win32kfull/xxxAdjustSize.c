/*
 * XREFs of xxxAdjustSize @ 0x1C002219C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ConstrainWindowSize @ 0x1C00FD3D4 (ConstrainWindowSize.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void *__fastcall xxxAdjustSize(struct tagWND *a1, int *a2, int *a3)
{
  void *result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // edx
  int v11; // edx
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-48h] BYREF

  result = memset(v15, 0, sizeof(v15));
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0 || (*(_BYTE *)(v7 + 30) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    {
      v8 = v15[0];
      v9 = v15[1];
    }
    else
    {
      v8 = v15[3];
      v9 = v15[4];
    }
    v10 = v9;
    if ( *a2 < (int)v9 )
      v10 = *a2;
    if ( (int)v8 <= v10 )
    {
      v11 = v9;
      if ( *a2 < (int)v9 )
        v11 = *a2;
    }
    else
    {
      v11 = v8;
    }
    *a2 = v11;
    v12 = HIDWORD(v9);
    v13 = v12;
    if ( *a3 < (int)v12 )
      v13 = *a3;
    v14 = HIDWORD(v8);
    if ( (int)v14 <= v13 )
    {
      if ( *a3 < (int)v12 )
        LODWORD(v12) = *a3;
      LODWORD(v14) = v12;
    }
    *a3 = v14;
    return (void *)ConstrainWindowSize(a2, a3);
  }
  return result;
}
