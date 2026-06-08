/*
 * XREFs of DecodeGenAddressToHvPerfReg @ 0x1C001B904
 * Callers:
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B550 (RegisterHvFeedbackCountersCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecodeGenAddressToHvPerfReg(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v4; // ecx
  unsigned __int8 v5; // al
  __int16 v6; // ax

  v2 = 0;
  *(_QWORD *)a2 = 0LL;
  v4 = *a1 - 1;
  if ( !v4 )
  {
    *(_QWORD *)a2 = 0x20000000000000LL;
    *(_WORD *)a2 = *((_WORD *)a1 + 2);
    v5 = a1[3];
    switch ( v5 )
    {
      case 8u:
        *(_WORD *)(a2 + 2) = 0;
        goto LABEL_12;
      case 0x10u:
        v6 = 1;
        break;
      case 0x20u:
        v6 = 2;
        break;
      default:
LABEL_12:
        *(_BYTE *)(a2 + 4) = a1[1];
        *(_BYTE *)(a2 + 5) = a1[2];
        return v2;
    }
    *(_WORD *)(a2 + 2) = v6;
    goto LABEL_12;
  }
  if ( v4 == 126 )
  {
    *(_QWORD *)a2 = 0x10000000000000LL;
    *(_DWORD *)a2 = *((_DWORD *)a1 + 1);
    *(_BYTE *)(a2 + 4) = a1[1];
    *(_BYTE *)(a2 + 5) = a1[2];
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
