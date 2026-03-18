/*
 * XREFs of TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002914C
 * Callers:
 *     Control_Transfer_Complete @ 0x1C002B34C (Control_Transfer_Complete.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0030774 (Isoch_Stage_CompleteTD.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0037EB4 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetUsbdStatusFromTrbCompletionCode(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx

  if ( a2 > 0xC6 )
  {
    if ( a2 == 199 )
      return (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x4000000000000000LL) != 0 ? -1073709056 : -1073741807;
    return (unsigned int)-1073741807;
  }
  if ( a2 == 198 )
    return (unsigned int)-1073741807;
  if ( a2 > 0x14 )
  {
    v9 = a2 - 23;
    if ( !v9 )
      return (unsigned int)-1073545216;
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
        return (unsigned int)-1073610752;
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 3;
        if ( v13 )
        {
          if ( v13 == 3 )
            return (unsigned int)-1073741802;
          return (unsigned int)-1073741807;
        }
        return (unsigned int)-1073741806;
      }
    }
    return 0;
  }
  if ( a2 == 20 )
    return (unsigned int)-1073741804;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
        return (unsigned int)-1073741805;
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 2;
          if ( !v7 )
            return (unsigned int)-1073741820;
          v8 = v7 - 4;
          if ( !v8 )
            return (unsigned int)-1073741803;
          if ( v8 == 3 )
            return 0;
        }
        return (unsigned int)-1073741807;
      }
      return (unsigned int)-1073741806;
    }
    return 0;
  }
  return a3;
}
