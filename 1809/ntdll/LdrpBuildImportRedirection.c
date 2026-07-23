/*
 * XREFs of LdrpBuildImportRedirection @ 0x1800D7534
 * Callers:
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 */

__int64 __fastcall LdrpBuildImportRedirection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  _DWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__RedirectionInformation__", 0, (unsigned __int64 *)&v5);
  if ( (int)result >= 0 )
  {
    v3 = v5;
    if ( *v5 == 1 )
    {
      v4 = 0LL;
      if ( v5[1] )
      {
        do
        {
          result = LdrpAddRedirectedFunction(*((_QWORD *)v3 + 1) + 24 * v4);
          if ( (int)result < 0 )
            break;
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < v3[1] );
      }
    }
    else
    {
      return 3221227787LL;
    }
  }
  return result;
}
