/*
 * XREFs of ExprOp1_32 @ 0x1C0068DD4
 * Callers:
 *     ExprOp1 @ 0x1C001ECF0 (ExprOp1.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 */

__int64 __fastcall ExprOp1_32(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  int v4; // edi
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v10; // ecx
  unsigned int i; // edx
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = ValidateArgTypes((__int64)a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, a2[10] + 40LL, 0x87u, (__int64)&v16);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) != 128 )
      {
        if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
        {
          v13 = !_BitScanReverse((unsigned int *)&v14, *(_DWORD *)(a2[10] + 16LL));
        }
        else
        {
          if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
          {
            if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
            {
              v10 = 1;
              for ( i = *(_DWORD *)(a2[10] + 16LL); i; i >>= 4 )
              {
                v12 = v10 * (i & 0xF);
                v10 *= 10;
                v4 += v12;
              }
            }
            else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
            {
              v6 = 0;
              v7 = *(_DWORD *)(a2[10] + 16LL);
              do
              {
                if ( !v7 )
                  break;
                v8 = v7 / 0xA;
                v9 = (v7 % 0xA) << v6;
                v6 += 4;
                v4 |= v9;
                v7 = v8;
              }
              while ( v6 < 0x20 );
            }
            goto LABEL_21;
          }
          v13 = !_BitScanForward((unsigned int *)&v14, *(_DWORD *)(a2[10] + 16LL));
        }
        if ( !v13 )
          v4 = v14 + 1;
        goto LABEL_21;
      }
      v4 = ~*(_DWORD *)(a2[10] + 16LL);
LABEL_21:
      v15 = v16;
      *(_WORD *)(a2[11] + 2LL) = 1;
      *(_DWORD *)(a2[11] + 16LL) = v4;
      return WriteObject(a1, v15, a2[11]);
    }
  }
  return result;
}
