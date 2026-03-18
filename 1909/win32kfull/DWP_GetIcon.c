/*
 * XREFs of DWP_GetIcon @ 0x1C0101300
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( (unsigned int)a2 > 2 )
  {
    UserSetLastError(87LL, a2, a3, a4);
    return 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( (_DWORD)a2 == 1 )
      return *(_QWORD *)(v4 + 272);
    v5 = *(_QWORD *)(v4 + 264);
    if ( !(_DWORD)a2 )
    {
      if ( v5 )
      {
        v6 = HMValidateHandleNoRip(v5, 3);
        if ( v6 )
        {
          if ( *(char *)(v6 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v5;
  }
}
