/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C010FB38
 * Callers:
 *     InternalInvalidate3 @ 0x1C003B9D4 (InternalInvalidate3.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00D0644 (_ChangeWindowMessageFilterEx.c)
 *     SetHungFlag @ 0x1C00D8654 (SetHungFlag.c)
 *     SetGestureConfigSettings @ 0x1C012AC54 (SetGestureConfigSettings.c)
 *     _RegisterShellHookWindow @ 0x1C01300C0 (_RegisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  unsigned int *v4; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  struct tagWND **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax

  v4 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v4[3] )
    {
      v9 = *v4;
      v10 = 0;
      if ( *v4 )
      {
        v11 = (struct tagWND **)(v4 + 6);
        while ( a3 != *v11 )
        {
          ++v10;
          v11 += 2;
          if ( v10 >= v9 )
            goto LABEL_7;
        }
        return 0LL;
      }
LABEL_7:
      v12 = v4[1];
      if ( v9 < (unsigned int)v12 )
      {
LABEL_8:
        v13 = *v4;
        result = 1LL;
        *(_QWORD *)&v4[4 * v13 + 6] = a3;
        *(_QWORD *)&v4[4 * v13 + 4] = a2;
        ++*v4;
        return result;
      }
      if ( (unsigned __int64)(16 * v12) <= 0xFFFFFFFF && (unsigned int)(16 * v12 + 16) >= 0x10 )
      {
        v16 = 16 * v12 + 16;
        v17 = 16LL * v4[2];
        if ( v17 <= 0xFFFFFFFF && v16 + (unsigned int)v17 >= v16 )
        {
          v15 = UserReAllocPoolZInit(v4, v16, v16 + (unsigned int)v17, 1819702101LL);
          v4 = (unsigned int *)v15;
          if ( v15 )
          {
            *(_DWORD *)(v15 + 4) += *(_DWORD *)(v15 + 8);
            goto LABEL_13;
          }
        }
      }
    }
  }
  else if ( 16 * (unsigned __int64)a4 <= 0xFFFFFFFF && 16 * a4 < 0xFFFFFFF0 )
  {
    v15 = Win32AllocPoolZInit(16 * a4 + 16, 1819702101LL);
    v4 = (unsigned int *)v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = 0;
      *(_DWORD *)(v15 + 12) = 0;
      *(_DWORD *)(v15 + 4) = a4;
      *(_DWORD *)(v15 + 8) = a4;
LABEL_13:
      *a1 = (struct tagVWPL *)v15;
      goto LABEL_8;
    }
  }
  return 0LL;
}
