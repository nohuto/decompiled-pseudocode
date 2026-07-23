/*
 * XREFs of MiGetImageBitMapInfo @ 0x1400D95B0
 * Callers:
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x1406509BC (MiSelectImageBase.c)
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
        *a2 = &dword_140439E60;
        result = (unsigned __int64)&dword_140439E48;
        a2[1] = &dword_140439E48;
      }
      else
      {
        result = (unsigned __int64)&dword_140439E48;
        *a2 = &dword_140439E48;
      }
      if ( a3 )
        *a3 = 2013265920LL;
      if ( a4 )
      {
        result = (unsigned int)dword_140439E3C;
        goto LABEL_7;
      }
    }
    else
    {
      result = (unsigned __int64)&dword_140439E70;
      *a2 = &dword_140439E70;
      if ( a3 )
      {
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
      }
      if ( a4 )
      {
        result = (unsigned int)dword_140439E5C;
LABEL_7:
        *a4 = result;
      }
    }
  }
  else
  {
    result = (unsigned __int64)&dword_140439E60;
    *a2 = &dword_140439E60;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (unsigned int)dword_140439E58;
      goto LABEL_7;
    }
  }
  return result;
}
