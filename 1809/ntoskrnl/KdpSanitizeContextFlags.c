/*
 * XREFs of KdpSanitizeContextFlags @ 0x140919B24
 * Callers:
 *     KdpSetContextEx @ 0x14028C86C (KdpSetContextEx.c)
 *     KdpSetContext @ 0x1409189F0 (KdpSetContext.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall KdpSanitizeContextFlags(_DWORD *a1, int a2, int *a3)
{
  int v3; // r10d
  struct _KPRCB *result; // rax
  int v6; // r11d
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  int v12; // r9d
  int v13; // ecx

  v3 = a1[12];
  result = KeGetCurrentPrcb();
  v6 = v3 & 0x10001F;
  *a3 = v3 & 0x10001F;
  if ( (v3 & result->ContextFlagsInit & 0x100040) == 0x100040 )
  {
    v8 = a1[308];
    if ( v8 >= -24 )
    {
      result = (struct _KPRCB *)(unsigned int)(a2 - 48);
      v9 = v8 + a1[309];
      if ( v9 <= (int)result && v8 <= v9 )
      {
        v10 = a1[310];
        if ( v8 <= v10 )
        {
          v11 = v10 + a1[311];
          if ( v11 <= v9 && v10 <= v11 )
          {
            v12 = a1[312];
            if ( v8 <= v12 )
            {
              v13 = v12 + a1[313];
              if ( v13 <= v9 && v12 <= v13 )
                *a3 = v6 | 0x100040;
            }
          }
        }
      }
    }
  }
  return result;
}
