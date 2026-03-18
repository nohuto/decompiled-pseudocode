/*
 * XREFs of ExprOp1_64 @ 0x1C002ED8C
 * Callers:
 *     ExprOp1 @ 0x1C002ED50 (ExprOp1.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 */

__int64 __fastcall ExprOp1_64(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 i; // rdx
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = ValidateArgTypes((__int64)a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, a2[10] + 40LL, 135LL, (__int64)&v15);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) == 128 )
      {
        v4 = ~*(_QWORD *)(a2[10] + 16LL);
      }
      else
      {
        if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
        {
          v6 = !_BitScanReverse64((unsigned __int64 *)&v7, *(_QWORD *)(a2[10] + 16LL));
        }
        else
        {
          if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
          {
            if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
            {
              v13 = 1LL;
              for ( i = *(_QWORD *)(a2[10] + 16LL); i; i >>= 4 )
              {
                v4 += v13 * (i & 0xF);
                v13 *= 10LL;
              }
            }
            else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
            {
              v9 = 0;
              v10 = *(_QWORD *)(a2[10] + 16LL);
              do
              {
                if ( !v10 )
                  break;
                v11 = v10 / 0xA;
                v12 = (v10 % 0xA) << v9;
                v9 += 4;
                v4 |= v12;
                v10 = v11;
              }
              while ( v9 < 0x40 );
            }
            goto LABEL_9;
          }
          v6 = !_BitScanForward64((unsigned __int64 *)&v7, *(_QWORD *)(a2[10] + 16LL));
        }
        if ( !v6 )
          v4 = (unsigned int)(v7 + 1);
      }
LABEL_9:
      v8 = v15;
      *(_WORD *)(a2[11] + 2LL) = 1;
      *(_QWORD *)(a2[11] + 16LL) = v4;
      return WriteObject(a1, v8, a2[11], 1LL);
    }
  }
  return result;
}
