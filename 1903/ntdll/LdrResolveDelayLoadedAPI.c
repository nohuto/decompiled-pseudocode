/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x1800187C0
 * Callers:
 *     sub_180017368 @ 0x180017368 (sub_180017368.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CEF90 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800CF288 @ 0x1800CF288 (sub_1800CF288.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, int a3, int a4, __int64 *a5, int a6)
{
  int v7; // r12d
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v7 = (int)a2;
  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((dword_180162714 & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    v10 = sub_18001869C((unsigned __int64)a1, &v16, 0LL);
    if ( v10 < 0 )
    {
      v15 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1247,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          a1,
          v10);
        v15 = dword_18015FAB0;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v9 = *a5;
      v11 = v16;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
        {
          v9 = sub_18001BB70(v16, v7, a3, a4, (__int64)a5, a6);
        }
        else
        {
          v9 = sub_1800CF288(v16, v7, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            if ( (unsigned int)sub_18001AE58() )
            {
              v12 = sub_1800555A8(a1, (unsigned int)((_DWORD)a5 - (_DWORD)a1), (unsigned int)((_DWORD)a5 - (_DWORD)a1));
              if ( v12 < 0 )
              {
                v13 = dword_18015FAB0;
                if ( (dword_18015FAB0 & 3) != 0 )
                {
                  sub_1800CE318(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1226,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    (__int64)"LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are impo"
                             "rted in the DLL based at 0x%p.Status = 0x%x\n",
                    a1,
                    v12);
                  v13 = dword_18015FAB0;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      sub_18001B678(v11);
    }
  }
  return v9;
}
