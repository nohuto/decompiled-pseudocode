/*
 * XREFs of EtwpCheckGuidAccessAndDoRundown @ 0x1408FABC4
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1406921DC (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpCheckGuidAccess @ 0x140692610 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FAD1C (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1408FB084 (EtwpLogKernelTraceRundown.c)
 */

__int64 __fastcall EtwpCheckGuidAccessAndDoRundown(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int16 **a5,
        unsigned int a6)
{
  int v9; // ebx
  __int64 v10; // r9
  int v11; // eax
  size_t v12; // rsi
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // r9d
  _BYTE v19[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v19, 0, sizeof(v19));
  v9 = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = *((_DWORD *)a5 + 3);
  if ( v11 != -2147483647 )
  {
    if ( v11 != -2147483646 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)a5 + 2) == 8 )
    {
      LOBYTE(v10) = a4;
      return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, **a5, a3, v10);
    }
    return 3221225485LL;
  }
  v12 = *((unsigned int *)a5 + 2);
  if ( (unsigned int)v12 > 0x20 || (v12 & 3) != 0 )
    return 3221225485LL;
  v13 = 1;
  if ( a6 > 1 )
  {
    v14 = a5 + 3;
    while ( v14[1] != -2147483644 || (*v14 & 3) == 0 )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= a6 )
        goto LABEL_10;
    }
    return 3221225485LL;
  }
LABEL_10:
  memset(v19, 0, sizeof(v19));
  memmove(v19, *a5, v12);
  v15 = a6 - 1;
  v16 = (__int64)(a5 + 2);
  LOBYTE(v17) = a4;
  if ( a6 <= 1 )
  {
    v15 = 0;
    v16 = 0LL;
  }
  EtwpLogKernelTraceRundown(a1, a3, (unsigned int)v19, v17, v16, v15);
  return (unsigned int)v9;
}
