/*
 * XREFs of AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C005E6E4
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C005985C (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiGetNativeMethodHandleFromAcpiObject(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r10d
  unsigned int v6; // r8d
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // dx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 **v12; // rcx

  v2 = *a1;
  v3 = 0;
  v6 = -1073741823;
  v7 = &AmliGlobalPreDefinedRootObjects;
  do
  {
    if ( *v7 == v2 )
    {
      v11 = 0LL;
      v12 = (__int64 **)&AcpiAmliPreDefinedRootAcpiObjects;
      v6 = -1073741275;
      while ( *v12 != a1 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v12;
        if ( (unsigned int)v11 >= 5 )
          return v6;
      }
      v10 = AcpiAmliPreDefinedRootNativeHandles[v11];
      goto LABEL_15;
    }
    ++v3;
    ++v7;
  }
  while ( v3 < 5 );
  v8 = *(_QWORD *)(v2 + 104);
  if ( !v8 )
    return v6;
  v9 = *(_WORD *)(v2 + 66);
  if ( v9 == 6 || (unsigned __int16)(v9 - 12) <= 1u )
  {
    v10 = *(_QWORD *)(v8 + 896);
  }
  else
  {
    if ( v9 != 11 )
      return v6;
    v10 = *(_QWORD *)(v8 + 136);
  }
LABEL_15:
  *a2 = v10;
  return 0;
}
