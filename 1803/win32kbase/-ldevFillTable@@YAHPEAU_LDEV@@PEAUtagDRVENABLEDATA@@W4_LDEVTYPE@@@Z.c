/*
 * XREFs of ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00D32EC
 * Callers:
 *     ldevLoadDriver @ 0x1C0052FC0 (ldevLoadDriver.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00D3214 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ldevLoadInternal @ 0x1C00D69A0 (ldevLoadInternal.c)
 * Callees:
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C00D31B0 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 */

__int64 __fastcall ldevFillTable(__int64 a1, int *a2)
{
  struct _DRVFN *v3; // rcx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (struct _DRVFN *)*((_QWORD *)a2 + 1);
  v4 = *a2;
  v5 = a2[1];
  *(_DWORD *)(a1 + 56) = v4;
  if ( (unsigned int)bFillFunctionTable(v3, v5, (__int64 (**)(void))(a1 + 64)) )
  {
    LODWORD(v6) = 3;
    while ( 1 )
    {
      v6 = (unsigned int)(v6 - 1);
      if ( !*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0181C30[v6] + 64) )
        break;
      if ( !(_DWORD)v6 )
      {
        if ( *(_DWORD *)(a1 + 24) == 6 )
        {
          LODWORD(v7) = 7;
          while ( 1 )
          {
            v7 = (unsigned int)(v7 - 1);
            if ( !*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0181C00[v7] + 64) )
              break;
            if ( !(_DWORD)v7 )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          LODWORD(v8) = 2;
          while ( 1 )
          {
            v8 = (unsigned int)(v8 - 1);
            if ( (*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0181C20[2 * v8] + 64) == 0LL) != (*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0181C24[2 * v8] + 64) == 0LL) )
              break;
            if ( !(_DWORD)v8 )
              return 1LL;
          }
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
