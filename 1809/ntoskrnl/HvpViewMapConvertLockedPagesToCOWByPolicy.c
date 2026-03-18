/*
 * XREFs of HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140708834
 * Callers:
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x14070877C (HvHiveConvertLockedPagesToCowByPolicy.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1405F9CD0 (HvpViewMapFindViewForFileOffset.c)
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x14070888C (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 */

__int64 __fastcall HvpViewMapConvertLockedPagesToCOWByPolicy(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 ViewForFileOffset; // rdi
  __int64 result; // rax

  v1 = 4096LL;
  if ( *(__int64 *)(a1 + 8) <= 4096 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 32) &= ~4u;
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v1);
      result = HvpMappedViewConvertLockedPagesToCOWByPolicy(a1, ViewForFileOffset);
      if ( (int)result < 0 )
        break;
      v1 = *(_QWORD *)(ViewForFileOffset + 48);
      if ( v1 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_4;
    }
  }
  return result;
}
