/*
 * XREFs of vTrustedFontFileTableCleanup @ 0x1C01372B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall vTrustedFontFileTableCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID result; // rax
  struct _RTL_AVL_TABLE *v5; // rbx
  BOOLEAN i; // dl
  struct _UNICODE_STRING *v7; // rax
  struct _UNICODE_STRING *v8; // rdi

  result = (PVOID)RtlGetCurrentServiceSessionId(a1, a2, a3, a4);
  if ( gSessionId == (_DWORD)result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *((_QWORD *)gpxsGlobals + 2) = 0LL;
      result = gpxsGlobals;
      v5 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 3);
      if ( v5 )
      {
        for ( i = 1; ; i = 0 )
        {
          v7 = (struct _UNICODE_STRING *)RtlEnumerateGenericTableAvl(v5, i);
          v8 = v7;
          if ( !v7 )
            break;
          RtlFreeUnicodeString(v7);
          RtlDeleteElementGenericTableAvl(v5, v8);
        }
        Win32FreePool(*((_QWORD *)gpxsGlobals + 3));
        result = gpxsGlobals;
        *((_QWORD *)gpxsGlobals + 3) = 0LL;
      }
    }
  }
  return result;
}
