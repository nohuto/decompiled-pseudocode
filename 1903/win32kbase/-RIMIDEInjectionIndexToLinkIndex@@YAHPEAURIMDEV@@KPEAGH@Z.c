/*
 * XREFs of ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C0148320
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C014A04C (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEInjectionIndexToLinkIndex(struct RIMDEV *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  unsigned __int16 *v9; // r11
  __int64 v10; // r9
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // edx
  unsigned __int16 v15; // ax
  _DWORD *v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  _DWORD *i; // rcx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // r8

  v4 = *((_QWORD *)a1 + 48);
  v5 = 0;
  *a3 = 0;
  v9 = *(unsigned __int16 **)(v4 + 72);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v10 = *((_QWORD *)a1 + 60);
    v11 = *(_DWORD *)(v10 + 720);
    v12 = *(_DWORD *)(v10 + 24);
    v13 = *(_QWORD *)(v10 + 712);
    v14 = v11 - 1;
    if ( v12 != 7 )
      v14 = v11;
    if ( v13 && a2 )
    {
      if ( a4 )
      {
        v15 = *(_WORD *)(v13 + 6);
        if ( v14 )
        {
          v16 = v9 + 2;
          v17 = v14;
          do
          {
            *((_WORD *)v16 - 1) = v15;
            v15 = *(_WORD *)(*(_QWORD *)(v13 + 24) + 8LL * v15 + 4);
            *v16 = 0;
            v16 += 2;
            --v17;
          }
          while ( v17 );
        }
      }
      else
      {
        v20 = 0;
        if ( v14 )
        {
          v21 = v9;
          while ( *v21 != a2 || !*((_DWORD *)v21 + 1) )
          {
            ++v20;
            v21 += 4;
            if ( v20 >= v14 )
              goto LABEL_10;
          }
          *a3 = v9[4 * v20 + 1];
          return 1;
        }
      }
LABEL_10:
      v18 = 0;
      if ( !v14 )
        return v5;
      for ( i = v9 + 2; *i; i += 2 )
      {
        if ( ++v18 >= v14 )
          return v5;
      }
      *a3 = v9[4 * v18 + 1];
      v9[4 * v18] = a2;
      *(_DWORD *)&v9[4 * v18 + 2] = 1;
      return 1;
    }
  }
  return 1LL;
}
