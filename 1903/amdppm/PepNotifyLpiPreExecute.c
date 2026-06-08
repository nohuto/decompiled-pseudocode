/*
 * XREFs of PepNotifyLpiPreExecute @ 0x1C000C450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyLpiPreExecute(__int64 *a1, __int64 a2, int a3, unsigned int a4, unsigned int *a5)
{
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  result = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a3 != -1 )
  {
    v6 = 0;
    if ( a4 )
    {
      v7 = a5;
      do
      {
        if ( !*(_BYTE *)(56LL * *v7 + qword_1C0013998 + 48) )
          break;
        ++v6;
        ++v7;
      }
      while ( v6 < a4 );
    }
    v8 = *a1;
    LODWORD(v9) = 0;
    HIDWORD(v9) = v6;
    v10 = (__int64)a5;
    result = PoFxProcessorNotification(v8, 37LL, &v9);
    if ( (int)result < 0 )
    {
      return 0LL;
    }
    else if ( (int)v9 < 0 )
    {
      return (unsigned int)v9;
    }
  }
  return result;
}
