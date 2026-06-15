/*
 * XREFs of ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140006370
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400063F0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ValidateSubmixDescriptor(struct SUBMIX_DESCRIPTOR *a1)
{
  unsigned int v1; // eax
  _WORD *v2; // rdx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 > 2u )
  {
    v4 = 373LL;
  }
  else
  {
    v1 = *((_DWORD *)a1 + 4);
    if ( v1 || !*((_DWORD *)a1 + 22) )
    {
      if ( *(_DWORD *)a1 == 2 && (*((_DWORD *)a1 + 22) || *((_QWORD *)a1 + 3)) )
      {
        v4 = 380LL;
      }
      else if ( *((_DWORD *)a1 + 22) > 5u )
      {
        v4 = 383LL;
      }
      else
      {
        v2 = (_WORD *)*((_QWORD *)a1 + 3);
        if ( v2 )
        {
          if ( v1 < 0x12 )
          {
            v4 = 388LL;
            goto LABEL_14;
          }
          if ( v1 < 0x28 && *v2 == 0xFFFE )
          {
            v4 = 389LL;
            goto LABEL_14;
          }
        }
        if ( *((_DWORD *)a1 + 10) < 0x12u )
        {
          v4 = 393LL;
        }
        else
        {
          if ( **((_WORD **)a1 + 6) != 0xFFFE || *((_DWORD *)a1 + 10) >= 0x28u )
            return 0LL;
          v4 = 394LL;
        }
      }
    }
    else
    {
      v4 = 377LL;
    }
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x80070057LL,
    v5);
  return 2147942487LL;
}
