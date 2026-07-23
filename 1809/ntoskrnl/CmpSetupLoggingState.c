/*
 * XREFs of CmpSetupLoggingState @ 0x14073374C
 * Callers:
 *     CmpInitializeSystemHive @ 0x1409C4B30 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetupLoggingState(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int v3; // eax

  result = *a2;
  if ( (result & 1) != 0 && (result & 4) == 0 )
  {
    *(_BYTE *)(a1 + 190) = 0;
    if ( (*a2 & 2) != 0 )
    {
      v3 = *a2 & 0x38;
      *(_DWORD *)(a1 + 164) = 5 - (v3 != 32);
      *(_BYTE *)(a1 + 188) = v3 == 32;
      *(_BYTE *)(a1 + 189) = v3 != 32;
      *(_DWORD *)(a1 + 180) = a2[3];
      *(_DWORD *)(a1 + 168) = a2[2];
      result = a2[3];
      *(_QWORD *)(a1 + 172) = (unsigned int)result;
    }
    else
    {
      *(_DWORD *)(a1 + 164) = (*a2 >> 3) & 7;
      *(_WORD *)(a1 + 188) = 257;
      *(_DWORD *)(a1 + 180) = a2[3];
      *(_DWORD *)(a1 + 168) = a2[2];
      *(_DWORD *)(a1 + 172) = a2[3];
      result = a2[4];
      *(_DWORD *)(a1 + 176) = result;
    }
  }
  return result;
}
