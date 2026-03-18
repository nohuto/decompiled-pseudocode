/*
 * XREFs of ?DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEAU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z @ 0x1C0057258
 * Callers:
 *     ?DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00574A4 (-DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetFirstType7Desc(
        const struct DisplayIDObj *a1,
        struct _DISPLAYID_TYPE7_TIMING_BLOCK **a2)
{
  int v2; // r11d
  int v3; // edi
  __int64 v5; // r9
  unsigned __int8 v6; // r8
  int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // rax

  *a2 = 0LL;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 5);
  v5 = *(_QWORD *)a1;
  if ( v3 > 0 )
  {
    do
    {
      v6 = *(_BYTE *)(v5 + 1);
      v7 = v6;
      if ( v6 )
      {
        v8 = (v5 + 4) & -(__int64)(v6 != 0);
        do
        {
          if ( !*(_BYTE *)v8 )
            break;
          v9 = (unsigned int)*(unsigned __int8 *)(v8 + 2) + 3;
          if ( (unsigned int)v7 < 3 || v7 < (int)v9 )
            break;
          if ( *(_BYTE *)v8 == 34 )
          {
            *a2 = (struct _DISPLAYID_TYPE7_TIMING_BLOCK *)v8;
            return 0LL;
          }
          v7 -= v9;
          v8 += v9;
        }
        while ( v7 > 0 );
      }
      ++v2;
      v5 += (unsigned __int8)(v6 + 5);
    }
    while ( v2 < v3 );
  }
  return 3221226021LL;
}
