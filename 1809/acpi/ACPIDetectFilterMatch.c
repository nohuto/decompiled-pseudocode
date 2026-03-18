/*
 * XREFs of ACPIDetectFilterMatch @ 0x1C009A720
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C000238C (ACPIInternalClearFlags.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectFilterMatch(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned int *v6; // r10
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = a1;
  *a3 = 0LL;
  v6 = a2;
  if ( (v3 & 0x200000000000008LL) != 8 || *(_QWORD *)(a1 + 720) )
  {
    if ( a2 && *a2 )
    {
      do
      {
        if ( *(_QWORD *)(v5 + 736) == *(_QWORD *)&v6[2 * v4 + 2] )
          ACPIInternalClearFlags((void *)(v5 + 8), 256LL);
        ++v4;
      }
      while ( v4 < *v6 );
    }
    return 0LL;
  }
  else
  {
    v8 = (__int64)a3;
    LOBYTE(a3) = 1;
    result = ACPIDetectCouldExtensionBeInRelation(a1, (_DWORD)a2, (_DWORD)a3, 0, v8);
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}
