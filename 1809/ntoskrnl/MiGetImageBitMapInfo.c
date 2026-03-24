/*
 * XREFs of MiGetImageBitMapInfo @ 0x1400D9530
 * Callers:
 *     MiReturnImageBase @ 0x1405F0514 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x14064F7FC (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  int v4; // ecx
  int v5; // ecx
  unsigned __int64 result; // rax

  a2[1] = 0LL;
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        *a2 = &dword_140438DA0;
        result = (unsigned __int64)&dword_140438D88;
        a2[1] = &dword_140438D88;
      }
      else
      {
        result = (unsigned __int64)&dword_140438D88;
        *a2 = &dword_140438D88;
      }
      if ( a3 )
        *a3 = 2013265920LL;
      if ( a4 )
      {
        result = (unsigned int)dword_140438D7C;
        goto LABEL_7;
      }
    }
    else
    {
      result = (unsigned __int64)&dword_140438DB0;
      *a2 = &dword_140438DB0;
      if ( a3 )
      {
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
      }
      if ( a4 )
      {
        result = (unsigned int)dword_140438D9C;
LABEL_7:
        *a4 = result;
      }
    }
  }
  else
  {
    result = (unsigned __int64)&dword_140438DA0;
    *a2 = &dword_140438DA0;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (unsigned int)dword_140438D98;
      goto LABEL_7;
    }
  }
  return result;
}
