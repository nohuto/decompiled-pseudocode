/*
 * XREFs of AcpiCleanupObjDataArguments @ 0x1C005A518
 * Callers:
 *     AcpiCleanupObjDataArguments @ 0x1C005A518 (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005A5AC (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C005AF10 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     AcpiCleanupObjDataArguments @ 0x1C005A518 (AcpiCleanupObjDataArguments.c)
 */

void __fastcall AcpiCleanupObjDataArguments(__int64 a1, unsigned int a2)
{
  _DWORD **v2; // rbx
  __int64 i; // rsi
  unsigned __int16 v4; // ax
  _DWORD *v5; // rdi
  void *v6; // rcx

  if ( a1 && a2 )
  {
    v2 = (_DWORD **)(a1 + 32);
    for ( i = a2; i; --i )
    {
      v4 = *((_WORD *)v2 - 15);
      if ( v4 >= 2u )
      {
        if ( v4 > 3u )
        {
          if ( v4 != 4 )
            goto LABEL_12;
          v5 = *v2;
          if ( !*v2 || !*v5 )
            goto LABEL_12;
          AcpiCleanupObjDataArguments(v5 + 2);
          v6 = v5;
LABEL_11:
          ExFreePoolWithTag(v6, 0x4E706341u);
          *v2 = 0LL;
          goto LABEL_12;
        }
        v6 = *v2;
        if ( *v2 )
          goto LABEL_11;
      }
LABEL_12:
      v2 += 5;
    }
  }
}
